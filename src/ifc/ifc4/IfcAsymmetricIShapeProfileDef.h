// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcParameterizedProfileDef.h"

namespace ifc4
{
   class IfcAsymmetricIShapeProfileDef : public IfcParameterizedProfileDef
   {
   public:
      virtual ~IfcAsymmetricIShapeProfileDef(){}

      explicit IfcAsymmetricIShapeProfileDef() = default;

      explicit IfcAsymmetricIShapeProfileDef(const IfcProfileTypeEnum& _ProfileType, const IfcPositiveLengthMeasure& _BottomFlangeWidth, const IfcPositiveLengthMeasure& _OverallDepth, const IfcPositiveLengthMeasure& _WebThickness, const IfcPositiveLengthMeasure& _BottomFlangeThickness, const IfcPositiveLengthMeasure& _TopFlangeWidth)
         : IfcParameterizedProfileDef(_ProfileType), BottomFlangeWidth(_BottomFlangeWidth), OverallDepth(_OverallDepth), WebThickness(_WebThickness), BottomFlangeThickness(_BottomFlangeThickness), TopFlangeWidth(_TopFlangeWidth) {}

      virtual std::string className() const { return "IfcAsymmetricIShapeProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> BottomFlangeWidth; // required parameter
      boost::optional<IfcPositiveLengthMeasure> OverallDepth; // required parameter
      boost::optional<IfcPositiveLengthMeasure> WebThickness; // required parameter
      boost::optional<IfcPositiveLengthMeasure> BottomFlangeThickness; // required parameter
      boost::optional<IfcNonNegativeLengthMeasure> BottomFlangeFilletRadius; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> TopFlangeWidth; // required parameter
      boost::optional<IfcPositiveLengthMeasure> TopFlangeThickness; // optional parameter
      boost::optional<IfcNonNegativeLengthMeasure> TopFlangeFilletRadius; // optional parameter
      boost::optional<IfcNonNegativeLengthMeasure> BottomFlangeEdgeRadius; // optional parameter
      boost::optional<IfcPlaneAngleMeasure> BottomFlangeSlope; // optional parameter
      boost::optional<IfcNonNegativeLengthMeasure> TopFlangeEdgeRadius; // optional parameter
      boost::optional<IfcPlaneAngleMeasure> TopFlangeSlope; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(BottomFlangeWidth);
         w.writeAttributeValue(OverallDepth);
         w.writeAttributeValue(WebThickness);
         w.writeAttributeValue(BottomFlangeThickness);
         w.writeAttributeValue(BottomFlangeFilletRadius);
         w.writeAttributeValue(TopFlangeWidth);
         w.writeAttributeValue(TopFlangeThickness);
         w.writeAttributeValue(TopFlangeFilletRadius);
         w.writeAttributeValue(BottomFlangeEdgeRadius);
         w.writeAttributeValue(BottomFlangeSlope);
         w.writeAttributeValue(TopFlangeEdgeRadius);
         w.writeAttributeValue(TopFlangeSlope);
         w.endEntity();
      }

   };

} // namespace ifc4
