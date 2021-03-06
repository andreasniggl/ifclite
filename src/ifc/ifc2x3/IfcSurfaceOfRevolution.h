// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSweptSurface.h"
#include "IfcAxis1Placement.h"

namespace ifc2x3
{
   class IfcSurfaceOfRevolution : public IfcSweptSurface
   {
   public:
      virtual ~IfcSurfaceOfRevolution(){}

      explicit IfcSurfaceOfRevolution() = default;

      explicit IfcSurfaceOfRevolution(IfcProfileDef* _SweptCurve, IfcAxis2Placement3D* _Position, IfcAxis1Placement* _AxisPosition)
         : IfcSweptSurface(_SweptCurve, _Position), AxisPosition(_AxisPosition) {}

      virtual std::string className() const { return "IfcSurfaceOfRevolution"; }

      IfcAxis1Placement* AxisPosition; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SweptCurve);
         w.writeAttributeInstance(Position);
         w.writeAttributeInstance(AxisPosition);
         w.endEntity();
      }

   };

} // namespace ifc2x3

