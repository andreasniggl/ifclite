// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcMaterialProperties.h"

namespace ifc2x3
{
   class IfcThermalMaterialProperties : public IfcMaterialProperties
   {
   public:
      virtual ~IfcThermalMaterialProperties(){}

      explicit IfcThermalMaterialProperties() = default;

      explicit IfcThermalMaterialProperties(IfcMaterial* _Material)
         : IfcMaterialProperties(_Material) {}

      virtual std::string className() const { return "IfcThermalMaterialProperties"; }

      boost::optional<IfcSpecificHeatCapacityMeasure> SpecificHeatCapacity; // optional parameter
      boost::optional<IfcThermodynamicTemperatureMeasure> BoilingPoint; // optional parameter
      boost::optional<IfcThermodynamicTemperatureMeasure> FreezingPoint; // optional parameter
      boost::optional<IfcThermalConductivityMeasure> ThermalConductivity; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Material);
         w.writeAttributeValue(SpecificHeatCapacity);
         w.writeAttributeValue(BoilingPoint);
         w.writeAttributeValue(FreezingPoint);
         w.writeAttributeValue(ThermalConductivity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

