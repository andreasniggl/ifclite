#ifndef IFC2X3_IFCSUBCONTRACTRESOURCE_H_INCLUDED
#define IFC2X3_IFCSUBCONTRACTRESOURCE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcConstructionResource.h"
#include "IfcActorSelect.h"

namespace ifc2x3
{
   class IfcSubContractResource : public IfcConstructionResource
   {
   public:
      virtual ~IfcSubContractResource(){}

      IfcSubContractResource() = default;

      IfcSubContractResource(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcConstructionResource(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcSubContractResource"; }

      boost::optional<IfcActorSelect> SubContractor; // optional parameter
      boost::optional<IfcText> JobDescription; // optional parameter

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
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(SubContractor);
         w.writeAttributeValueScalar(JobDescription);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
