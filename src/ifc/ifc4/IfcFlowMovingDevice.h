// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionFlowElement.h"

namespace ifc4
{
   class IfcFlowMovingDevice : public IfcDistributionFlowElement
   {
   public:
      virtual ~IfcFlowMovingDevice(){}

      explicit IfcFlowMovingDevice() = default;

      explicit IfcFlowMovingDevice(const IfcGloballyUniqueId& _GlobalId)
         : IfcDistributionFlowElement(_GlobalId) {}

      virtual std::string className() const { return "IfcFlowMovingDevice"; }


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
         w.endEntity();
      }

   };

} // namespace ifc4
