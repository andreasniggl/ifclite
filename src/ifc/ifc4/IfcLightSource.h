// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcColourRgb.h"

namespace ifc4
{
   class IfcLightSource : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcLightSource(){}

      explicit IfcLightSource() = default;

      explicit IfcLightSource(IfcColourRgb* _LightColour)
         : IfcGeometricRepresentationItem(), LightColour(_LightColour) {}

      virtual std::string className() const { return "IfcLightSource"; }

      boost::optional<IfcLabel> Name; // optional parameter
      IfcColourRgb* LightColour; // required parameter
      boost::optional<IfcNormalisedRatioMeasure> AmbientIntensity; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> Intensity; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeInstance(LightColour);
         w.writeAttributeValue(AmbientIntensity);
         w.writeAttributeValue(Intensity);
         w.endEntity();
      }

   };

} // namespace ifc4

