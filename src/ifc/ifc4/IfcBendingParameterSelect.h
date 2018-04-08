// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"


namespace ifc4
{
   typedef boost::variant<IfcLengthMeasure, IfcPlaneAngleMeasure> IfcBendingParameterSelect;

   class IfcBendingParameterSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcBendingParameterSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcLengthMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
