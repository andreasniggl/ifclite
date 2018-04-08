// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowMovingDevice.h"

namespace ifc4
{
   class IfcFan : public IfcFlowMovingDevice
   {
   public:
      virtual ~IfcFan(){}

      explicit IfcFan() = default;

      explicit IfcFan(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowMovingDevice(_GlobalId) {}

      virtual std::string className() const { return "IfcFan"; }

      boost::optional<IfcFanTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcFanTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

