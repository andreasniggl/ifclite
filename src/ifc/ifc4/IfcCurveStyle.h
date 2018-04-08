// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationStyle.h"
#include "IfcCurveFontOrScaledCurveFontSelect.h"
#include "IfcSizeSelect.h"
#include "IfcColour.h"

namespace ifc4
{
   class IfcCurveStyle : public IfcPresentationStyle
   {
   public:
      virtual ~IfcCurveStyle(){}

      explicit IfcCurveStyle() = default;

      virtual std::string className() const { return "IfcCurveStyle"; }

      boost::optional<IfcCurveFontOrScaledCurveFontSelect> CurveFont; // optional parameter
      boost::optional<IfcSizeSelect> CurveWidth; // optional parameter
      boost::optional<IfcColour> CurveColour; // optional parameter
      boost::optional<IfcBoolean> ModelOrDraughting; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeSelect<IfcCurveFontOrScaledCurveFontSelectWriterVisitor>(CurveFont);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(CurveWidth);
         w.writeAttributeSelect<IfcColourWriterVisitor>(CurveColour);
         w.writeAttributeValue(ModelOrDraughting);
         w.endEntity();
      }

   };

} // namespace ifc4

