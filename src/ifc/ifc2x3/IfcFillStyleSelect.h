#ifndef IFC2X3_IFCFILLSTYLESELECT_H_INCLUDED
#define IFC2X3_IFCFILLSTYLESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcFillAreaStyleHatching.h"
#include "IfcFillAreaStyleTiles.h"
#include "IfcExternallyDefinedHatchStyle.h"

namespace ifc2x3
{
   typedef boost::variant<IfcFillAreaStyleHatching*, IfcFillAreaStyleTiles*, IfcColour, IfcExternallyDefinedHatchStyle*> IfcFillStyleSelect;

   class IfcFillStyleSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcFillStyleSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcFillAreaStyleHatching* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcFillAreaStyleTiles* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcColour p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcExternallyDefinedHatchStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif