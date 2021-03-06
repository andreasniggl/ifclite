// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcResource.h"
#include "IfcTypeResource.h"

namespace ifc4
{
   typedef boost::variant<IfcResource*, IfcTypeResource*> IfcResourceSelect;

   class IfcResourceSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcResourceSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcResource* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTypeResource* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
