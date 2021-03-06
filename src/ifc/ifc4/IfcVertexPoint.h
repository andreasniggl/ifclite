// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcVertex.h"
#include "IfcPoint.h"

namespace ifc4
{
   class IfcVertexPoint : public IfcVertex
   {
   public:
      virtual ~IfcVertexPoint(){}

      explicit IfcVertexPoint() = default;

      explicit IfcVertexPoint(IfcPoint* _VertexGeometry)
         : IfcVertex(), VertexGeometry(_VertexGeometry) {}

      virtual std::string className() const { return "IfcVertexPoint"; }

      IfcPoint* VertexGeometry; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(VertexGeometry);
         w.endEntity();
      }

   };

} // namespace ifc4

