// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcParameterizedProfileDef.h"

namespace ifc4
{
   class IfcLShapeProfileDef : public IfcParameterizedProfileDef
   {
   public:
      virtual ~IfcLShapeProfileDef(){}

      explicit IfcLShapeProfileDef() = default;

      explicit IfcLShapeProfileDef(const IfcProfileTypeEnum& _ProfileType, const IfcPositiveLengthMeasure& _Depth, const IfcPositiveLengthMeasure& _Thickness)
         : IfcParameterizedProfileDef(_ProfileType), Depth(_Depth), Thickness(_Thickness) {}

      virtual std::string className() const { return "IfcLShapeProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> Depth; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Width; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> Thickness; // required parameter
      boost::optional<IfcNonNegativeLengthMeasure> FilletRadius; // optional parameter
      boost::optional<IfcNonNegativeLengthMeasure> EdgeRadius; // optional parameter
      boost::optional<IfcPlaneAngleMeasure> LegSlope; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(Depth);
         w.writeAttributeValue(Width);
         w.writeAttributeValue(Thickness);
         w.writeAttributeValue(FilletRadius);
         w.writeAttributeValue(EdgeRadius);
         w.writeAttributeValue(LegSlope);
         w.endEntity();
      }

   };

} // namespace ifc4
