// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSpatialStructureElement.h"
#include "IfcPostalAddress.h"

namespace ifc4
{
   class IfcBuilding : public IfcSpatialStructureElement
   {
   public:
      virtual ~IfcBuilding(){}

      explicit IfcBuilding() = default;

      explicit IfcBuilding(const IfcGloballyUniqueId& _GlobalId)
         : IfcSpatialStructureElement(_GlobalId) {}

      virtual std::string className() const { return "IfcBuilding"; }

      boost::optional<IfcLengthMeasure> ElevationOfRefHeight; // optional parameter
      boost::optional<IfcLengthMeasure> ElevationOfTerrain; // optional parameter
      IfcPostalAddress* BuildingAddress; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(LongName);
         w.writeAttributeValue(IfcElementCompositionEnumStringMap, CompositionType);
         w.writeAttributeValue(ElevationOfRefHeight);
         w.writeAttributeValue(ElevationOfTerrain);
         w.writeAttributeInstance(BuildingAddress);
         w.endEntity();
      }

   };

} // namespace ifc4

