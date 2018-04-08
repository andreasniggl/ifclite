#include <iostream>
#include <fstream>

#include "express_parse.h"


int main(int argc, char** argv)
{
   try 
   {
      std::ifstream fs;
      fs.open("D:\\sofistik\\proj\\ifclite\\def\\ifc4_add2_mod.exp");
      //fs.open("D:\\sofistik\\proj\\ifclite\\def\\ifc2x3_mod.exp");
      if (!fs.is_open())
         return 1;

      // parse schema from express file
      sof::sdai::ExpressSchema schema;
      schema.parseSchema(fs);

      std::cout << "Parsed Express Schema " << schema.schema_name() << std::endl;
      std::cout << "Found " << schema.types().size() << " Types" << std::endl;
      std::cout << "Found " << schema.entities().size() << " Entities" << std::endl;

      fs.close();

      // write schema to express file for comparison
      std::ofstream ofs;
      ofs.open("D:\\sofistik\\proj\\ifclite\\def\\ifc4_out.exp");

      if (ofs.is_open())
      {
         schema.writeToExpress(ofs);
         ofs.close();
      }

      // generate cpp interface
      sof::sdai::CppGenerator cpp_generator(schema);
      cpp_generator.setDirectoryRoot("D:\\sofistik\\proj\\ifclite\\src\\ifc");
     
      cpp_generator.generateInterface();


   }
   catch (std::exception& ex)
   {
      std::cout << "Exception " << ex.what() << std::endl;
   }
   return 0;
}