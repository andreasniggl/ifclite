// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedProperties.h"

namespace ifc4
{
   class IfcReinforcementBarProperties : public IfcPreDefinedProperties
   {
   public:
      virtual ~IfcReinforcementBarProperties(){}

      explicit IfcReinforcementBarProperties() = default;

      explicit IfcReinforcementBarProperties(const IfcAreaMeasure& _TotalCrossSectionArea, const IfcLabel& _SteelGrade)
         : IfcPreDefinedProperties(), TotalCrossSectionArea(_TotalCrossSectionArea), SteelGrade(_SteelGrade) {}

      virtual std::string className() const { return "IfcReinforcementBarProperties"; }

      boost::optional<IfcAreaMeasure> TotalCrossSectionArea; // required parameter
      boost::optional<IfcLabel> SteelGrade; // required parameter
      boost::optional<IfcReinforcingBarSurfaceEnum> BarSurface; // optional parameter
      boost::optional<IfcLengthMeasure> EffectiveDepth; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> NominalBarDiameter; // optional parameter
      boost::optional<IfcCountMeasure> BarCount; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(TotalCrossSectionArea);
         w.writeAttributeValue(SteelGrade);
         w.writeAttributeValue(IfcReinforcingBarSurfaceEnumStringMap, BarSurface);
         w.writeAttributeValue(EffectiveDepth);
         w.writeAttributeValue(NominalBarDiameter);
         w.writeAttributeValue(BarCount);
         w.endEntity();
      }

   };

} // namespace ifc4

