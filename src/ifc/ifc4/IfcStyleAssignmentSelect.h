// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcPresentationStyle.h"
#include "IfcPresentationStyleAssignment.h"

namespace ifc4
{
   typedef boost::variant<IfcPresentationStyle*, IfcPresentationStyleAssignment*> IfcStyleAssignmentSelect;

   class IfcStyleAssignmentSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcStyleAssignmentSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcPresentationStyle* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPresentationStyleAssignment* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
