// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTopologicalRepresentationItem.h"
#include "IfcVertex.h"
#include "IfcVertex.h"

namespace ifc4
{
   class IfcEdge : public IfcTopologicalRepresentationItem
   {
   public:
      virtual ~IfcEdge(){}

      explicit IfcEdge() = default;

      explicit IfcEdge(IfcVertex* _EdgeStart, IfcVertex* _EdgeEnd)
         : IfcTopologicalRepresentationItem(), EdgeStart(_EdgeStart), EdgeEnd(_EdgeEnd) {}

      virtual std::string className() const { return "IfcEdge"; }

      IfcVertex* EdgeStart; // required parameter
      IfcVertex* EdgeEnd; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(EdgeStart);
         w.writeAttributeInstance(EdgeEnd);
         w.endEntity();
      }

   };

} // namespace ifc4
