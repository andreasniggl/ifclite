#ifndef IFC2X3_IFCVERTEXLOOP_H_INCLUDED
#define IFC2X3_IFCVERTEXLOOP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcLoop.h"
#include "IfcVertex.h"

namespace ifc2x3
{
   class IfcVertexLoop : public IfcLoop
   {
   public:
      virtual ~IfcVertexLoop(){}

      IfcVertexLoop() = default;

      IfcVertexLoop(IfcVertex* _LoopVertex)
         : IfcLoop(), LoopVertex(_LoopVertex) {}

      virtual std::string name() const { return "IfcVertexLoop"; }

      IfcVertex* LoopVertex; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(LoopVertex);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif