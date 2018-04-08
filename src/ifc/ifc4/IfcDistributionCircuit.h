// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionSystem.h"

namespace ifc4
{
   class IfcDistributionCircuit : public IfcDistributionSystem
   {
   public:
      virtual ~IfcDistributionCircuit(){}

      explicit IfcDistributionCircuit() = default;

      explicit IfcDistributionCircuit(const IfcGloballyUniqueId& _GlobalId)
         : IfcDistributionSystem(_GlobalId) {}

      virtual std::string className() const { return "IfcDistributionCircuit"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(LongName);
         w.writeAttributeValue(IfcDistributionSystemEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
