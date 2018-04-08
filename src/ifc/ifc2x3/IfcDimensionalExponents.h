#ifndef IFC2X3_IFCDIMENSIONALEXPONENTS_H_INCLUDED
#define IFC2X3_IFCDIMENSIONALEXPONENTS_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcDimensionalExponents : public ifc::Entity
   {
   public:
      virtual ~IfcDimensionalExponents(){}

      IfcDimensionalExponents() = default;

      IfcDimensionalExponents(const int& _LengthExponent, const int& _MassExponent, const int& _TimeExponent, const int& _ElectricCurrentExponent, const int& _ThermodynamicTemperatureExponent, const int& _AmountOfSubstanceExponent, const int& _LuminousIntensityExponent)
         : ifc::Entity(), LengthExponent(_LengthExponent), MassExponent(_MassExponent), TimeExponent(_TimeExponent), ElectricCurrentExponent(_ElectricCurrentExponent), ThermodynamicTemperatureExponent(_ThermodynamicTemperatureExponent), AmountOfSubstanceExponent(_AmountOfSubstanceExponent), LuminousIntensityExponent(_LuminousIntensityExponent) {}

      virtual std::string name() const { return "IfcDimensionalExponents"; }

      boost::optional<int> LengthExponent; // required parameter
      boost::optional<int> MassExponent; // required parameter
      boost::optional<int> TimeExponent; // required parameter
      boost::optional<int> ElectricCurrentExponent; // required parameter
      boost::optional<int> ThermodynamicTemperatureExponent; // required parameter
      boost::optional<int> AmountOfSubstanceExponent; // required parameter
      boost::optional<int> LuminousIntensityExponent; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(LengthExponent);
         w.writeAttributeValueScalar(MassExponent);
         w.writeAttributeValueScalar(TimeExponent);
         w.writeAttributeValueScalar(ElectricCurrentExponent);
         w.writeAttributeValueScalar(ThermodynamicTemperatureExponent);
         w.writeAttributeValueScalar(AmountOfSubstanceExponent);
         w.writeAttributeValueScalar(LuminousIntensityExponent);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif