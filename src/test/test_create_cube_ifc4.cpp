
#include <iostream>
#include <fstream>
//#include <vector>

#include "Ifc4Model.h"

#include "ifc4\IfcSite.h"
#include "ifc4\IfcBuilding.h"
#include "ifc4\IfcBuildingStorey.h"
//#include "ifc4\IfcBuildingElementProxy.h"
#include "ifc4\IfcShapeRepresentation.h"
#include "ifc4\IfcProductDefinitionShape.h"
#include "ifc4\IfcWall.h"
#include "ifc4\IfcSlab.h"

#include "ifc4\IfcFaceBasedSurfaceModel.h"
#include "ifc4\IfcPolyLoop.h"
#include "ifc4\IfcTriangulatedFaceSet.h"

#include "ifc4\IfcGroup.h"

#include "ifc4\IfcRelAggregates.h"
#include "ifc4\IfcRelContainedInSpatialStructure.h"
#include "ifc4\IfcRelAssignsToGroup.h"

namespace ifc4
{

   IfcSlab* create_slab(Ifc4Model& model)
   {
      double pp[8][3] = { { 0.,0.,0. },{ 5.,0.,0. },{ 5.,3.,0. },{ 0.,3.,0. },
                          { 0.,0.,1. },{ 5.,0.,1. },{ 5.,3.,1. },{ 0.,3.,1. } };

      // create point list
      auto* pList = model.createEntity<IfcCartesianPointList3D>();
      for (int i = 0; i < 8; ++i)
      {
         std::vector<double> p(pp[i], pp[i] + 3);
         pList->CoordList.push_back(p);
      }

      int ix[12][3] = { {1,6,5}, {1,2,6}, {6,2,7}, {7,2,3}, {7,8,6}, {6,8,5}, {5,8,1}, {1,8,4}, {4,2,1}, {2,4,3}, {4,8,7}, {7,3,4} };

      // create face set
      auto* faceSet = model.createEntity<IfcTriangulatedFaceSet>();
      faceSet->Coordinates = pList;
      faceSet->Closed = true;
      
      for (int i = 0; i < 12; ++i)
      {
         std::vector<int> ci(ix[i], ix[i] + 3);
         faceSet->CoordIndex.push_back(ci);
      }

      auto* shapeRepresentation = model.createEntity<IfcShapeRepresentation>();
      shapeRepresentation->ContextOfItems = model.representationContext;
      shapeRepresentation->Items.push_back(faceSet);

      auto* productDefinitionShape = model.createEntity<IfcProductDefinitionShape>();
      productDefinitionShape->Representations.push_back(shapeRepresentation);

      auto* slab = model.createEntity<IfcSlab>();
      slab->Name = "A Slab";
      slab->Representation = productDefinitionShape;
      slab->PredefinedType = IfcSlabTypeEnum::FLOOR;

      return nullptr;
   }


   IfcWall* create_wall(Ifc4Model& model, const std::array<double,3>& origin)
   {
      // create cube
      IfcCartesianPoint* p[8];
      p[0] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ -1.0,-1.0,0.0 }));
      p[1] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ +1.0,-1.0,0.0 }));
      p[2] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ +1.0,+1.0,0.0 }));
      p[3] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ -1.0,+1.0,0.0 }));
      p[4] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ -1.0,-1.0,2.0 }));
      p[5] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ +1.0,-1.0,2.0 }));
      p[6] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ +1.0,+1.0,2.0 }));
      p[7] = model.createEntity<IfcCartesianPoint>(std::vector<double>({ -1.0,+1.0,2.0 }));

      for (int i = 0; i < 8; ++i)
      {
         p[i]->Coordinates[0] += origin[0];
         p[i]->Coordinates[1] += origin[1];
         p[i]->Coordinates[2] += origin[2];
      }

      int cn[6][4] = { { 0,3,2,1 },{ 4,5,6,7 },{ 0,1,5,4 },{ 1,2,6,5 },{ 2,3,7,6 },{ 3,0,4,7 } };

      auto* faceSet = model.createEntity<IfcConnectedFaceSet>();

      for (int ib = 0; ib < 6; ++ib)
      {
         auto* loop = model.createEntity<IfcPolyLoop>();
         for (int ip = 0; ip < 4; ++ip)
            loop->Polygon.push_back(p[cn[ib][ip]]);

         auto* outerBound = model.createEntity<IfcFaceBound>();
         outerBound->Bound = loop;
         outerBound->Orientation = true;

         auto* face = model.createEntity<IfcFace>();
         face->Bounds.push_back(outerBound);

         faceSet->CfsFaces.push_back(face);
      }

      auto* surfaceModel = model.createEntity<IfcFaceBasedSurfaceModel>();
      surfaceModel->FbsmFaces.push_back(faceSet);

      auto* shapeRepresentation = model.createEntity<IfcShapeRepresentation>();
      shapeRepresentation->ContextOfItems = model.representationContext;
      shapeRepresentation->Items.push_back(surfaceModel);

      auto* productDefinitionShape = model.createEntity<IfcProductDefinitionShape>();
      productDefinitionShape->Representations.push_back(shapeRepresentation);

      //auto* buildingElementProxy = model.createEntity<IfcBuildingElementProxy>();
      //buildingElementProxy->GlobalId = ifc::Guid().toBase64();
      //buildingElementProxy->OwnerHistory = ownerHistory;
      //buildingElementProxy->Name = "A Cube";
      //buildingElementProxy->Representation = productDefinitionShape;

      auto* wall = model.createEntity<IfcWall>();
      wall->Name = "A Wall";
      wall->Representation = productDefinitionShape;
      wall->PredefinedType = IfcWallTypeEnum::STANDARD;

      return wall;
   }

   void fill_model(Ifc4Model& model)
   {
      model.person->GivenName = "Andreas";
      model.person->FamilyName = "Niggl";

      model.application->ApplicationFullName = "ifclite test application";

      // site
      auto* site = model.createEntity<IfcSite>();
      site->Name = "Default Site";
      site->CompositionType = IfcElementCompositionEnum::ELEMENT;
       
      auto* project_aggr = model.createEntity<IfcRelAggregates>();
      project_aggr->RelatingObject = model.project;
      project_aggr->RelatedObjects.push_back(site);

      // building
      auto* building = model.createEntity<IfcBuilding>();
      building->Name = "Default Building";
      building->CompositionType = IfcElementCompositionEnum::ELEMENT;

      auto* site_aggr = model.createEntity<IfcRelAggregates>();
      site_aggr->RelatingObject = site;
      site_aggr->RelatedObjects.push_back(building);

      // building storey
      auto* storey = model.createEntity<IfcBuildingStorey>();
      storey->Name = "Default Building Storey";
      storey->CompositionType = IfcElementCompositionEnum::ELEMENT;

      auto* building_aggr = model.createEntity<IfcRelAggregates>();
      building_aggr->RelatingObject = building;
      building_aggr->RelatedObjects.push_back(storey);

      // element aggregation
      auto* element_aggr = model.createEntity<IfcRelContainedInSpatialStructure>();
      element_aggr->RelatingStructure = storey;

      auto* slab = create_slab(model);

      element_aggr->RelatedElements.push_back(slab);

      //auto* cube_a = create_wall(model, { 0.0,0.0,0.0 });
      //auto* cube_b = create_wall(model, { 3.0,0.0,0.0 });
      //

      //// add to aggregation
      //element_aggr->RelatedElements.push_back(cube_a);
      //element_aggr->RelatedElements.push_back(cube_b);


      //// create two new groups
      //auto* group_a = model.createEntity<IfcGroup>();
      //group_a->Name = "Phase A";

      //auto*  rel_to_group_a = model.createEntity<IfcRelAssignsToGroup>();
      //rel_to_group_a->RelatingGroup = group_a;
      //rel_to_group_a->RelatedObjects.push_back(cube_a);
      //rel_to_group_a->RelatedObjectsType = IfcObjectTypeEnum::PRODUCT;

      //auto* group_b = model.createEntity<IfcGroup>();
      //group_b->Name = "Phase B";

      //auto*  rel_to_group_b = model.createEntity<IfcRelAssignsToGroup>();
      //rel_to_group_b->RelatingGroup = group_b;
      //rel_to_group_b->RelatedObjects.push_back(cube_b);
      //rel_to_group_b->RelatedObjectsType = IfcObjectTypeEnum::PRODUCT;

   }
}



int main(int argc, char** argv)
{
   using namespace ifc4;

   try
   {
      Ifc4Model model(ifc4::SCHEMA_NAME);

      fill_model(model);

      std::ofstream fs;
      fs.open("D:\\sofistik\\proj\\ifclite\\test\\test.ifc");

      if (fs.is_open())
      {
         ifc::StepWriter w(fs);

         w.header.filename = "test.ifc";
         w.header.organization = "SOFiSTiK AG";
         w.header.description = "ViewDefinition [IFC4 RV V1.1]";
         w.header.originating_system = "ifclite";

         model.serialize(w);
      }

   }
   catch (std::exception& ex)
   {
      std::cout << "Exception " << ex.what() << std::endl;
   }
}
