// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcLoop.h"
#include "IfcOrientedEdge.h"

namespace ifc4
{
   class IfcEdgeLoop : public IfcLoop
   {
   public:
      virtual ~IfcEdgeLoop(){}

      explicit IfcEdgeLoop() = default;

      explicit IfcEdgeLoop(const std::vector<IfcOrientedEdge*>& _EdgeList)
         : IfcLoop(), EdgeList(_EdgeList) {}

      virtual std::string className() const { return "IfcEdgeLoop"; }

      std::vector<IfcOrientedEdge*> EdgeList; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(EdgeList);
         w.endEntity();
      }

   };

} // namespace ifc4

