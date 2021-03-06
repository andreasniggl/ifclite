// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc4
{
   class IfcDoor : public IfcBuildingElement
   {
   public:
      virtual ~IfcDoor(){}

      explicit IfcDoor() = default;

      explicit IfcDoor(const IfcGloballyUniqueId& _GlobalId)
         : IfcBuildingElement(_GlobalId) {}

      virtual std::string className() const { return "IfcDoor"; }

      boost::optional<IfcPositiveLengthMeasure> OverallHeight; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> OverallWidth; // optional parameter
      boost::optional<IfcDoorTypeEnum> PredefinedType; // optional parameter
      boost::optional<IfcDoorTypeOperationEnum> OperationType; // optional parameter
      boost::optional<IfcLabel> UserDefinedOperationType; // optional parameter

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
         w.writeAttributeValue(IfcDoorTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(IfcDoorTypeOperationEnumStringMap, OperationType);
         w.writeAttributeValue(UserDefinedOperationType);
         w.endEntity();
      }

   };

} // namespace ifc4

