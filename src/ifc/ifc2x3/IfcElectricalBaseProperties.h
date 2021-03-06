// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcEnergyProperties.h"

namespace ifc2x3
{
   class IfcElectricalBaseProperties : public IfcEnergyProperties
   {
   public:
      virtual ~IfcElectricalBaseProperties(){}

      explicit IfcElectricalBaseProperties() = default;

      explicit IfcElectricalBaseProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcElectricVoltageMeasure& _InputVoltage, const IfcFrequencyMeasure& _InputFrequency, const int& _InputPhase)
         : IfcEnergyProperties(_GlobalId, _OwnerHistory), InputVoltage(_InputVoltage), InputFrequency(_InputFrequency), InputPhase(_InputPhase) {}

      virtual std::string className() const { return "IfcElectricalBaseProperties"; }

      boost::optional<IfcElectricCurrentEnum> ElectricCurrentType; // optional parameter
      boost::optional<IfcElectricVoltageMeasure> InputVoltage; // required parameter
      boost::optional<IfcFrequencyMeasure> InputFrequency; // required parameter
      boost::optional<IfcElectricCurrentMeasure> FullLoadCurrent; // optional parameter
      boost::optional<IfcElectricCurrentMeasure> MinimumCircuitCurrent; // optional parameter
      boost::optional<IfcPowerMeasure> MaximumPowerInput; // optional parameter
      boost::optional<IfcPowerMeasure> RatedPowerInput; // optional parameter
      boost::optional<int> InputPhase; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(IfcEnergySequenceEnumStringMap, EnergySequence);
         w.writeAttributeValue(UserDefinedEnergySequence);
         w.writeAttributeValue(IfcElectricCurrentEnumStringMap, ElectricCurrentType);
         w.writeAttributeValue(InputVoltage);
         w.writeAttributeValue(InputFrequency);
         w.writeAttributeValue(FullLoadCurrent);
         w.writeAttributeValue(MinimumCircuitCurrent);
         w.writeAttributeValue(MaximumPowerInput);
         w.writeAttributeValue(RatedPowerInput);
         w.writeAttributeValue(InputPhase);
         w.endEntity();
      }

   };

} // namespace ifc2x3

