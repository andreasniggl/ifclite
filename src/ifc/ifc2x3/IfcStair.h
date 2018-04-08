// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcStair : public IfcBuildingElement
   {
   public:
      virtual ~IfcStair(){}

      explicit IfcStair() = default;

      explicit IfcStair(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcStairTypeEnum& _ShapeType)
         : IfcBuildingElement(_GlobalId, _OwnerHistory), ShapeType(_ShapeType) {}

      virtual std::string className() const { return "IfcStair"; }

      boost::optional<IfcStairTypeEnum> ShapeType; // required parameter

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
         w.writeAttributeValue(IfcStairTypeEnumStringMap, ShapeType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

