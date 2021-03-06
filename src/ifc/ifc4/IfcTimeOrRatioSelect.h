// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"


namespace ifc4
{
   typedef boost::variant<IfcDuration, IfcRatioMeasure> IfcTimeOrRatioSelect;

   class IfcTimeOrRatioSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcTimeOrRatioSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcDuration p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcRatioMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
