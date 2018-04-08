
#include <iostream>
#include <fstream>

#include "Model.h"
#include "StepWriter.h"
#include "Guid.h"

#include "ifc2x3\IfcOwnerHistory.h"
#include "ifc2x3\IfcSIUnit.h"
#include "ifc2x3\IfcRelAggregates.h"
#include "ifc2x3\IfcProject.h"
#include "ifc2x3\IfcSite.h"
#include "ifc2x3\IfcProduct.h"
#include "ifc2x3\IfcBuilding.h"
#include "ifc2x3\IfcBuildingStorey.h"
#include "ifc2x3\IfcRelContainedInSpatialStructure.h"
#include "ifc2x3\IfcBuildingElementProxy.h"
#include "ifc2x3\IfcProductDefinitionShape.h"
#include "ifc2x3\IfcShapeRepresentation.h"
#include "ifc2x3\IfcGeometricRepresentationContext.h"
#include "ifc2x3\IfcAxis2Placement3D.h"
#include "ifc2x3\IfcFaceBasedSurfaceModel.h"
#include "ifc2x3\IfcPolyLoop.h"

namespace ifc2x3
{
   void create_cube(ifc::Model& model)
   {
      // person & organization
      auto* person = model.createEntity<IfcPerson>();
      auto* organization = model.createEntity<IfcOrganization>();

      auto* personAndOrganization = model.createEntity<IfcPersonAndOrganization>();
      personAndOrganization->ThePerson = person;
      personAndOrganization->TheOrganization = organization;

      auto* application = model.createEntity<IfcApplication>();
      application->ApplicationDeveloper = organization;
      application->Version = "0.0.1";
      application->ApplicationFullName = "";
      application->ApplicationIdentifier = "";

      // owner history
      auto* ownerHistory = model.createEntity<IfcOwnerHistory>();
      ownerHistory->OwningUser = personAndOrganization;
      ownerHistory->OwningApplication = application;
      ownerHistory->ChangeAction = IfcChangeActionEnum::NOCHANGE;
      ownerHistory->CreationDate = 0;

      // units
      auto* lengthUnit = model.createEntity<IfcSIUnit>();
      lengthUnit->Name = IfcSIUnitName::METRE;
      lengthUnit->UnitType = IfcUnitEnum::LENGTHUNIT;

      auto* unitAssignment = model.createEntity<IfcUnitAssignment>();
      unitAssignment->Units.push_back(IfcUnit(lengthUnit));

      // geometric representation context
      auto origin = model.createEntity<IfcCartesianPoint>();
      origin->Coordinates = { 0.0,0.0,0.0 };

      auto* globalZAxis = model.createEntity<IfcDirection>(std::vector<double>({ 0.0,0.0,1.0 }));
      auto* globalXAxis = model.createEntity<IfcDirection>(std::vector<double>({ 1.0,0.0,0.0 }));

      auto* worldCoordinateSystem = model.createEntity<IfcAxis2Placement3D>();
      worldCoordinateSystem->Location = origin;
      worldCoordinateSystem->Axis = globalZAxis;
      worldCoordinateSystem->RefDirection = globalXAxis;

      auto* representationContext = model.createEntity<IfcGeometricRepresentationContext>();
      representationContext->CoordinateSpaceDimension = 3;
      representationContext->WorldCoordinateSystem = worldCoordinateSystem;

      // project
      auto* project = model.createEntity<IfcProject>();
      project->GlobalId = ifc::Guid().toBase64();
      project->OwnerHistory = ownerHistory;
      project->UnitsInContext = unitAssignment;
      project->Name = "Default Project";
      project->RepresentationContexts.push_back(representationContext);

      auto* project_aggr = model.createEntity<IfcRelAggregates>();
      project_aggr->GlobalId = ifc::Guid().toBase64();
      project_aggr->OwnerHistory = ownerHistory;
      project_aggr->RelatingObject = project;

      // site
      auto* site = model.createEntity<IfcSite>();
      site->GlobalId = ifc::Guid().toBase64();
      site->OwnerHistory = ownerHistory;
      site->Name = "Default Site";
      site->CompositionType = IfcElementCompositionEnum::ELEMENT;

      project_aggr->RelatedObjects.push_back(site);

      auto* site_aggr = model.createEntity<IfcRelAggregates>();
      site_aggr->GlobalId = ifc::Guid().toBase64();
      site_aggr->OwnerHistory = ownerHistory;
      site_aggr->RelatingObject = site;

      // building
      auto* building = model.createEntity<IfcBuilding>();
      building->GlobalId = ifc::Guid().toBase64();
      building->OwnerHistory = ownerHistory;
      building->Name = "Default Building";
      building->CompositionType = IfcElementCompositionEnum::ELEMENT;

      site_aggr->RelatedObjects.push_back(building);

      auto* building_aggr = model.createEntity<IfcRelAggregates>();
      building_aggr->GlobalId = ifc::Guid().toBase64();
      building_aggr->OwnerHistory = ownerHistory;
      building_aggr->RelatingObject = building;

      // building storey
      auto* storey = model.createEntity<IfcBuildingStorey>();
      storey->GlobalId = ifc::Guid().toBase64();
      storey->OwnerHistory = ownerHistory;
      storey->Name = "Default Building Storey";
      storey->CompositionType = IfcElementCompositionEnum::ELEMENT;

      building_aggr->RelatedObjects.push_back(storey);

      // element aggregation
      auto* element_aggr = model.createEntity<IfcRelContainedInSpatialStructure>();
      element_aggr->GlobalId = ifc::Guid().toBase64();
      element_aggr->OwnerHistory = ownerHistory;
      element_aggr->RelatingStructure = storey;

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

      int cn[6][4] = { {0,3,2,1},{4,5,6,7},{0,1,5,4},{1,2,6,5},{2,3,7,6},{3,0,4,7} };

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
      shapeRepresentation->ContextOfItems = representationContext;
      shapeRepresentation->Items.push_back(surfaceModel);

      auto* productDefinitionShape = model.createEntity<IfcProductDefinitionShape>();
      productDefinitionShape->Representations.push_back(shapeRepresentation);

      auto* buildingElementProxy = model.createEntity<IfcBuildingElementProxy>();
      buildingElementProxy->GlobalId = ifc::Guid().toBase64();
      buildingElementProxy->OwnerHistory = ownerHistory;
      buildingElementProxy->Name = "A Cube";
      buildingElementProxy->Representation = productDefinitionShape;

      // add to aggregation
      element_aggr->RelatedElements.push_back(buildingElementProxy);
   }
}



int main(int argc, char** argv)
{
   using namespace ifc2x3;

   try
   {
      ifc::Model model(ifc2x3::SCHEMA_NAME);

      create_cube(model);

      std::ofstream fs;
      fs.open("cube_ifc2x3.ifc");

      if (fs.is_open())
      {
         ifc::StepWriter w(fs);
         w.header.description = "ViewDefinition [Coordination View V2.0]";

         model.serialize(w);
      }

   }
   catch (std::exception& ex)
   {
      std::cout << "Exception " << ex.what() << std::endl;
   }
}
