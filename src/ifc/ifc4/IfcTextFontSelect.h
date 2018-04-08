// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcExternallyDefinedTextFont.h"
#include "IfcPreDefinedTextFont.h"

namespace ifc4
{
   typedef boost::variant<IfcExternallyDefinedTextFont*, IfcPreDefinedTextFont*> IfcTextFontSelect;

   class IfcTextFontSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcTextFontSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcExternallyDefinedTextFont* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPreDefinedTextFont* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
