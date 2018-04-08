#ifndef IFC2X3_IFCPRESENTATIONSTYLESELECT_H_INCLUDED
#define IFC2X3_IFCPRESENTATIONSTYLESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcCurveStyle.h"
#include "IfcSymbolStyle.h"
#include "IfcFillAreaStyle.h"
#include "IfcTextStyle.h"
#include "IfcSurfaceStyle.h"

namespace ifc2x3
{
   typedef boost::variant<IfcNullStyle, IfcCurveStyle*, IfcSymbolStyle*, IfcFillAreaStyle*, IfcTextStyle*, IfcSurfaceStyle*> IfcPresentationStyleSelect;

   class IfcPresentationStyleSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcPresentationStyleSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcNullStyle p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcCurveStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcSymbolStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcFillAreaStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTextStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcSurfaceStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
