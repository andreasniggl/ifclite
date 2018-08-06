#pragma once

#include <vector>
#include <iostream>
#include <sstream>

#include "Model.h"

namespace ifc
{

   class StepParser
   {
   public:
      StepParser(Model& model)
         : m_model(model) {}

      void parse(std::istream& is);

      template <class T>
      void parseAttributeValue(std::istream& is, boost::optional<T>& attr)
      {
         T value;
         if (parse_item(is, value))
         {
            attr = value;
         }
      }

      template <class T>
      void parseAttributeValue(std::istream& is, std::vector<T>& list)
      {
         list.clear();
         //throw new std::runtime_error("not implemented");
      }

      template <class T>
      void parseAttributeValue(std::istream& is, const char* enum_map[], int enum_count, boost::optional<T>& attr)
      {
         int ix;
         if ((ix = get_enum_index(is, enum_map, enum_count)) >= 0)
         {
            T enum_type = (T)ix;
            attr = enum_type;
         }
      }

      template <class T>
      void parseAttributeInstance(std::istream& is, T*& attr)
      {
         Entity* e;
         if (parse_item(is, e))
         {
            auto* a = dynamic_cast<T*>(e);
            if (a == nullptr)
               throw new std::runtime_error("Wrong type encountered in model at id = " + std::to_string(e->id()));
            else
               attr = a;
         }
      }

      template <class T>
      void parseAttributeInstance(std::istream& is, std::vector<T*>& list)
      {
         list.clear();
         
         std::string token;
         char c = ',';
         Entity* e;

         while (c > 0 && c != ')')
         {
            c = get_token(is, token);

            std::istringstream iss(token);
            if (parse_item(iss, e))
            {
               auto* a = dynamic_cast<T*>(e);
               if (a == nullptr)
                  throw new std::runtime_error("Wrong type encountered in model at id = " + std::to_string(e->id()));
               else
                  list.push_back(a);
            }
         }
      }

   private:
      Model& m_model;

      bool parse_item(std::istream& is, bool& );
      bool parse_item(std::istream& is, int& );
      bool parse_item(std::istream& is, double& );
      bool parse_item(std::istream& is, std::string& );
      bool parse_item(std::istream& is, Entity*&);

      char get_token(std::istream& is, std::string&);
      int get_enum_index(std::istream& is, const char* enum_map[], int enum_count);

   };
}
