// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElement.h"

namespace ifc2x3
{
   class IfcDistributionElement : public IfcElement
   {
   public:
      virtual ~IfcDistributionElement(){}

      explicit IfcDistributionElement() = default;

      explicit IfcDistributionElement(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcElement(_GlobalId, _OwnerHistory) {}

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

} // namespace ifc2x3

