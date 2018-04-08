#ifndef IFC2X3_IFCELECTRICAPPLIANCETYPE_H_INCLUDED
#define IFC2X3_IFCELECTRICAPPLIANCETYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcFlowTerminalType.h"

namespace ifc2x3
{
   class IfcElectricApplianceType : public IfcFlowTerminalType
   {
   public:
      virtual ~IfcElectricApplianceType(){}

      IfcElectricApplianceType() = default;

      IfcElectricApplianceType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcElectricApplianceTypeEnum& _PredefinedType)
         : IfcFlowTerminalType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcElectricApplianceType"; }

      boost::optional<IfcElectricApplianceTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValueEnumeration(IfcElectricApplianceTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
