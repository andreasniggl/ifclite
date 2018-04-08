#ifndef IFC2X3_IFCAXIS2PLACEMENT3D_H_INCLUDED
#define IFC2X3_IFCAXIS2PLACEMENT3D_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPlacement.h"
#include "IfcDirection.h"
#include "IfcDirection.h"

namespace ifc2x3
{
   class IfcAxis2Placement3D : public IfcPlacement
   {
   public:
      virtual ~IfcAxis2Placement3D(){}

      IfcAxis2Placement3D() = default;

      IfcAxis2Placement3D(IfcCartesianPoint* _Location)
         : IfcPlacement(_Location) {}

      virtual std::string name() const { return "IfcAxis2Placement3D"; }

      IfcDirection* Axis; // optional parameter
      IfcDirection* RefDirection; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Location);
         w.writeAttributeInstance(Axis);
         w.writeAttributeInstance(RefDirection);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif