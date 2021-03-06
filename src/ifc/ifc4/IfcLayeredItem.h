// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcRepresentation.h"
#include "IfcRepresentationItem.h"

namespace ifc4
{
   typedef boost::variant<IfcRepresentation*, IfcRepresentationItem*> IfcLayeredItem;

   class IfcLayeredItemWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcLayeredItemWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcRepresentation* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcRepresentationItem* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
