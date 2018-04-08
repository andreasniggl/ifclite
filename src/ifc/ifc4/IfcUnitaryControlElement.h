// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionControlElement.h"

namespace ifc4
{
   class IfcUnitaryControlElement : public IfcDistributionControlElement
   {
   public:
      virtual ~IfcUnitaryControlElement(){}

      explicit IfcUnitaryControlElement() = default;

      explicit IfcUnitaryControlElement(const IfcGloballyUniqueId& _GlobalId)
         : IfcDistributionControlElement(_GlobalId) {}

      virtual std::string className() const { return "IfcUnitaryControlElement"; }

      boost::optional<IfcUnitaryControlElementTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcUnitaryControlElementTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
