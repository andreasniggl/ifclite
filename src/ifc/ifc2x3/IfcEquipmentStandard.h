// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"

namespace ifc2x3
{
   class IfcEquipmentStandard : public IfcControl
   {
   public:
      virtual ~IfcEquipmentStandard(){}

      explicit IfcEquipmentStandard() = default;

      explicit IfcEquipmentStandard(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcControl(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcEquipmentStandard"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

