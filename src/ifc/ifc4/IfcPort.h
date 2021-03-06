// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProduct.h"

namespace ifc4
{
   class IfcPort : public IfcProduct
   {
   public:
      virtual ~IfcPort(){}

      explicit IfcPort() = default;

      explicit IfcPort(const IfcGloballyUniqueId& _GlobalId)
         : IfcProduct(_GlobalId) {}

      virtual std::string className() const { return "IfcPort"; }


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
         w.endEntity();
      }

   };

} // namespace ifc4

