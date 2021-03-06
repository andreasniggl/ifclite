// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcCurveStyleFontSelect.h"

namespace ifc2x3
{
   class IfcCurveStyleFontAndScaling : public ifc::Entity
   {
   public:
      virtual ~IfcCurveStyleFontAndScaling(){}

      explicit IfcCurveStyleFontAndScaling() = default;

      explicit IfcCurveStyleFontAndScaling(const IfcCurveStyleFontSelect& _CurveFont, const IfcPositiveRatioMeasure& _CurveFontScaling)
         : ifc::Entity(), CurveFont(_CurveFont), CurveFontScaling(_CurveFontScaling) {}

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

} // namespace ifc2x3

