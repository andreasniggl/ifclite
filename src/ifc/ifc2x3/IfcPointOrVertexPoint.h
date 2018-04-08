#ifndef IFC2X3_IFCPOINTORVERTEXPOINT_H_INCLUDED
#define IFC2X3_IFCPOINTORVERTEXPOINT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcPoint.h"
#include "IfcVertexPoint.h"

namespace ifc2x3
{
   typedef boost::variant<IfcPoint*, IfcVertexPoint*> IfcPointOrVertexPoint;

   class IfcPointOrVertexPointWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcPointOrVertexPointWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcPoint* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcVertexPoint* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif