#ifndef IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H_INCLUDED
#define IFC2X3_IFCLIGHTINTENSITYDISTRIBUTION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcLightDistributionData.h"

namespace ifc2x3
{
   class IfcLightIntensityDistribution : public ifc::Entity
   {
   public:
      virtual ~IfcLightIntensityDistribution(){}

      IfcLightIntensityDistribution() = default;

      IfcLightIntensityDistribution(const IfcLightDistributionCurveEnum& _LightDistributionCurve, const std::vector<IfcLightDistributionData*>& _DistributionData)
         : ifc::Entity(), LightDistributionCurve(_LightDistributionCurve), DistributionData(_DistributionData) {}

      virtual std::string name() const { return "IfcLightIntensityDistribution"; }

      boost::optional<IfcLightDistributionCurveEnum> LightDistributionCurve; // required parameter
      std::vector<IfcLightDistributionData*> DistributionData; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcLightDistributionCurveEnumStringMap, LightDistributionCurve);
         w.writeAttributeInstanceList(DistributionData);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
