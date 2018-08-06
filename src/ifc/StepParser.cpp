#include <sstream>
#include <locale>

#include "StepParser.h"

//#include "ifc4\IfcCartesianPoint.h"
//#include "ifc4\IfcTriangulatedFaceSet.h"

namespace util
{
   void read_until(std::istream& is, char delim)
   {
      while (is.good())
      {
         if (is.get() == delim)
            break;
      }
   }

   std::string read_until(std::istream& is, char delim, bool skipws)
   {
      std::string name;
      while (is.good())
      {
         char c = is.get();
         if (c == delim)
            break;

         if(!skipws || isspace(c) == false)
            name.push_back(c);
      }
      return name;
   }

   //template <class T>
   //bool parse_generic(std::istream& is, T& value)
   //{
   //   int state = -1;

   //   while (isspace(is.peek()))
   //      is.get();

   //   char c = is.peek();
   //   if (c == '$')
   //   {
   //      is.get();
   //   }
   //   else if(c != ',')
   //   {
   //      is >> std::skipws >> value;
   //   }

   //   is >> std::skipws >> c; // read until comma
   //   if (c != ',')
   //   {
   //      throw new std::runtime_error("Unknown token encountered");
   //   }
   //   return true;
   //}

   // returns the last token read (==0) for eof
   char get_token(std::istream& is, std::string& s)
   {
      enum State { Stop, ReadingToken, ReadingString } state = ReadingToken;

      char c;
      char clast = 0;
      s.clear();

      while ((c = is.peek()) != EOF)
      {
         is.get();

         if (state == ReadingString) // read unconditionally with all whitespaces until "'"
         {
            if (c == '\'')
               state = Stop; // stop reading
            else
            {
               s.push_back(c);
            }
         }
         else
         {
            if (c == ',' || c == ')') // item finished
            {
               clast = c;
               break;
            }
            else if (c == '(')
            {
               assert(s.size() == 0);
            }
            else if (state == ReadingToken) // read w/o whitespaces
            {
               if (s.size() == 0 && c == '\'') // start reading
               {
                  state = ReadingString;
               }
               else if (isspace(c) == false)
               {
                  s.push_back(c);
               }
            }
         }
      }

      // check for empty or derived key
      if (s == "$" || s == "*")
      {
         s.clear();
      }
      return clast;
   }
}


void ifc::StepParser::parse(std::istream& is)
{

   std::string line;
   bool read_data = false;

   int line_count = 0;
   std::map<size_t, std::string> contents;

   // parse input
   while (std::getline(is, line))
   {
      line_count++;

      if (read_data)
      {
         try
         {
            std::istringstream iss(line);

            char c;
            int id;
            char eq;

            iss >> std::skipws >> c >> id >> eq;

            std::string name = util::read_until(iss,'(', true);
            std::string content = util::read_until(iss, EOF, false); // TODO: wrong if string contains a ')'

            // create entity
            Entity* e = m_model.createEntityByName(name, id);

            if (e != nullptr)
            {
               contents[e->id()] = content;
            }
         }
         catch (std::exception e)
         {
            std::cout << "Error: unable to parse line " << line_count << ": " << e.what() << std::endl;
         }
      }
      else
      {
         if (line == "DATA;")
            read_data = true;
         if (line == "ENDSEC;")
            read_data = false;
      }
   }

   // parse contents
   for (const auto it : contents)
   {
      Entity* e = m_model.entityById(it.first);
      if (e != nullptr)
      {
         std::istringstream iss(it.second);

         e->parse(iss, *this);
      }
   }

}


bool ifc::StepParser::parse_item(std::istream& is, std::string& s)
{
   util::get_token(is, s);
   return s.size() > 0;
}

bool ifc::StepParser::parse_item(std::istream& is, bool& b)
{
   std::string token;
   util::get_token(is, token);

   if (token.size() > 2)
   {
      if (token == ".T.")
         b = true;
      else if (token == ".F.")
         b = false;
      else
         throw new std::runtime_error("Unknown token encountered at boolean value: " + token);

      return true;
   }
   return false;
}


bool ifc::StepParser::parse_item(std::istream& is, double& d)
{
   std::string token;
   util::get_token(is, token);

   if (token.size() > 0)
   {
      d = std::stod(token);
      return true;
   }
   return false;
}

bool ifc::StepParser::parse_item(std::istream& is, int& i)
{
   std::string token;
   util::get_token(is, token);

   if (token.size() > 0)
   {
      i = std::stoi(token);
      return true;
   }
   return false;
}


bool ifc::StepParser::parse_item(std::istream& is, Entity*& e)
{
   std::string token;
   util::get_token(is, token);

   char hash;
   int id;

   if (token.size() > 0)
   {
      std::istringstream iss(token);

      iss >> hash >> id;

      if(hash == '#' && id > 0)
      {
         e = m_model.entityById(id);
         if (e != nullptr)
            return true;
         else
            std::cout << "Unable to find entity by id = " << id;
      }
      else
      {
         throw new std::runtime_error("Failure in parsing entity");
      }
   }
   return false;
}

char ifc::StepParser::get_token(std::istream& is, std::string& token)
{
   return util::get_token(is, token);
}

int ifc::StepParser::get_enum_index(std::istream& is, const char* enum_map[], int enum_count)
{
   std::string token;
   util::get_token(is, token);

   size_t l = token.length();
   if (l > 2)
   {
      if (token[0] == '.' && token[l - 1] == '.')
      {
         token = token.substr(1, l - 2);
         
         for (int i = 0; i < enum_count; ++i)
         {
            if (enum_map[i] == token)
            {
               return i;
            }
         }
      }
   }
   return -1;
}