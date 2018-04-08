#ifndef IFC2X3_IFCCURVESTYLE_H_INCLUDED
#define IFC2X3_IFCCURVESTYLE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPresentationStyle.h"
#include "IfcCurveFontOrScaledCurveFontSelect.h"
#include "IfcSizeSelect.h"
#include "IfcColour.h"

namespace ifc2x3
{
   class IfcCurveStyle : public IfcPresentationStyle
   {
   public:
      virtual ~IfcCurveStyle(){}

      IfcCurveStyle() = default;

      virtual std::string name() const { return "IfcCurveStyle"; }

      boost::optional<IfcCurveFontOrScaledCurveFontSelect> CurveFont; // optional parameter
      boost::optional<IfcSizeSelect> CurveWidth; // optional parameter
      boost::optional<IfcColour> CurveColour; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeSelect<IfcCurveFontOrScaledCurveFontSelectWriterVisitor>(CurveFont);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(CurveWidth);
         w.writeAttributeSelect<IfcColourWriterVisitor>(CurveColour);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
