#ifndef IFC2X3_IFCCONSTRUCTIONPRODUCTRESOURCE_H_INCLUDED
#define IFC2X3_IFCCONSTRUCTIONPRODUCTRESOURCE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcConstructionResource.h"

namespace ifc2x3
{
   class IfcConstructionProductResource : public IfcConstructionResource
   {
   public:
      virtual ~IfcConstructionProductResource(){}

      IfcConstructionProductResource() = default;

      IfcConstructionProductResource(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcConstructionResource(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcConstructionProductResource"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeValueScalar(ResourceIdentifier);
         w.writeAttributeValueScalar(ResourceGroup);
         w.writeAttributeValueEnumeration(IfcResourceConsumptionEnumStringMap, ResourceConsumption);
         w.writeAttributeInstance(BaseQuantity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif