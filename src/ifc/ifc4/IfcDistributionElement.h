// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElement.h"

namespace ifc4
{
   class IfcDistributionElement : public IfcElement
   {
   public:
      virtual ~IfcDistributionElement(){}

      explicit IfcDistributionElement() = default;

      explicit IfcDistributionElement(const IfcGloballyUniqueId& _GlobalId)
         : IfcElement(_GlobalId) {}

      virtual std::string className() const { return "IfcDistributionElement"; }


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

