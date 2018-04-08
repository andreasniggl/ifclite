// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcDoor : public IfcBuildingElement
   {
   public:
      virtual ~IfcDoor(){}

      explicit IfcDoor() = default;

      explicit IfcDoor(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcBuildingElement(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcDoor"; }

      boost::optional<IfcPositiveLengthMeasure> OverallHeight; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> OverallWidth; // optional parameter

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
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(OverallHeight);
         w.writeAttributeValue(OverallWidth);
         w.endEntity();
      }

   };

} // namespace ifc2x3

