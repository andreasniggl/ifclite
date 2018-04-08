#ifndef IFC2X3_IFCSHELL_H_INCLUDED
#define IFC2X3_IFCSHELL_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcClosedShell.h"
#include "IfcOpenShell.h"

namespace ifc2x3
{
   typedef boost::variant<IfcClosedShell*, IfcOpenShell*> IfcShell;

   class IfcShellWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcShellWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcClosedShell* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcOpenShell* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif