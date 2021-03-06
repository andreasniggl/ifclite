// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcBoundedCurve.h"
#include "IfcEdgeCurve.h"

namespace ifc2x3
{
   typedef boost::variant<IfcBoundedCurve*, IfcEdgeCurve*> IfcCurveOrEdgeCurve;

   class IfcCurveOrEdgeCurveWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcCurveOrEdgeCurveWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcBoundedCurve* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcEdgeCurve* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
