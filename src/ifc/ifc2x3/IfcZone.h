// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"

namespace ifc2x3
{
   class IfcZone : public IfcGroup
   {
   public:
      virtual ~IfcZone(){}

      explicit IfcZone() = default;

      explicit IfcZone(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcGroup(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcZone"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

