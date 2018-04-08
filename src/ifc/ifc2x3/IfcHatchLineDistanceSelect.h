#ifndef IFC2X3_IFCHATCHLINEDISTANCESELECT_H_INCLUDED
#define IFC2X3_IFCHATCHLINEDISTANCESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcOneDirectionRepeatFactor.h"

namespace ifc2x3
{
   typedef boost::variant<IfcOneDirectionRepeatFactor*, IfcPositiveLengthMeasure> IfcHatchLineDistanceSelect;

   class IfcHatchLineDistanceSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcHatchLineDistanceSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcOneDirectionRepeatFactor* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPositiveLengthMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
