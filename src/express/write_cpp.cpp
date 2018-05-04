
#include <algorithm>
#include <set>

#include "express_parse.h"

#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>


//#include <boost/variant/variant_fwd.hpp>

using namespace sof;

namespace util
{

   std::string map_to_cpp_type(const sdai::Identifier& type_name)
   {
      if (type_name == "BOOLEAN")
         return "bool";
      else if (type_name == "LOGICAL")
         return "bool";
      else if (type_name == "BINARY")
         return "int";
      else if (type_name == "INTEGER")
         return "int";
      else if (type_name == "NUMBER")
         return "int";
      else if (type_name == "REAL")
         return "double";
      else if (type_name == "STRING")
         return "std::string";

      return type_name;
   }

   //std::string mapBasicType(const sdai::SdaiType& basic_type)
   //{
   //   switch (basic_type)
   //   {
   //   case sdai::SdaiType::BOOLEAN: return "bool";
   //   case sdai::SdaiType::LOGICAL: return "bool";
   //   case sdai::SdaiType::INTEGER: return "int";
   //   case sdai::SdaiType::NUMBER: return "int";
   //   case sdai::SdaiType::REAL: return "double";
   //   case sdai::SdaiType::STRING: return "std::string";
   //   }
   //   throw std::runtime_error("Unexpected type");
   //}

   //void gen_code_step_attribute(std::ostream& fs, const sdai::ExpressSchema& schema, const sdai::Attribute& a)
   //{
   //   // create code for writing references to entities
   //   if (schema.isEntity(a.type_name))
   //   {
   //      if (a.is_scalar())
   //      {
   //         fs << "   if(" << a.name << ")" << std::endl;
   //         fs << "         os << \"#\" << " << a.name << "->Id();" << std::endl;
   //         fs << "      else" << std::endl;
   //         fs << "         os << \"$\";" << std::endl;
   //      }
   //      else
   //      {
   //         fs << "      os << \"(\";";
   //         fs << "      for( size_t i = 0 ; i < " << a.name << ".size() ; ++i)" << std::endl;
   //         fs << "      {" << std::endl;
   //         fs << "         const " << a.type_name << "& a = " << a.name << "[i];" << std::endl;
   //         fs << "         " << std::endl;
   //         fs << "         if(i>0) os << \",\";" << std::endl;
   //         fs << "         " << std::endl;
   //         fs << "         if(" << a.name << ")" << std::endl;
   //         fs << "            os << \"#\" << " << a.name << "->Id();" << std::endl;
   //         fs << "         else" << std::endl;
   //         fs << "            os << \"$\";" << std::endl;
   //         fs << "      }" << std::endl;
   //         fs << "      os << \")\";";
   //      }
   //   }
   //   else
   //   {

   //   }
   //}


   std::string get_attribute_declaration_type(const sdai::ExpressSchema& schema, const sdai::Attribute& a)
   {
      std::string declaration;

      //std::string array_type = a.bounds[0].limited() ? "std::array<" : "std::vector<";

      switch (a.storage_type)
      {
      case sdai::Attribute::StorageTypeEnum::InstanceScalar:
         declaration = a.type_name + "*";
         break;
      case sdai::Attribute::StorageTypeEnum::InstanceList:
         declaration = "std::vector<" + a.type_name + "*>";
         break;
      case sdai::Attribute::StorageTypeEnum::InstanceMatrix:
         declaration = "std::vector< std::vector<" + a.type_name + "*> >";
         break;
      case sdai::Attribute::StorageTypeEnum::ValueScalar:
      case sdai::Attribute::StorageTypeEnum::Enumeration:
      case sdai::Attribute::StorageTypeEnum::Select:
         declaration = "boost::optional<" + util::map_to_cpp_type(a.type_name) + ">";
         break;
      case sdai::Attribute::StorageTypeEnum::SelectList:
         declaration = "std::vector< boost::optional<" + util::map_to_cpp_type(a.type_name) + "> >";
         break;
      case sdai::Attribute::StorageTypeEnum::ValueList:
         declaration = "std::vector<" + util::map_to_cpp_type(a.type_name) + ">";
         break;
      case sdai::Attribute::StorageTypeEnum::ValueMatrix:
         declaration = "std::vector< std::vector<" + util::map_to_cpp_type(a.type_name) + "> >";
         break;
      }
      return declaration;
   }

   void write_header_text(boost::filesystem::ofstream& fs, const std::string& ifc_filename)
   {
      fs << "// Automatically generated by ifclite express parser from ";
      fs << ifc_filename << " express file - do not modify" << std::endl;
      fs << std::endl;
   }

   std::vector<size_t> get_types_sequence(const std::vector<sdai::TypeDefinition>& types)
   {
      std::vector<size_t> sequence;
      std::vector<bool> visits(types.size(), false);

      std::map<std::string, size_t> tmap;
      for (size_t i = 0; i < types.size(); ++i)
         tmap[types[i].name] = i;

      std::stack<size_t> stack;

      for (size_t i = 0; i < types.size(); ++i)
      {
         if (visits[i] == true)
            continue;

         stack.push(i);
         visits[i] = true;

         // visit all mapped types
         while (true)
         {
            auto jm = tmap.find(types[stack.top()].mapped_name);
            if (jm == tmap.end() || visits[jm->second] == true)
               break;

            stack.push(jm->second);
            visits[jm->second] = true;
         }

         while(!stack.empty())
         {
            sequence.push_back(stack.top());
            stack.pop();
         }
      }
      
      if (sequence.size() != types.size())
         throw new std::runtime_error("Error in determine correct ordering of types.");

      return sequence;
   }

}

void sdai::CppGenerator::generateInterface() const
{
   boost::filesystem::path root_dir(m_directory_root);
   
   if (!boost::filesystem::is_directory(root_dir))
      throw std::exception("directory not found");

   auto include_dir = boost::filesystem::path(m_directory_root) / m_schema.schema_name();

   // write type definitions
   generateTypeDefinitions(include_dir.string());

   // write entities
   for (const auto e : m_schema.entities())
   {
      generateEntityHeader(e, include_dir.string());
   }

}


void sdai::CppGenerator::generateTypeDefinitions(const std::string& include_directory) const
{
   // schema name (e.g. IFC2x4)
   std::string schema = m_schema.schema_name();
   std::string schema_uc = boost::to_upper_copy(schema);

   auto header_file = boost::filesystem::path(include_directory) / "IfcTypeDefinitions.h";

   // open file
   boost::filesystem::ofstream fs;
   fs.open(header_file);

   if (!fs.is_open())
      throw new std::runtime_error("Unable to open file: " + header_file.string());
   
   util::write_header_text(fs, schema);

   //// include guard
   //fs << "#ifndef " << schema_uc << "_TYPE_DEFINITIONS_H_INCLUDED" << std::endl;
   //fs << "#define " << schema_uc << "_TYPE_DEFINITIONS_H_INCLUDED" << std::endl;
   //fs << std::endl;
   fs << "#pragma once" << std::endl << std::endl;

   // includes
   fs << "#include <array>" << std::endl;
   fs << "#include <vector>" << std::endl;
   fs << "#include <string>" << std::endl;
   fs << std::endl;

   fs << "namespace " << schema << std::endl;
   fs << "{" << std::endl;

   // constant returning schema name
   fs << "   const char SCHEMA_NAME[] = \"" << schema_uc << "\";" << std::endl;
   fs << std::endl;

   // write types
   auto ordering = util::get_types_sequence(m_schema.types());

   for (size_t i=0; i<ordering.size(); ++i)
   {
      const auto& td = m_schema.types().at(ordering[i]);

      if (td.type == TypeDefinition::StorageTypeEnum::Scalar) // scalar
      {
         std::string cpp_type = util::map_to_cpp_type(td.mapped_name);

         fs << "   typedef " << cpp_type << " " << td.name << ";" << std::endl;
      }
      else if (td.type == TypeDefinition::StorageTypeEnum::Array) // array
      {
         size_t size = td.bounds[0].upper_bound;
         std::string cpp_type = util::map_to_cpp_type(td.mapped_name);

         if (td.bounds[0].limited())
         {
            fs << "   typedef " << "std::array<" << cpp_type << "," << size << "> " << td.name << ";" << std::endl;
         }
         else
         {
            fs << "   typedef " << "std::vector<" << cpp_type << "> " << td.name << ";" << std::endl;
         }
      }
      else if (td.type == TypeDefinition::StorageTypeEnum::Enumeration) // enumeration
      {
         fs << std::endl;
         //fs << "   typedef enum " << td.name << " {" << std::endl;
         fs << "   enum struct " << td.name << " {" << std::endl;
         for (size_t i = 0; i < td.items.size(); ++i)
         {
            if (i > 0) 
               fs << "," << std::endl;
            fs << "      " << td.items[i];
         }
         fs << std::endl << "   };" << std::endl;
         fs << std::endl;

         // string map
         fs << "   static const char * " << td.name << "StringMap[] = {" << std::endl;
         for (size_t i = 0; i < td.items.size(); ++i)
         {
            if (i > 0)
               fs << "," << std::endl;
            fs << "      \"" << td.items[i] << "\"";
         }
         fs << std::endl << "   };" << std::endl;
      }
      else if (td.type == TypeDefinition::StorageTypeEnum::Select) // select
      {
         this->generateSelectHeader(td,include_directory);
      }
   }

   fs << "}" << std::endl;
   //fs << "#endif" << std::endl;
}


void sdai::CppGenerator::generateSelectHeader(const TypeDefinition& td, const std::string& include_directory) const
{
   std::string schema = m_schema.schema_name();
   std::string schema_uc = boost::to_upper_copy(schema);

   auto filename = boost::filesystem::path(include_directory) / std::string(td.name + ".h");

   // open file
   boost::filesystem::ofstream fs;
   fs.open(filename);

   if (fs.is_open() == false)
      return;

   util::write_header_text(fs, schema);

   // include guard
   //std::string entity_name_uc = boost::to_upper_copy(std::string(td.name));
   //std::string header_guard = schema_uc + "_" + entity_name_uc + "_H_INCLUDED";
   //fs << "#ifndef " << header_guard << std::endl;
   //fs << "#define " << header_guard << std::endl;
   fs << "#pragma once" << std::endl << std::endl;

   // includes
   fs << "#include \"IfcTypeDefinitions.h\"" << std::endl;
   fs << std::endl;

   // include entities
   std::set<std::string> class_includes;
   for (const auto& name : td.items)
   {
      if (m_schema.getEntityByName(name)) // consider only entities
      {
         if (class_includes.find(name) != class_includes.end())
            continue; // already written

         class_includes.emplace(name);
         //fs << "   class " << name << ";" << std::endl;
         fs << "#include \"" << name << ".h\"" << std::endl;
      }
   }
   fs << std::endl;

   // open namespace
   fs << "namespace " << schema << std::endl;
   fs << "{" << std::endl;


   size_t max_items = std::min(td.items.size(), static_cast<size_t>(BOOST_VARIANT_LIMIT_TYPES));
   // TODO: warn if items exceed boost limit

   // write variant declaration
   fs << "   typedef boost::variant<";
   for (size_t i = 0; i < max_items; ++i)
   {
      const auto& name = td.items[i];
      if (i > 0)
         fs << ", ";

      fs << name;
      if (m_schema.getEntityByName(name))
         fs << "*"; // add pointer type
   }
   fs << "> " << td.name << ";" << std::endl;
   fs << std::endl;

   // write visitor
   fs << "   class " << td.name << "WriterVisitor : public boost::static_visitor<>" << std::endl;
   fs << "   {" << std::endl;
   fs << "   public:" << std::endl;
   fs << "      class " << td.name << "WriterVisitor(ifc::StepWriter& w)" << std::endl;
   fs << "         : m_w(w) {}" << std::endl;
   fs << std::endl;

   std::set<std::string> root_types;

   for (size_t i = 0; i < max_items; ++i)
   {
      const auto& name = td.items[i];

      if (m_schema.isEntity(name)) // instance pointer
      {
         fs << "      void operator() (" << name << "* p) const" << std::endl;
         fs << "      {" << std::endl;
         //fs << "         m_w.writeAttributeInstanceScalar(p);" << std::endl;
         fs << "         m_w.writeAttributeInstance(p);" << std::endl;
         fs << "      }" << std::endl;
      }
      else
      {
         // write only if basic root type not already processed
         std::string root_type = m_schema.getRootType(name);
         if (root_types.find(root_type) == root_types.end())
         {
            root_types.emplace(root_type);

            fs << "      void operator() (" << name << " p) const" << std::endl;
            fs << "      {" << std::endl;
            //fs << "         m_w.writeAttributeValueScalar(p);" << std::endl;
            fs << "         m_w.writeAttributeValue(p);" << std::endl;
            fs << "      }" << std::endl;
         }
      }
   }

   fs << "   private:" << std::endl;
   fs << "      ifc::StepWriter& m_w;" << std::endl;
   fs << "   };" << std::endl;
   fs << std::endl;


   // close namespace
   fs << "}" << std::endl;
   //fs << "#endif" << std::endl;
}


void sdai::CppGenerator::generateEntityHeader(const Entity& e, const std::string& include_directory) const
{
   std::string schema = m_schema.schema_name();
   std::string schema_uc = boost::to_upper_copy(schema);

   // debug
   //if (e.name == "IfcBSplineSurface")
   //   int i = 0;

   auto filename = boost::filesystem::path(include_directory) / std::string(e.name + ".h");

   // open file
   boost::filesystem::ofstream fs;
   fs.open(filename);

   if (fs.is_open() == false)
      return;

   util::write_header_text(fs, schema);

   // include header guard
   //std::string entity_name_uc = boost::to_upper_copy(std::string(e.name));
   //std::string header_guard = schema_uc + "_" + entity_name_uc + "_H_INCLUDED";
   //fs << "#ifndef " << header_guard << std::endl;
   //fs << "#define " << header_guard << std::endl;
   fs << "#pragma once" << std::endl << std::endl;

   // includes
   fs << "#include \"IfcTypeDefinitions.h\"" << std::endl;
   if(e.parent.size()>0)
      fs << "#include \"" << e.parent << ".h\"" << std::endl;
   else
      fs << "#include \"Entity.h\"" << std::endl;

   // include instance header
   for (const auto& a : e.attributes)
   {
      if (a.storage_type == Attribute::StorageTypeEnum::InstanceScalar ||
          a.storage_type == Attribute::StorageTypeEnum::InstanceList ||
          a.storage_type == Attribute::StorageTypeEnum::InstanceMatrix ||
          a.storage_type == Attribute::StorageTypeEnum::Select ||
          a.storage_type == Attribute::StorageTypeEnum::SelectList)
      {
         fs << "#include \"" << a.type_name << ".h\"" << std::endl;
      }
   }

   fs << std::endl;

   // open namespace
   fs << "namespace " << schema << std::endl;
   fs << "{" << std::endl;

   // start writing class
   std::string parent_name = (e.parent.empty()) ? std::string("ifc::Entity") : e.parent;
   fs << "   class " << e.name << " : public " << parent_name << std::endl;

   fs << "   {" << std::endl;
   fs << "   public:" << std::endl;

   // virtual destructor
   fs << "      virtual ~" << e.name << "(){}" << std::endl;
   fs << std::endl;

   // create default constructor
   fs << "      explicit " << e.name << "() = default;" << std::endl;
   fs << std::endl;

   // create constructor allowing initialize all non-optional arguments
   {
      auto attrs = m_schema.getAllAttributesOfEntity(e.name, false);
      if (attrs.size() > 0)
      {
         fs << "      explicit " << e.name << "(";
         for (size_t i=0; i<attrs.size() ; ++i)
         {
            const auto* a = attrs[i];
            if (i > 0) fs << ", ";

            switch (a->storage_type)
            {
            case Attribute::StorageTypeEnum::InstanceScalar:
               fs << util::map_to_cpp_type(a->type_name) << "* _" << a->name;
               break;
            case Attribute::StorageTypeEnum::InstanceList:
               fs << "const std::vector<" << util::map_to_cpp_type(a->type_name) << "*>& _" << a->name;
               break;
            case Attribute::StorageTypeEnum::InstanceMatrix:
               fs << "const std::vector< std::vector<" << util::map_to_cpp_type(a->type_name) << "*> >& _" << a->name;
               break;
            case Attribute::StorageTypeEnum::ValueList:
               fs << "const std::vector<" << util::map_to_cpp_type(a->type_name) << ">& _" << a->name;
               break;
            case Attribute::StorageTypeEnum::ValueMatrix:
               fs << "const std::vector< std::vector<" << util::map_to_cpp_type(a->type_name) << "> >& _" << a->name;
               break;
            case Attribute::StorageTypeEnum::SelectList:
               fs << "const std::vector< boost::optional<" << util::map_to_cpp_type(a->type_name) << "> >& _" << a->name;
               break;
            default:
               fs << "const " << util::map_to_cpp_type(a->type_name) << "& _" << a->name;
            }
         }
         fs << ")" << std::endl;

         size_t local_required = std::count_if(e.attributes.begin(), e.attributes.end(), [](const Attribute& a) { return !a.is_optional;});
         size_t first_local = attrs.size()- local_required;

         // pass first parameters to parent class
         fs << "         " << ": " << parent_name << "(";
         for (size_t i = 0; i < first_local; ++i)
         {
            if (i > 0) fs << ", ";
            fs << "_" << attrs[i]->name;
         }
         fs << ")";

         // pass remaining parameters to local members
         for (size_t i = first_local; i<attrs.size(); ++i)
         {
            fs << ", " << attrs[i]->name << "(_" << attrs[i]->name << ")";
         }
         fs << " {}" << std::endl;
         fs << std::endl;
      }
   }

   // function returning name of class
   fs << "      virtual std::string className() const { return \"" << e.name << "\"; }" << std::endl;
   fs << std::endl;

   // write attributes
   for (const auto& a : e.attributes)
   {
      std::string declaration_type = util::get_attribute_declaration_type(m_schema, a);
      //std::string cpp_type = util::map_to_cpp_type(a.type_name);

      fs << "      " << declaration_type << " " << a.name << ";";
      fs << (a.is_optional ? " // optional parameter" : " // required parameter");
      fs << std::endl;
   }
   fs << std::endl;

   // enter protected ...
   fs << "   protected:" << std::endl;

   // serialization routine
   {
      fs << "      virtual void serialize(ifc::StepWriter& w) const" << std::endl;
      fs << "      {" << std::endl;
      fs << "         w.beginEntity(this);" << std::endl;

      auto all_attrs = m_schema.getAllAttributesOfEntity(e.name);
      for (const auto a : all_attrs)
      {
         switch (a->storage_type)
         {
         case Attribute::StorageTypeEnum::InstanceScalar:
            if(a->is_derivable)
               fs << "         w.writeAttributeInstance(" << a->name << ",true);" << std::endl;
            else
               fs << "         w.writeAttributeInstance(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::InstanceList:
            fs << "         w.writeAttributeInstance(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::InstanceMatrix:
            fs << "         w.writeAttributeInstance(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::ValueScalar:
            //fs << "         w.writeAttributeValueScalar(" << a->name << ");" << std::endl;
            fs << "         w.writeAttributeValue(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::ValueList:
            //fs << "         w.writeAttributeValueList(" << a->name << ");" << std::endl;
            fs << "         w.writeAttributeValue(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::ValueMatrix:
            //fs << "         w.writeAttributeValueMatrix(" << a->name << ");" << std::endl;
            fs << "         w.writeAttributeValue(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::Enumeration:
            //fs << "         w.writeAttributeValueEnumeration(" << util::map_to_cpp_type(a->type_name) << "StringMap, " << a->name << ");" << std::endl;
            fs << "         w.writeAttributeValue(" << util::map_to_cpp_type(a->type_name) << "StringMap, " << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::Select:
            fs << "         w.writeAttributeSelect<" << util::map_to_cpp_type(a->type_name) << "WriterVisitor>(" << a->name << ");" << std::endl;
            break;
         case Attribute::StorageTypeEnum::SelectList:
            fs << "         w.writeAttributeSelect<" << util::map_to_cpp_type(a->type_name) << "WriterVisitor>(" << a->name << ");" << std::endl;
            break;         
         default:
            throw std::exception("Unknown type");
         }
      }

      fs << "         w.endEntity();" << std::endl;
      fs << "      }" << std::endl;
   }

   fs << std::endl;

   //// test
   //auto all_attrs = m_schema.getAllAttributesOfEntity(e.name);
   //for (const auto a0 : all_attrs)
   //   fs << "      //" << a0->name << std::endl;

   fs << "   };" << std::endl; // end of class
   fs << std::endl;


   fs << "} // namespace " << schema << std::endl;
   fs << std::endl;

   //fs << "#endif" << std::endl;
}