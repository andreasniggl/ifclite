// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPort.h"

namespace ifc4
{
   class IfcDistributionPort : public IfcPort
   {
   public:
      virtual ~IfcDistributionPort(){}

      explicit IfcDistributionPort() = default;

      explicit IfcDistributionPort(const IfcGloballyUniqueId& _GlobalId)
         : IfcPort(_GlobalId) {}

      virtual std::string className() const { return "IfcDistributionPort"; }

      boost::optional<IfcFlowDirectionEnum> FlowDirection; // optional parameter
      boost::optional<IfcDistributionPortTypeEnum> PredefinedType; // optional parameter
      boost::optional<IfcDistributionSystemEnum> SystemType; // optional parameter

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
         w.writeAttributeValue(IfcFlowDirectionEnumStringMap, FlowDirection);
         w.writeAttributeValue(IfcDistributionPortTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(IfcDistributionSystemEnumStringMap, SystemType);
         w.endEntity();
      }

   };

} // namespace ifc4
