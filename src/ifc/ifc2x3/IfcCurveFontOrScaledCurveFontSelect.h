#ifndef IFC2X3_IFCCURVEFONTORSCALEDCURVEFONTSELECT_H_INCLUDED
#define IFC2X3_IFCCURVEFONTORSCALEDCURVEFONTSELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcCurveStyleFontAndScaling.h"

namespace ifc2x3
{
   typedef boost::variant<IfcCurveStyleFontSelect, IfcCurveStyleFontAndScaling*> IfcCurveFontOrScaledCurveFontSelect;

   class IfcCurveFontOrScaledCurveFontSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcCurveFontOrScaledCurveFontSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcCurveStyleFontSelect p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcCurveStyleFontAndScaling* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
