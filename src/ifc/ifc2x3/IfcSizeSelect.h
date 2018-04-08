#ifndef IFC2X3_IFCSIZESELECT_H_INCLUDED
#define IFC2X3_IFCSIZESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"


namespace ifc2x3
{
   typedef boost::variant<IfcRatioMeasure, IfcLengthMeasure, IfcDescriptiveMeasure, IfcPositiveLengthMeasure, IfcNormalisedRatioMeasure, IfcPositiveRatioMeasure> IfcSizeSelect;

   class IfcSizeSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcSizeSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcRatioMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcDescriptiveMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
