#ifndef IFC2X3_IFCELECTRICHEATERTYPE_H_INCLUDED
#define IFC2X3_IFCELECTRICHEATERTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcFlowTerminalType.h"

namespace ifc2x3
{
   class IfcElectricHeaterType : public IfcFlowTerminalType
   {
   public:
      virtual ~IfcElectricHeaterType(){}

      IfcElectricHeaterType() = default;

      IfcElectricHeaterType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcElectricHeaterTypeEnum& _PredefinedType)
         : IfcFlowTerminalType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcElectricHeaterType"; }

      boost::optional<IfcElectricHeaterTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValueEnumeration(IfcElectricHeaterTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
