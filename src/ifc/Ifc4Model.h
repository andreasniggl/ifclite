#pragma once

#include "StepWriter.h"
#include "Model.h"
#include "Guid.h"

#include "ifc4\IfcProject.h"
#include "ifc4\IfcPerson.h"
#include "ifc4\IfcOrganization.h"
#include "ifc4\IfcApplication.h"
#include "ifc4\IfcOwnerHistory.h"
#include "ifc4\IfcGeometricRepresentationContext.h"
#include "ifc4\IfcSIUnit.h"

namespace ifc4
{
   class Ifc4Model : public ifc::Model
   {
   public:
      Ifc4Model(const std::string& schema_name)
         : ifc::Model(schema_name)
      {
         initialize();
      }

      // overloads factory with initialization of Guid & Owner History
      template<class T>
      inline T* createEntity()
      {
         T* e = ifc::Model::createEntity<T>();

         if (std::is_base_of<IfcRoot, T>())
            initEntity((IfcRoot*)e);

         return e;
      }

      // overloads factory with initialization of Guid & Owner History
      template<class T, class..._Types>
      inline T* createEntity(_Types&&... _Args)
      {
         T* e = ifc::Model::createEntity<T>(std::forward<_Types>(_Args)...);

         if (std::is_base_of<IfcRoot, T>())
            initEntity((IfcRoot*)e);

         return e;
      }

   public:
      IfcProject* project = nullptr;
      IfcPerson* person = nullptr;
      IfcOrganization* organization = nullptr;
      IfcApplication* application = nullptr;
      IfcOwnerHistory* ownerHistory = nullptr;
      IfcGeometricRepresentationContext* representationContext = nullptr;

   private:


      template <typename T>
      void initEntity(T* e)
      {
         // nothing to do here
      }

      template <>
      void initEntity(IfcRoot* e)
      {
         e->GlobalId = ifc::Guid().toBase64(); // create new guid
         e->OwnerHistory = ownerHistory;
      }

      void initialize()
      {
         // project
         project = this->createEntity<IfcProject>();
         project->Name = "Default Project";

         // owner history
         ownerHistory = this->createEntity<IfcOwnerHistory>();
         ownerHistory->OwningApplication = application;
         ownerHistory->ChangeAction = IfcChangeActionEnum::NOCHANGE;
         ownerHistory->CreationDate = 0;

         auto* personAndOrganization = this->createEntity<IfcPersonAndOrganization>();
         ownerHistory->OwningUser = personAndOrganization;

         // person & organization
         person = this->createEntity<IfcPerson>();
         organization = this->createEntity<IfcOrganization>();

         personAndOrganization->ThePerson = person;
         personAndOrganization->TheOrganization = organization;

         application = this->createEntity<IfcApplication>();
         application->ApplicationDeveloper = organization;
         application->Version = "0.0.1";
         application->ApplicationFullName = "";
         application->ApplicationIdentifier = "";

         // units
         auto* unitAssignment = this->createEntity<IfcUnitAssignment>();

         auto* lengthUnit = this->createEntity<IfcSIUnit>();
         lengthUnit->Name = IfcSIUnitName::METRE;
         lengthUnit->UnitType = IfcUnitEnum::LENGTHUNIT;
         unitAssignment->Units.push_back(IfcUnit(lengthUnit));

         auto* angleUnit = this->createEntity<IfcSIUnit>();
         angleUnit->Name = IfcSIUnitName::RADIAN;
         angleUnit->UnitType = IfcUnitEnum::PLANEANGLEUNIT;
         unitAssignment->Units.push_back(IfcUnit(angleUnit));

         project->UnitsInContext = unitAssignment;

         // geometric representation context
         auto origin = this->createEntity<IfcCartesianPoint>();
         origin->Coordinates = { 0.0,0.0,0.0 };

         auto* globalZAxis = this->createEntity<IfcDirection>(std::vector<double>({ 0.0,0.0,1.0 }));
         auto* globalXAxis = this->createEntity<IfcDirection>(std::vector<double>({ 1.0,0.0,0.0 }));

         auto* worldCoordinateSystem = this->createEntity<IfcAxis2Placement3D>();
         worldCoordinateSystem->Location = origin;
         worldCoordinateSystem->Axis = globalZAxis;
         worldCoordinateSystem->RefDirection = globalXAxis;

         representationContext = this->createEntity<IfcGeometricRepresentationContext>();
         representationContext->CoordinateSpaceDimension = 3;
         representationContext->WorldCoordinateSystem = worldCoordinateSystem;

         project->RepresentationContexts.push_back(this->representationContext);
      }
   };
}