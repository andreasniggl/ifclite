// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcColourSpecification.h"
#include "IfcPreDefinedColour.h"

namespace ifc2x3
{
   typedef boost::variant<IfcColourSpecification*, IfcPreDefinedColour*> IfcColour;

   class IfcColourWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcColourWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcColourSpecification* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPreDefinedColour* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
