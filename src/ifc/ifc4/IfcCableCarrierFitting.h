// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowFitting.h"

namespace ifc4
{
   class IfcCableCarrierFitting : public IfcFlowFitting
   {
   public:
      virtual ~IfcCableCarrierFitting(){}

      explicit IfcCableCarrierFitting() = default;

      explicit IfcCableCarrierFitting(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowFitting(_GlobalId) {}

      virtual std::string className() const { return "IfcCableCarrierFitting"; }

      boost::optional<IfcCableCarrierFittingTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcCableCarrierFittingTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

