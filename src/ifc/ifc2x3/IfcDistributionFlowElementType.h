#ifndef IFC2X3_IFCDISTRIBUTIONFLOWELEMENTTYPE_H_INCLUDED
#define IFC2X3_IFCDISTRIBUTIONFLOWELEMENTTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcDistributionElementType.h"

namespace ifc2x3
{
   class IfcDistributionFlowElementType : public IfcDistributionElementType
   {
   public:
      virtual ~IfcDistributionFlowElementType(){}

      IfcDistributionFlowElementType() = default;

      IfcDistributionFlowElementType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcDistributionElementType(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcDistributionFlowElementType"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ApplicableOccurrence);
         w.writeAttributeInstanceList(HasPropertySets);
         w.writeAttributeInstanceList(RepresentationMaps);
         w.writeAttributeValueScalar(Tag);
         w.writeAttributeValueScalar(ElementType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif