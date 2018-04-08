// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcLightSource.h"
#include "IfcCartesianPoint.h"

namespace ifc4
{
   class IfcLightSourcePositional : public IfcLightSource
   {
   public:
      virtual ~IfcLightSourcePositional(){}

      explicit IfcLightSourcePositional() = default;

      explicit IfcLightSourcePositional(IfcColourRgb* _LightColour, IfcCartesianPoint* _Position, const IfcPositiveLengthMeasure& _Radius, const IfcReal& _ConstantAttenuation, const IfcReal& _DistanceAttenuation, const IfcReal& _QuadricAttenuation)
         : IfcLightSource(_LightColour), Position(_Position), Radius(_Radius), ConstantAttenuation(_ConstantAttenuation), DistanceAttenuation(_DistanceAttenuation), QuadricAttenuation(_QuadricAttenuation) {}

      virtual std::string className() const { return "IfcLightSourcePositional"; }

      IfcCartesianPoint* Position; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Radius; // required parameter
      boost::optional<IfcReal> ConstantAttenuation; // required parameter
      boost::optional<IfcReal> DistanceAttenuation; // required parameter
      boost::optional<IfcReal> QuadricAttenuation; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeInstance(LightColour);
         w.writeAttributeValue(AmbientIntensity);
         w.writeAttributeValue(Intensity);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(Radius);
         w.writeAttributeValue(ConstantAttenuation);
         w.writeAttributeValue(DistanceAttenuation);
         w.writeAttributeValue(QuadricAttenuation);
         w.endEntity();
      }

   };

} // namespace ifc4

