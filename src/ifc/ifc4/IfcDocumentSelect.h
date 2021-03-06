// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcDocumentInformation.h"
#include "IfcDocumentReference.h"

namespace ifc4
{
   typedef boost::variant<IfcDocumentInformation*, IfcDocumentReference*> IfcDocumentSelect;

   class IfcDocumentSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcDocumentSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcDocumentInformation* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcDocumentReference* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
