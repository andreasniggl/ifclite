#ifndef IFC2X3_IFCORIENTATIONSELECT_H_INCLUDED
#define IFC2X3_IFCORIENTATIONSELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcDirection.h"

namespace ifc2x3
{
   typedef boost::variant<IfcPlaneAngleMeasure, IfcDirection*> IfcOrientationSelect;

   class IfcOrientationSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcOrientationSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcPlaneAngleMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcDirection* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
