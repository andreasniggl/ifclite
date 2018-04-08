// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionFlowElement.h"

namespace ifc4
{
   class IfcDistributionChamberElement : public IfcDistributionFlowElement
   {
   public:
      virtual ~IfcDistributionChamberElement(){}

      explicit IfcDistributionChamberElement() = default;

      explicit IfcDistributionChamberElement(const IfcGloballyUniqueId& _GlobalId)
         : IfcDistributionFlowElement(_GlobalId) {}

      virtual std::string className() const { return "IfcDistributionChamberElement"; }

      boost::optional<IfcDistributionChamberElementTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcDistributionChamberElementTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
