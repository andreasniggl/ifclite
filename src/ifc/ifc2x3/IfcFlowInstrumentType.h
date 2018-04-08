#ifndef IFC2X3_IFCFLOWINSTRUMENTTYPE_H_INCLUDED
#define IFC2X3_IFCFLOWINSTRUMENTTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcDistributionControlElementType.h"

namespace ifc2x3
{
   class IfcFlowInstrumentType : public IfcDistributionControlElementType
   {
   public:
      virtual ~IfcFlowInstrumentType(){}

      IfcFlowInstrumentType() = default;

      IfcFlowInstrumentType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcFlowInstrumentTypeEnum& _PredefinedType)
         : IfcDistributionControlElementType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcFlowInstrumentType"; }

      boost::optional<IfcFlowInstrumentTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValueEnumeration(IfcFlowInstrumentTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
