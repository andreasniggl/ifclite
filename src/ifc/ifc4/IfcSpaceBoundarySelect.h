// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcExternalSpatialElement.h"
#include "IfcSpace.h"

namespace ifc4
{
   typedef boost::variant<IfcExternalSpatialElement*, IfcSpace*> IfcSpaceBoundarySelect;

   class IfcSpaceBoundarySelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcSpaceBoundarySelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcExternalSpatialElement* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcSpace* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
