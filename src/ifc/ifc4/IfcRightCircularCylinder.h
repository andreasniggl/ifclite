// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcCsgPrimitive3D.h"

namespace ifc4
{
   class IfcRightCircularCylinder : public IfcCsgPrimitive3D
   {
   public:
      virtual ~IfcRightCircularCylinder(){}

      explicit IfcRightCircularCylinder() = default;

      explicit IfcRightCircularCylinder(IfcAxis2Placement3D* _Position, const IfcPositiveLengthMeasure& _Height, const IfcPositiveLengthMeasure& _Radius)
         : IfcCsgPrimitive3D(_Position), Height(_Height), Radius(_Radius) {}

      virtual std::string className() const { return "IfcRightCircularCylinder"; }

      boost::optional<IfcPositiveLengthMeasure> Height; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Radius; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(Height);
         w.writeAttributeValue(Radius);
         w.endEntity();
      }

   };

} // namespace ifc4

