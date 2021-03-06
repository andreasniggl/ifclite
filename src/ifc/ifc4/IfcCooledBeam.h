// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcEnergyConversionDevice.h"

namespace ifc4
{
   class IfcCooledBeam : public IfcEnergyConversionDevice
   {
   public:
      virtual ~IfcCooledBeam(){}

      explicit IfcCooledBeam() = default;

      explicit IfcCooledBeam(const IfcGloballyUniqueId& _GlobalId)
         : IfcEnergyConversionDevice(_GlobalId) {}

      virtual std::string className() const { return "IfcCooledBeam"; }

      boost::optional<IfcCooledBeamTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcCooledBeamTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

