// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionElement.h"

namespace ifc4
{
   class IfcDistributionControlElement : public IfcDistributionElement
   {
   public:
      virtual ~IfcDistributionControlElement(){}

      explicit IfcDistributionControlElement() = default;

      explicit IfcDistributionControlElement(const IfcGloballyUniqueId& _GlobalId)
         : IfcDistributionElement(_GlobalId) {}

      virtual std::string className() const { return "IfcDistributionControlElement"; }


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

