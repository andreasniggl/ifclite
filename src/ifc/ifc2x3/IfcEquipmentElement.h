// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElement.h"

namespace ifc2x3
{
   class IfcEquipmentElement : public IfcElement
   {
   public:
      virtual ~IfcEquipmentElement(){}

      explicit IfcEquipmentElement() = default;

      explicit IfcEquipmentElement(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcElement(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcEquipmentElement"; }


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

} // namespace ifc2x3

