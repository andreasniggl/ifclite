// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"

namespace ifc4
{
   class IfcRelConnects : public IfcRelationship
   {
   public:
      virtual ~IfcRelConnects(){}

      explicit IfcRelConnects() = default;

      explicit IfcRelConnects(const IfcGloballyUniqueId& _GlobalId)
         : IfcRelationship(_GlobalId) {}

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

} // namespace ifc4
