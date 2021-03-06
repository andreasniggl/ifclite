// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConstructionResource.h"

namespace ifc4
{
   class IfcConstructionMaterialResource : public IfcConstructionResource
   {
   public:
      virtual ~IfcConstructionMaterialResource(){}

      explicit IfcConstructionMaterialResource() = default;

      explicit IfcConstructionMaterialResource(const IfcGloballyUniqueId& _GlobalId)
         : IfcConstructionResource(_GlobalId) {}

      virtual std::string className() const { return "IfcConstructionMaterialResource"; }

      boost::optional<IfcConstructionMaterialResourceTypeEnum> PredefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(Identification);
         w.writeAttributeValue(LongDescription);
         w.writeAttributeInstance(Usage);
         w.writeAttributeInstance(BaseCosts);
         w.writeAttributeInstance(BaseQuantity);
         w.writeAttributeValue(IfcConstructionMaterialResourceTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

