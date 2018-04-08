#ifndef IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H_INCLUDED
#define IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPropertySetDefinition.h"
#include "IfcTimeSeries.h"

namespace ifc2x3
{
   class IfcSpaceThermalLoadProperties : public IfcPropertySetDefinition
   {
   public:
      virtual ~IfcSpaceThermalLoadProperties(){}

      IfcSpaceThermalLoadProperties() = default;

      IfcSpaceThermalLoadProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcThermalLoadSourceEnum& _ThermalLoadSource, const IfcPropertySourceEnum& _PropertySource, const IfcPowerMeasure& _MaximumValue, const IfcThermalLoadTypeEnum& _ThermalLoadType)
         : IfcPropertySetDefinition(_GlobalId, _OwnerHistory), ThermalLoadSource(_ThermalLoadSource), PropertySource(_PropertySource), MaximumValue(_MaximumValue), ThermalLoadType(_ThermalLoadType) {}

      virtual std::string name() const { return "IfcSpaceThermalLoadProperties"; }

      boost::optional<IfcPositiveRatioMeasure> ApplicableValueRatio; // optional parameter
      boost::optional<IfcThermalLoadSourceEnum> ThermalLoadSource; // required parameter
      boost::optional<IfcPropertySourceEnum> PropertySource; // required parameter
      boost::optional<IfcText> SourceDescription; // optional parameter
      boost::optional<IfcPowerMeasure> MaximumValue; // required parameter
      boost::optional<IfcPowerMeasure> MinimumValue; // optional parameter
      IfcTimeSeries* ThermalLoadTimeSeriesValues; // optional parameter
      boost::optional<IfcLabel> UserDefinedThermalLoadSource; // optional parameter
      boost::optional<IfcLabel> UserDefinedPropertySource; // optional parameter
      boost::optional<IfcThermalLoadTypeEnum> ThermalLoadType; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ApplicableValueRatio);
         w.writeAttributeValueEnumeration(IfcThermalLoadSourceEnumStringMap, ThermalLoadSource);
         w.writeAttributeValueEnumeration(IfcPropertySourceEnumStringMap, PropertySource);
         w.writeAttributeValueScalar(SourceDescription);
         w.writeAttributeValueScalar(MaximumValue);
         w.writeAttributeValueScalar(MinimumValue);
         w.writeAttributeInstance(ThermalLoadTimeSeriesValues);
         w.writeAttributeValueScalar(UserDefinedThermalLoadSource);
         w.writeAttributeValueScalar(UserDefinedPropertySource);
         w.writeAttributeValueEnumeration(IfcThermalLoadTypeEnumStringMap, ThermalLoadType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif