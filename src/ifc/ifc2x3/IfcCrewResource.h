// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConstructionResource.h"

namespace ifc2x3
{
   class IfcCrewResource : public IfcConstructionResource
   {
   public:
      virtual ~IfcCrewResource(){}

      explicit IfcCrewResource() = default;

      explicit IfcCrewResource(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcConstructionResource(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcCrewResource"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(ResourceIdentifier);
         w.writeAttributeValue(ResourceGroup);
         w.writeAttributeValue(IfcResourceConsumptionEnumStringMap, ResourceConsumption);
         w.writeAttributeInstance(BaseQuantity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

