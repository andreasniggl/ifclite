#ifndef IFC2X3_IFCTHERMALMATERIALPROPERTIES_H_INCLUDED
#define IFC2X3_IFCTHERMALMATERIALPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcMaterialProperties.h"

namespace ifc2x3
{
   class IfcThermalMaterialProperties : public IfcMaterialProperties
   {
   public:
      virtual ~IfcThermalMaterialProperties(){}

      IfcThermalMaterialProperties() = default;

      IfcThermalMaterialProperties(IfcMaterial* _Material)
         : IfcMaterialProperties(_Material) {}

      virtual std::string name() const { return "IfcThermalMaterialProperties"; }

      boost::optional<IfcSpecificHeatCapacityMeasure> SpecificHeatCapacity; // optional parameter
      boost::optional<IfcThermodynamicTemperatureMeasure> BoilingPoint; // optional parameter
      boost::optional<IfcThermodynamicTemperatureMeasure> FreezingPoint; // optional parameter
      boost::optional<IfcThermalConductivityMeasure> ThermalConductivity; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Material);
         w.writeAttributeValueScalar(SpecificHeatCapacity);
         w.writeAttributeValueScalar(BoilingPoint);
         w.writeAttributeValueScalar(FreezingPoint);
         w.writeAttributeValueScalar(ThermalConductivity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif