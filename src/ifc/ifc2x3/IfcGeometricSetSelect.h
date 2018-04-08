#ifndef IFC2X3_IFCGEOMETRICSETSELECT_H_INCLUDED
#define IFC2X3_IFCGEOMETRICSETSELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcPoint.h"
#include "IfcCurve.h"
#include "IfcSurface.h"

namespace ifc2x3
{
   typedef boost::variant<IfcPoint*, IfcCurve*, IfcSurface*> IfcGeometricSetSelect;

   class IfcGeometricSetSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcGeometricSetSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcPoint* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcCurve* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcSurface* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif