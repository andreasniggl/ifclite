
#include "express_parse.h"

using namespace sof;

namespace util
{
   //std::string toString(sdai::SdaiType type_name)
   //{
   //   switch (type_name)
   //   {
   //   case sdai::SdaiType::BOOLEAN: return "BOOLEAN";
   //   case sdai::SdaiType::LOGICAL: return "LOGICAL";
   //   case sdai::SdaiType::INTEGER: return "INTEGER";
   //   case sdai::SdaiType::NUMBER: return "NUMBER";
   //   case sdai::SdaiType::REAL: return  "REAL";
   //   case sdai::SdaiType::STRING: return  "STRING";
   //   case sdai::SdaiType::GLOBALID: return  "GLOBALID";
   //   }
   //   return "UNDEFINED";
   //}
}

void sdai::ExpressSchema::writeToExpress(std::ostream& os)
{

   // write types
   for (const auto& td : m_types)
   {
      if (td.type == TypeDefinition::StorageTypeEnum::Scalar) // scalar
      {
         os << "TYPE " << td.name << " = ";
         os << td.mapped_name;
      }
      else if (td.type == TypeDefinition::StorageTypeEnum::Array) // array
      {
         if(td.bounds[0].limited())
            os << "TYPE " << td.name << " = ARRAY";
         else
            os << "TYPE " << td.name << " = LIST";

         os << " [" << td.bounds[0].lower_bound << ":";
         if (td.bounds[0].limited())
            os << td.bounds[0].upper_bound << "]";
         else
            os << "?]";

         os << " OF " << td.mapped_name;
      }
      else if (td.type == TypeDefinition::StorageTypeEnum::Enumeration) // enumeration
      {
         os << "TYPE " << td.name << " = ";
         os << "ENUMERATION OF" << std::endl;

         os << "    (";
         for (size_t i = 0; i < td.items.size(); ++i)
         {
            if (i > 0) os << "    ,";
            os << td.items.at(i);
            if (i < td.items.size() - 1) os << std::endl;
         }
         os << ")";
      }
      else if (td.type == TypeDefinition::StorageTypeEnum::Select) // select
      {
         os << "TYPE " << td.name << " = ";
         os << "SELECT" << std::endl;

         os << "    (";
         for (size_t i = 0; i < td.items.size(); ++i)
         {
            if (i > 0) os << "    ,";
            os << td.items.at(i);
            if (i < td.items.size() - 1) os << std::endl;
         }
         os << ")";
      }
      else
      {
         throw std::exception("Undefined EntityType encountered");
      }

      os << ";" << std::endl;
      os << "END_TYPE;" << std::endl;
      os << std::endl;
   }

   // write entities
   for (const auto& e : m_entities)
   {
      os << "ENTITY " << e.name;

      if (e.parent)
      {
         os << std::endl;
         os << " SUBTYPE OF (" << e.parent << ")";
      }
      os << ";" << std::endl;

      // lambda writes an attribute
      auto write_attributes = [&](const Attribute& a) {
         os << "    " << a.name << " : ";

         if (a.is_optional)
            os << "OPTIONAL ";

         for (size_t i = 0; i < a.dimension(); ++i)
         {
            os << "LIST [" << a.bounds[i].lower_bound << ":";
            if (a.bounds[i].upper_bound >= Range::UNLIMITED)
               os << "?";
            else
               os << a.bounds[i].upper_bound;
            os << "] OF ";
         }

         os << a.type_name; 
      };

      // write attributes
      for (const auto& a : e.attributes)
      {
         write_attributes(a);
         os << ";" << std::endl;
      }

      // write inverse attributes
      if (e.inverse_attributes.size() > 0)
         os << " INVERSE" << std::endl;

      for (const auto& ia : e.inverse_attributes)
      {
         write_attributes(ia);
         if (ia.inverse_target.size() > 0)
         {
            os << " FOR " << ia.inverse_target;
         }
         os << ";" << std::endl;

      }

      os << "END_ENTITY;" << std::endl;
      os << std::endl;
   }

}