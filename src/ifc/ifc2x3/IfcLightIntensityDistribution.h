// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcLightDistributionData.h"

namespace ifc2x3
{
   class IfcLightIntensityDistribution : public ifc::Entity
   {
   public:
      virtual ~IfcLightIntensityDistribution(){}

      explicit IfcLightIntensityDistribution() = default;

      explicit IfcLightIntensityDistribution(const IfcLightDistributionCurveEnum& _LightDistributionCurve, const std::vector<IfcLightDistributionData*>& _DistributionData)
         : ifc::Entity(), LightDistributionCurve(_LightDistributionCurve), DistributionData(_DistributionData) {}

      virtual std::string className() const { return "IfcLightIntensityDistribution"; }

      boost::optional<IfcLightDistributionCurveEnum> LightDistributionCurve; // required parameter
      std::vector<IfcLightDistributionData*> DistributionData; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcLightDistributionCurveEnumStringMap, LightDistributionCurve);
         w.writeAttributeInstance(DistributionData);
         w.endEntity();
      }

   };

} // namespace ifc2x3

