
#include <iostream>
#include <fstream>
//#include <vector>

#include "Model.h"
#include "StepParser.h"
#include "StepWriter.h"

#include "ifc5/IfcBeam.h"
#include "ifc5/IfcRelAssignsToProduct.h"

namespace ifc5
{

}



int main(int argc, char** argv)
{
   using namespace ifc5;

   try
   {
      ifc::Model model("IFC_2x5");

      // read step file
      std::ifstream is;
      {
         is.open("C:/D/sofistik/proj/ifclite.git/test/test_ifc5.ifc");
         if (!is.is_open())
         {
            std::cout << "Warning: Failed to open ifc file" << std::endl;
            return 1;
         }
      }

      // parse file
      ifc::StepParser parser(model);

      parser.parse(is);


      // write model to new step file
      {
         std::ofstream fs;
         fs.open("C:/D/sofistik/proj/ifclite.git/test/test_ifc5_out.ifc");

         if (fs.is_open())
         {
            ifc::StepWriter w(fs);
            model.serialize(w);
         }
      }

   }
   catch (std::exception& ex)
   {
      std::cout << "Exception " << ex.what() << std::endl;
   }
}
