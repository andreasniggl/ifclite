#ifndef IFC_IFGUID_H_INCLUDED
#define IFC_IFCGUID_H_INCLUDED

#include <string>

//#include <boost/optional.hpp>
//#include <boost/variant.hpp>

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace ifc
{

   static const char g_base64Encoding[] =
      "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_$";


   class Guid
   {
   public:

      Guid()
      {
         m_uuid = boost::uuids::random_generator()();
      }

      // returns the guid as 32 character string
      inline std::string toString() const
      {
         return boost::uuids::to_string(m_uuid);
      }

      // returns the guid as base64 using the encoding specified by ISO/IEC 11578:1996 
      std::string toBase64() const
      {
         // map 16 uint8 to six 32bit integers
         unsigned long num[6] = {
            m_uuid.data[0],                                                           //    16. byte  
            m_uuid.data[1] * 65536ul + m_uuid.data[2] * 256ul + m_uuid.data[3],       // 15-13. bytes 
            m_uuid.data[4] * 65536ul + m_uuid.data[5] * 256ul + m_uuid.data[6],       // 12-10. bytes
            m_uuid.data[7] * 65536ul + m_uuid.data[8] * 256ul + m_uuid.data[9],       // 09-07. bytes
            m_uuid.data[10] * 65536ul + m_uuid.data[11] * 256ul + m_uuid.data[12],    // 06-04. bytes
            m_uuid.data[13] * 65536ul + m_uuid.data[14] * 256ul + m_uuid.data[15]     // 03-01. bytes
         };

         // convert to base64
         std::string uuid64;
         int n = 2;
         char result[4];
         for (int i = 0; i < 6; ++i)
         {
            if (toBase64(num[i], result, n))
               uuid64.append(result, n);

            n = 4;
         }
         return uuid64;
      }

   private:
      boost::uuids::uuid m_uuid;

      static bool toBase64(unsigned long number, char result[4], int len)
      {
         unsigned long  act = number;

         for (int i = len - 1; i >= 0; --i) {
            result[i] = g_base64Encoding[static_cast<int>(act % 64)];
            act /= 64;
         }
         return (act == 0);
      }
   };	
}
#endif