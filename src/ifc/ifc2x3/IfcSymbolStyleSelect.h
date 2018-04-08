#ifndef IFC2X3_IFCSYMBOLSTYLESELECT_H_INCLUDED
#define IFC2X3_IFCSYMBOLSTYLESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"


namespace ifc2x3
{
   typedef boost::variant<IfcColour> IfcSymbolStyleSelect;

   class IfcSymbolStyleSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcSymbolStyleSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcColour p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif