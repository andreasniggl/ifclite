// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcRoof : public IfcBuildingElement
   {
   public:
      virtual ~IfcRoof(){}

      explicit IfcRoof() = default;

      explicit IfcRoof(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcRoofTypeEnum& _ShapeType)
         : IfcBuildingElement(_GlobalId, _OwnerHistory), ShapeType(_ShapeType) {}

      virtual std::string className() const { return "IfcRoof"; }

      boost::optional<IfcRoofTypeEnum> ShapeType; // required parameter

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
         w.writeAttributeValue(IfcRoofTypeEnumStringMap, ShapeType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

