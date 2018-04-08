// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcCurve.h"
#include "IfcPoint.h"
#include "IfcSurface.h"

namespace ifc4
{
   typedef boost::variant<IfcCurve*, IfcPoint*, IfcSurface*> IfcGeometricSetSelect;

   class IfcGeometricSetSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcGeometricSetSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcCurve* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPoint* p) const
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
