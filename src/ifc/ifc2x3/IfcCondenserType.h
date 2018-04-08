#ifndef IFC2X3_IFCCONDENSERTYPE_H_INCLUDED
#define IFC2X3_IFCCONDENSERTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcEnergyConversionDeviceType.h"

namespace ifc2x3
{
   class IfcCondenserType : public IfcEnergyConversionDeviceType
   {
   public:
      virtual ~IfcCondenserType(){}

      IfcCondenserType() = default;

      IfcCondenserType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcCondenserTypeEnum& _PredefinedType)
         : IfcEnergyConversionDeviceType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcCondenserType"; }

      boost::optional<IfcCondenserTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValueEnumeration(IfcCondenserTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
