// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcClosedShell.h"
#include "IfcSolidModel.h"

namespace ifc4
{
   typedef boost::variant<IfcClosedShell*, IfcSolidModel*> IfcSolidOrShell;

   class IfcSolidOrShellWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcSolidOrShellWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcClosedShell* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcSolidModel* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
