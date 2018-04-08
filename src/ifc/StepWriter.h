#pragma once

#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <iomanip>
//#include <ctime>
//#include <time.h>

#include <boost/variant.hpp>
#include <boost/optional.hpp>
#include <boost/algorithm/string.hpp>


namespace ifc
{

   struct StepHeader
   {
      std::string description;

      std::string filename;
      std::string author;
      std::string organization;
      std::string preprocessor_version;
      std::string originating_system;
      std::string authorization;
   };

   class StepWriter
   {
   public:
      StepWriter(std::ostream& _os)
         : m_os(_os) 
      {
         m_os.setf(std::ios_base::fixed);
      }

      template <class T>
      void beginEntity(const T* entity)
      {
         attr_count = 0;
         std::string name_uc = boost::to_upper_copy(entity->className());
         
         m_os << "#" << entity->id() << " = " << name_uc << "(";
      }

      void endEntity()
      {
         m_os << ");" << std::endl;
      }

      //template<class T>
      //void writeAttributeValue(const T& a)
      //{
      //   if (attr_count > 0) m_os << ", ";

      //   write(a);

      //   attr_count++;
      //}

      template<class T>
      void writeAttributeValue(const boost::optional<T>& a)
      {
         if (attr_count > 0) m_os << ", ";

         if (a)
            write(*a);
         else
            m_os << "$";

         attr_count++;
      }

      template <class T>
      void writeAttributeValue(const std::vector<T>& list)
      {
         if (attr_count > 0) m_os << ", ";

         if (!list.empty())
         {
            m_os << "(";
            for (size_t i = 0; i < list.size(); ++i)
            {
               const T& a = list[i];

               if (i > 0) m_os << ", ";
               write(a);
            }
            m_os << ")";
         }
         else
            m_os << "$";

         attr_count++;
      }

      //template <class T>
      //void writeAttributeValueMatrix(const std::vector< std::vector<T>> & matrix)
      //{

      //}

      template <class T>
      void writeAttributeValue(const char* enum_map[], const boost::optional<T>& enum_type)
      {
         if (attr_count > 0) m_os << ", ";

         if (enum_type)
         {
            std::string str = enum_map[static_cast<size_t>(*enum_type)];
            m_os << "." << str << ".";
         }
         else
            m_os << "$";

         attr_count++;
      }

      template <class T>
      void writeAttributeInstance(const T* a, bool is_derivable = false)
      {
         if (attr_count > 0) m_os << ", ";

         if (a)
            m_os << '#' << a->id();
         else if (is_derivable)
            m_os << '*';
         else
            m_os << '$';

         attr_count++;
      }

      template <class T>
      void writeAttributeInstance(const std::vector<T*>& list)
      {
         if (attr_count > 0) m_os << ", ";

         if (!list.empty())
         {
            m_os << "(";
            for (size_t i = 0; i < list.size(); ++i)
            {
               const T* a = list[i];

               if (i > 0) m_os << ", ";

               if (a)
                  m_os << "#" << a->id();
               else
                  m_os << "$";
            }
            m_os << ")";
         }
         else
            m_os << "$";

         attr_count++;
      }

      template <class T>
      void writeAttributeInstance(const std::vector< std::vector<T*>> & matrix)
      {
         // TODO:
      }


      template <class Visitor, class T>
      void writeAttributeSelect(const boost::optional<T>& a)
      {
         if (a)
         {
            Visitor v(*this);
            boost::apply_visitor(v, *a);
         }
         else
            m_os << "$";
      }

      template <class Visitor, class T>
      void writeAttributeSelect(const std::vector<boost::optional<T>>& list)
      {
         if(attr_count > 0) m_os << ", ";

         if (!list.empty())
         {
            m_os << "(";
            for (size_t i = 0; i < list.size(); ++i)
            {
               const boost::optional<T>& a = list[i];

               Visitor v(*this);
               boost::apply_visitor(v, *a);
            }
            m_os << ")";
         }
         else
            m_os << "$";
      }

      void writeAttributeNull()
      {
         if (attr_count > 0) m_os << ", ";

         m_os << "$";

         attr_count++;
      }

      void startSerialization(const std::string& file_schema)
      {
         auto tnow = std::chrono::system_clock::now();
         auto tnow_c = std::chrono::system_clock::to_time_t(tnow);

         m_os << "ISO-10303-21;" << std::endl;

         // write header
         m_os << "HEADER;" << std::endl;
         m_os << std::endl;

         m_os << "FILE_DESCRIPTION(" << std::endl;
         m_os << "/* description */          ('" << header.description << "')," << std::endl;
         m_os << "/* implementation_level */ '2;1'" << ");" << std::endl;
         m_os << std::endl;

         m_os << "FILE_NAME(" << std::endl;
         m_os << "/* name */                 '" << header.filename << "'," << std::endl;
         m_os << "/* time_stamp */           '" << std::put_time(std::localtime(&tnow_c),"%FT%T") << "'," << std::endl;
         m_os << "/* author */               ('" << header.author << "')," << std::endl;
         m_os << "/* organization */         ('" << header.organization << "')," << std::endl;
         m_os << "/* preprocessor_version */ '" << header.preprocessor_version << "'," << std::endl;
         m_os << "/* originating_system */   '" << header.originating_system << "'," << std::endl;
         m_os << "/* authorization */        '');" << std::endl;
         m_os << std::endl;

         m_os << "FILE_SCHEMA(('" << file_schema << "'));" << std::endl;
         m_os << "ENDSEC;" << std::endl;
         m_os << std::endl;

         // start writing data
         m_os << "DATA;" << std::endl;
      }

      void endSerialization()
      {
         m_os << "ENDSEC;" << std::endl;
         m_os << "END-ISO-10303-21;" << std::endl;
      }

   public:
      StepHeader header;

   private:
      std::ostream& m_os;

      size_t attr_count;

   private:

      void write(bool b)
      {
         if (b)
            m_os << ".T.";
         else
            m_os << ".F.";
      }

      void write(const std::string& s)
      {
         m_os << "'" << s << "'";
      }

      template<class T, size_t _Size>
      void write(const std::array<T, _Size>& list)
      {
         m_os << "(";
         for (size_t i = 0; i < list.size(); ++i)
         {
            if (i > 0) m_os << ",";
            m_os << list[i];
         }
         m_os << ")";
      }

      template<class T>
      void write(const std::vector<T>& list)
      {
         m_os << "(";
         for (size_t i = 0; i < list.size(); ++i)
         {
            if (i > 0) m_os << ",";
            m_os << list[i];
         }
         m_os << ")";
      }      

      template<class T>
      void write(T x)
      {
         m_os << x;
      }

   };	
}
