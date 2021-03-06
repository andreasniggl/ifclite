// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProduct.h"

namespace ifc2x3
{
   class IfcElement : public IfcProduct
   {
   public:
      virtual ~IfcElement(){}

      explicit IfcElement() = default;

      explicit IfcElement(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcProduct(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcElement"; }

      boost::optional<IfcIdentifier> Tag; // optional parameter

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

