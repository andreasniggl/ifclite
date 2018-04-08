// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcWall.h"

namespace ifc4
{
   class IfcWallElementedCase : public IfcWall
   {
   public:
      virtual ~IfcWallElementedCase(){}

      explicit IfcWallElementedCase() = default;

      explicit IfcWallElementedCase(const IfcGloballyUniqueId& _GlobalId)
         : IfcWall(_GlobalId) {}

      virtual std::string className() const { return "IfcWallElementedCase"; }


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

