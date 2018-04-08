#ifndef IFC2X3_IFCLIGHTSOURCEAMBIENT_H_INCLUDED
#define IFC2X3_IFCLIGHTSOURCEAMBIENT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcLightSource.h"

namespace ifc2x3
{
   class IfcLightSourceAmbient : public IfcLightSource
   {
   public:
      virtual ~IfcLightSourceAmbient(){}

      IfcLightSourceAmbient() = default;

      IfcLightSourceAmbient(IfcColourRgb* _LightColour)
         : IfcLightSource(_LightColour) {}

      virtual std::string name() const { return "IfcLightSourceAmbient"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeInstance(LightColour);
         w.writeAttributeValueScalar(AmbientIntensity);
         w.writeAttributeValueScalar(Intensity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
