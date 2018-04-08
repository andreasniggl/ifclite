
#include <string>
#include <vector>
#include <map>
#include <locale>
#include <algorithm>

#include <boost/algorithm/string.hpp>

#include "express_parse.h"

using namespace sof;


namespace std
{

   // parses an identifier consisting of alphanumeric characters
   istream& operator >> (istream& is, sdai::Identifier& id)
   {
      id.clear();
      char type_name = 0;

      while (is.good())
      {
         char c = is.peek();

         if (std::isspace(c,is.getloc()))
         {
            if (id.size() > 0)
               break;

            is.get();
         }
         else if (std::isalnum(c,is.getloc()) || c=='_') 
         {
            id.push_back(is.get());
         }
         else // insert next non-alphanumeric literal
         {
            if (id.size() == 0)
            {
               throw std::exception("Inconsistency reading Identifier");
               id.push_back(is.get());
            }
            break;
         }
      }

      return is;
   }

   // parses a range, i.e. [0:?]
   istream& operator >> (istream& is, sdai::Range& r)
   {
      r.lower_bound = 1;
      r.upper_bound = 0;

      bool toParse = false;
      std::string value;

      while (is.good())
      {
         char c = is.get();

         if (std::isspace(c, is.getloc()))
         {
            if (value.size()>0)
               break;
         }
         else if (c == '[')
         {

         }
         else if (c == ']')
         {
            break;
         }
         else if (c == ':')
         {
            if (value.size() > 0)
            {
               if (std::isdigit(value[0], is.getloc()))
               {
                  r.lower_bound = std::stoi(value);
               }
               else
               {
                  throw std::exception("Inconsistency reading Range");
               }
               value.clear();
            }
         }
         else
         {
            value.push_back(c);
         }
      }
      if (value.size() > 0)
      {
         if (std::isdigit(value[0], is.getloc()))
         {
            r.upper_bound = std::stoi(value);
         }
         else if(value[0]=='?')
         {
            r.upper_bound = sdai::Range::UNLIMITED;
         }
         else
            throw std::exception("Inconsistency reading Range");
      }
      return is;
   }

   // parses an enumeration, e.g. (FIRST,SECOND)
   istream& operator >> (istream& is, sdai::IdentifierList& enums)
   {
      std::string token;
      bool read = false;
      while (is.good())
      {
         char c = is.get();

         if (std::isspace(c,is.getloc()))
         {
            // continue;
         }
         else if (c == '(')
         {
            read = true;
         }
         else if (c == ')')
         {
            break;
         }
         else if (read && c == ',')
         {
            if(token.size()>0)
               enums.push_back(token);
            token.clear();
         }
         else if (read && (std::isalnum(c,is.getloc()) || c=='_'))
         {
            token.push_back(c);
         }
         else if(read)
            throw std::exception("Inconsistency reading Enumeration");
      }
      if (token.size() > 0)
         enums.push_back(token);

      return is;
   }
}


namespace util
{

   // proceeds until the given character
   void until(std::istream& is, char ct)
   {
      while (is.good())
      {
         char c = is.get();
         if (c == ct)
            break;
      }
   }

   // proceeds until the given string
   void until(std::istream& is, const std::string& target)
   {
      std::string token;
      while (is.good())
      {
         char c = is.get();

         if (std::isspace(c, is.getloc()))
         {
            if (token.size() > 0)
               token.clear();
         }
         else
         {
            token.push_back(c);
            if (token == target)
               break;
         }
      }
   }

   void _assert(bool test, const std::string& name)
   {
      if (test == false)
      {
         std::string msg = "Inconsistency in Entity" + name; 
         throw std::exception(msg.c_str());
      }
   }
}


sdai::TypeDefinition sdai::TypeDefinition::parse(std::istream& is)
{
   TypeDefinition td;

   char eq;
   Identifier name, type_id;

   is >> name >> eq >> type_id;
   util::_assert(eq == '=', name);

   if (type_id == "ARRAY" || type_id == "LIST" || type_id == "SET")
   {
      Identifier of;
      Identifier list_type;
      Range ra;

      is >> ra >> of >> list_type;

      td.name = name;
      td.type = TypeDefinition::StorageTypeEnum::Array;
      td.bounds[0] = ra;
      td.mapped_name = list_type;
   }
   else if (type_id == "ENUMERATION")
   {
      IdentifierList items;
      Identifier of;

      is >> of >> items;

      td.name = name;
      td.type = TypeDefinition::StorageTypeEnum::Enumeration;
      td.items = items;
   }
   else if (type_id == "SELECT")
   {
      IdentifierList items;

      is >> items;

      td.name = name;
      td.type = TypeDefinition::StorageTypeEnum::Select;
      td.items = items;
   }
   else
   {
      td.name = name;
      td.type = TypeDefinition::StorageTypeEnum::Scalar;
      td.mapped_name = type_id;

      //auto type_name = util::map_type(type_id);

      //if (type_name != SdaiType::UNDEFINED)
      //{
      //   TypeDefinitionScalar ts;
      //   ts.name = name;
      //   ts.type_name = type_name;
      //   tvariant = ts;
      //}
      //else
      //{
      //   TypeDefinitionMapped tm;
      //   tm.name = name;
      //   tm.mapped_name = type_id;
      //   tvariant = tm;
      //}
   }

   util::until(is, "END_TYPE");

   return td;
}


size_t sdai::Attribute::dimension() const
{
   if (bounds[0].undefined())
      return 0;
   else if (bounds[1].undefined())
      return 1;
   else
      return 2;
}


sdai::Attribute sdai::Attribute::parse(std::istream& is, const sdai::Identifier& _name)
{
   Attribute a;

   a.name = _name;
   a.storage_type = StorageTypeEnum::Undefined; // will be set later
   a.is_optional = false;

   char c;

   is >> c;
   util::_assert(c == ':', a.name);

   Identifier token;
   is >> token;

   if (token == "OPTIONAL")
   {
      a.is_optional = true;
      is >> token;
   }

   if (token == "SET" || token == "LIST" || token == "ARRAY")
   {
      Identifier of;
      Identifier type;
      is >> a.bounds[0] >> of >> type;

      if (type == "UNIQUE")
      {
         // TODO: store information
         is >> type;
      }

      if (type == "SET" || type == "LIST" || type == "ARRAY") // is a matrix
      {
         is >> a.bounds[1] >> of >> type;
      }

      if (type == "UNIQUE")
      {
         // TODO: store information
         is >> type;
      }

      a.type_name = type;

      util::_assert(of == "OF", a.name);
   }
   else
   {
      a.type_name = token;
   }

   c = is.peek();
   if (c != ';' && c != ',' && c != '(')
   {
      is >> token;
      if (token == "FOR")
      {
         is >> a.inverse_target;
      }
   }

   return a;
}


sdai::Entity sdai::Entity::parse(std::istream& is)
{
   Entity e;
   
   is >> e.name;
   util::_assert(e.name.size() > 0, "Entity");

   // debug
   //if (e.name == "IfcBSplineSurface")
   if (e.name == "IfcStructuralLoadConfiguration")
      int k = 0;

   // read header
   while (is.good())
   {
      if (is.peek() == ';') // end of header
      {
         is.get();
         break;
      }

      Identifier token, of;
      char c, d;

      is >> token;

      if (token == "SUBTYPE")
      {
         is >> of >> c;
         is >> token >> d;

         util::_assert(c == '(' && d == ')', e.name);

         e.parent = token;
      }
      else if (token == "SUPERTYPE")
      {
         // TODO

         util::until(is, ')');
         is >> c;
      }
      else if (token == "ABSTRACT")
      {
         e.is_abstract = true;
      }
      else if (token == "END_ENTITY")
      {
         util::_assert(is.get() == ';', e.name);
         break;
      }
   }

   // read attributes
   int att_type = 1;


   while(is.good())
   {
      Identifier token;
      is >> token;

      if (token == "INVERSE")
      {
         att_type = 2;
      }
      else if(token == "WHERE")
      {
         att_type = 3;
      }
      else if (token == "DERIVE")
      {
         att_type = 4;
      }
      else if (token == "UNIQUE")
      {
         att_type = 5;
      }
      else if (token == "END_ENTITY")
      {
         util::_assert(is.get() == ';', e.name);
         break;
      }
      else if (att_type==1) // read standard attributes
      {
         auto a = Attribute::parse(is, token);
         if (a.name.size() > 0)
            e.attributes.push_back(a);

         util::until(is, ';');
      }
      else if (att_type == 2) // read invserse attributes
      {
         auto a = Attribute::parse(is, token);
         if (a.name.size() > 0)
            e.inverse_attributes.push_back(a);

         util::until(is, ';');
      }
      else if (att_type > 0) // read other kind of attributes
      {
         // TODO:
         util::until(is, ';');
      }
   }
   util::_assert(e.name.size() > 0, e.name);

   return e;
}

const sdai::Attribute* sdai::Entity::getAttributeByName(const std::string& name) const
{
   for (size_t i=0; i<attributes.size(); ++i)
   {
      if (attributes[i].name == name)
         return &(attributes[i]);
   }
   return nullptr;
}


const sdai::TypeDefinition* sdai::ExpressSchema::getTypeByName(const std::string& name) const
{
   const auto it = m_types_by_name.find(name);
   if (it == m_types_by_name.end())
      return nullptr;
   else
      return &(m_types.at(it->second));
}

const sdai::Entity* sdai::ExpressSchema::getEntityByName(const std::string& name) const
{
   const auto it = m_entities_by_name.find(name);
   if (it == m_entities_by_name.end())
      return nullptr;
   else
      return &(m_entities.at(it->second));
}

std::vector<const sdai::Attribute*> sdai::ExpressSchema::getAllAttributesOfEntity(const std::string& entity_name, bool include_optionals) const
{
   std::vector<const Attribute*> attributes;

   std::string current_name = entity_name;

   //if (entity_name == "IfcPoint")
   //{
   //   return attributes;
   //}

   // loop through hierarchy
   while(true)
   {
      const Entity* e = getEntityByName(current_name);
      if (e == nullptr)
         break;

      // add attributes of class in reversed order
      for( auto it=e->attributes.rbegin() ; it!=e->attributes.rend() ; ++it)
      {
         if (!include_optionals && it->is_optional)
            continue;

         attributes.push_back(&(*it));
      }

      current_name = e->parent;
   }
   // reverse complete sequence to get base class attributes first
   std::reverse(attributes.begin(), attributes.end());
   return attributes;
}

std::string sdai::ExpressSchema::getRootType(const std::string& type_name) const
{
   std::string current_type = type_name;

   while (true)
   {
      const TypeDefinition* t = getTypeByName(current_type);
      if (t == nullptr)
         break;

      current_type = t->mapped_name;
   }
   return current_type;
}


void sdai::ExpressSchema::parseSchema(std::istream& is)
{
   using namespace sdai;

   // parse input stream
   while (is.good())
   {
      std::string token;
      is >> token;

      if (token == "TYPE")
      {
         auto ty = TypeDefinition::parse(is);

         if (ty.name.size() > 0)
         {
            m_types_by_name[ty.name] = m_types.size();
            m_types.push_back(ty);
         }
      }
      else if (token == "ENTITY")
      {
         auto e = Entity::parse(is);

         if (e.name.size() > 0)
         {
            m_entities_by_name[e.name] = m_entities.size();
            m_entities.push_back(e);
         }
      }
      else if (token == "SCHEMA")
      {
         Identifier schema_name;
         is >> schema_name;

         m_schema_name = boost::to_lower_copy(std::string(schema_name));
      }
      else if (token == "FUNCTION")
      {
         util::until(is, "END_FUNCTION");
      }
      else if (token == "(*")
      {
         util::until(is, "*)");
      }
   }

   // postproc attributes
   for (auto& e : m_entities)
   {
      // debug
      //if (e.name == "IfcGeometricRepresentationContext")
      //   int k = 0;

      for (auto & a : e.attributes)
      {
         // check type of attribute
         if (const auto* ei = this->getEntityByName(a.type_name))
         {
            if (a.dimension() == 2)
               a.storage_type = Attribute::StorageTypeEnum::InstanceMatrix;
            else if (a.dimension() == 1)
               a.storage_type = Attribute::StorageTypeEnum::InstanceList;
            else
               a.storage_type = Attribute::StorageTypeEnum::InstanceScalar;
         }
         else if (const auto* ty = this->getTypeByName(a.type_name))
         {
            if (ty->type == TypeDefinition::StorageTypeEnum::Scalar)
            {
               if (a.dimension() == 2)
                  a.storage_type = Attribute::StorageTypeEnum::ValueMatrix;
               else if (a.dimension() == 1)
                  a.storage_type = Attribute::StorageTypeEnum::ValueList;
               else
                  a.storage_type = Attribute::StorageTypeEnum::ValueScalar;
            }
            else if (ty->type == TypeDefinition::StorageTypeEnum::Array)
               a.storage_type = Attribute::StorageTypeEnum::ValueList;
            else if (ty->type == TypeDefinition::StorageTypeEnum::Enumeration)
               a.storage_type = Attribute::StorageTypeEnum::Enumeration;
            else if (ty->type == TypeDefinition::StorageTypeEnum::Select)
            {
               if (a.dimension() == 1)
                  a.storage_type = Attribute::StorageTypeEnum::SelectList;
               else
                  a.storage_type = Attribute::StorageTypeEnum::Select;
            }
            else
               throw std::exception("Unknown type encountered");
         }
         else
         {
            if (a.dimension() == 2)
               a.storage_type = Attribute::StorageTypeEnum::ValueMatrix;
            else if (a.dimension() == 1)
               a.storage_type = Attribute::StorageTypeEnum::ValueList;
            else
               a.storage_type = Attribute::StorageTypeEnum::ValueScalar;
         }
      }

      // allow IfcSIUnit.Dimension to be derived
      if (e.name == "IfcNamedUnit")
      {
         for (size_t i = 0; i<e.attributes.size(); ++i)
            if (e.attributes[i].name == "Dimensions") e.attributes[i].is_derivable = true;
      }
   }

   // check for NULL in enums
   for (auto& t : m_types)
   {
      auto it = std::find(t.items.begin(), t.items.end(), "NULL");
      if (it != t.items.end())
         (*it) = "NULLTYPE";
   }
}

   
