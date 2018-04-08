// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConstructionResource.h"
#include "IfcActorSelect.h"

namespace ifc2x3
{
   class IfcConstructionMaterialResource : public IfcConstructionResource
   {
   public:
      virtual ~IfcConstructionMaterialResource(){}

      explicit IfcConstructionMaterialResource() = default;

      explicit IfcConstructionMaterialResource(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcConstructionResource(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcConstructionMaterialResource"; }

      std::vector< boost::optional<IfcActorSelect> > Suppliers; // optional parameter
      boost::optional<IfcRatioMeasure> UsageRatio; // optional parameter

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
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(Suppliers);
         w.writeAttributeValue(UsageRatio);
         w.endEntity();
      }

   };

} // namespace ifc2x3

