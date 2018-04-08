// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPropertySetDefinition.h"

namespace ifc4
{
   class IfcQuantitySet : public IfcPropertySetDefinition
   {
   public:
      virtual ~IfcQuantitySet(){}

      explicit IfcQuantitySet() = default;

      explicit IfcQuantitySet(const IfcGloballyUniqueId& _GlobalId)
         : IfcPropertySetDefinition(_GlobalId) {}

      virtual std::string className() const { return "IfcQuantitySet"; }


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

