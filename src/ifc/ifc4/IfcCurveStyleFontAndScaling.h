// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"
#include "IfcCurveStyleFontSelect.h"

namespace ifc4
{
   class IfcCurveStyleFontAndScaling : public IfcPresentationItem
   {
   public:
      virtual ~IfcCurveStyleFontAndScaling(){}

      explicit IfcCurveStyleFontAndScaling() = default;

      explicit IfcCurveStyleFontAndScaling(const IfcCurveStyleFontSelect& _CurveFont, const IfcPositiveRatioMeasure& _CurveFontScaling)
         : IfcPresentationItem(), CurveFont(_CurveFont), CurveFontScaling(_CurveFontScaling) {}

      virtual std::string className() const { return "IfcCurveStyleFontAndScaling"; }

      boost::optional<IfcLabel> Name; // optional parameter
      boost::optional<IfcCurveStyleFontSelect> CurveFont; // required parameter
      boost::optional<IfcPositiveRatioMeasure> CurveFontScaling; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeSelect<IfcCurveStyleFontSelectWriterVisitor>(CurveFont);
         w.writeAttributeValue(CurveFontScaling);
         w.endEntity();
      }

   };

} // namespace ifc4

