// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc4
{
   class IfcWall : public IfcBuildingElement
   {
   public:
      virtual ~IfcWall(){}

      explicit IfcWall() = default;

      explicit IfcWall(const IfcGloballyUniqueId& _GlobalId)
         : IfcBuildingElement(_GlobalId) {}

      virtual std::string className() const { return "IfcWall"; }

      boost::optional<IfcWallTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcWallTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

