// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowTreatmentDevice.h"

namespace ifc4
{
   class IfcDuctSilencer : public IfcFlowTreatmentDevice
   {
   public:
      virtual ~IfcDuctSilencer(){}

      explicit IfcDuctSilencer() = default;

      explicit IfcDuctSilencer(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowTreatmentDevice(_GlobalId) {}

      virtual std::string className() const { return "IfcDuctSilencer"; }

      boost::optional<IfcDuctSilencerTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcDuctSilencerTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
