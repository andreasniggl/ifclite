
#include <iostream>
#include <fstream>
//#include <vector>

#include "Model.h"
#include "StepWriter.h"
#include "StepParser.h"
#include "Guid.h"

#include "ifc5\IfcBeam.h"
#include "ifc5\IfcObjectPlacement.h"
#include "ifc5\IfcRelAssignsToProduct.h"

namespace ifc5
{

}



int main(int argc, char** argv)
{
   using namespace ifc5;

   try
   {
      ifc::Model model("IFC_2x5");

      // create model
      {
         auto* b1 = model.createEntity<IfcBeam>();
         b1->Name = "Beam 1";
         b1->GlobalId = ifc::Guid().toBase64();
         b1->PredefinedType = IfcBeamTypeEnum::BEAM;

         auto* b2 = model.createEntity<IfcBeam>();
         b2->Name = "Beam 2";
         b2->GlobalId = ifc::Guid().toBase64();
         //b2->PredefinedType = IfcBeamTypeEnum::JOIST;
         IfcBeamTypeEnum k = (IfcBeamTypeEnum)1;
         b2->PredefinedType = k;
         b2->Tag = "Some Tag";

         auto* plc = model.createEntity<IfcObjectPlacement>();
         plc->Name = "Object Plc";
         plc->X = 1.0;
         plc->Y = 3.0;

         b1->ObjectPlacement = plc;
         b2->ObjectPlacement = plc;

         auto* rel = model.createEntity<IfcRelAssignsToProduct>();
         rel->GlobalId = ifc::Guid().toBase64();
         rel->RelatingProduct = b1;
         rel->RelatedObjects.push_back(b2);

      }

      // write model to step file
      {
         std::ofstream fs;
         fs.open("test_ifc5.ifc");

         if (fs.is_open())
         {
            ifc::StepWriter w(fs);

            w.header.filename = "test_ifc5.ifc";
            w.header.organization = "SOFiSTiK AG";
            w.header.description = "ViewDefinition [IFC4 RV V1.1]";
            w.header.originating_system = "ifclite";

            model.serialize(w);
         }
      }

   }
   catch (std::exception& ex)
   {
      std::cout << "Exception " << ex.what() << std::endl;
   }
}
