// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcAxis2Placement3D.h"

namespace ifc2x3
{
   class IfcCsgPrimitive3D : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcCsgPrimitive3D(){}

      explicit IfcCsgPrimitive3D() = default;

      explicit IfcCsgPrimitive3D(IfcAxis2Placement3D* _Position)
         : IfcGeometricRepresentationItem(), Position(_Position) {}

      virtual std::string className() const { return "IfcCsgPrimitive3D"; }

      IfcAxis2Placement3D* Position; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Position);
         w.endEntity();
      }

   };

} // namespace ifc2x3

