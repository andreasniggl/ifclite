// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcLightSource.h"

namespace ifc4
{
   class IfcLightSourceAmbient : public IfcLightSource
   {
   public:
      virtual ~IfcLightSourceAmbient(){}

      explicit IfcLightSourceAmbient() = default;

      explicit IfcLightSourceAmbient(IfcColourRgb* _LightColour)
         : IfcLightSource(_LightColour) {}

      virtual std::string className() const { return "IfcLightSourceAmbient"; }


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

