// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcAnnotationCurveOccurrence.h"
#include "IfcAnnotationTextOccurrence.h"
#include "IfcAnnotationSymbolOccurrence.h"

namespace ifc2x3
{
   typedef boost::variant<IfcAnnotationCurveOccurrence*, IfcAnnotationTextOccurrence*, IfcAnnotationSymbolOccurrence*> IfcDraughtingCalloutElement;

   class IfcDraughtingCalloutElementWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcDraughtingCalloutElementWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcAnnotationCurveOccurrence* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcAnnotationTextOccurrence* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcAnnotationSymbolOccurrence* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
