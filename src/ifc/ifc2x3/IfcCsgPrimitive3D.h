#ifndef IFC2X3_IFCCSGPRIMITIVE3D_H_INCLUDED
#define IFC2X3_IFCCSGPRIMITIVE3D_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcAxis2Placement3D.h"

namespace ifc2x3
{
   class IfcCsgPrimitive3D : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcCsgPrimitive3D(){}

      IfcCsgPrimitive3D() = default;

      IfcCsgPrimitive3D(IfcAxis2Placement3D* _Position)
         : IfcGeometricRepresentationItem(), Position(_Position) {}

      virtual std::string name() const { return "IfcCsgPrimitive3D"; }

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

#endif