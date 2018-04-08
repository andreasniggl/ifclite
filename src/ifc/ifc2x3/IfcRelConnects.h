// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"

namespace ifc2x3
{
   class IfcRelConnects : public IfcRelationship
   {
   public:
      virtual ~IfcRelConnects(){}

      explicit IfcRelConnects() = default;

      explicit IfcRelConnects(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcRelationship(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcRelConnects"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.endEntity();
      }

   };

} // namespace ifc2x3

