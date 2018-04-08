#ifndef IFC2X3_IFCRIGHTCIRCULARCONE_H_INCLUDED
#define IFC2X3_IFCRIGHTCIRCULARCONE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcCsgPrimitive3D.h"

namespace ifc2x3
{
   class IfcRightCircularCone : public IfcCsgPrimitive3D
   {
   public:
      virtual ~IfcRightCircularCone(){}

      IfcRightCircularCone() = default;

      IfcRightCircularCone(IfcAxis2Placement3D* _Position, const IfcPositiveLengthMeasure& _Height, const IfcPositiveLengthMeasure& _BottomRadius)
         : IfcCsgPrimitive3D(_Position), Height(_Height), BottomRadius(_BottomRadius) {}

      virtual std::string name() const { return "IfcRightCircularCone"; }

      boost::optional<IfcPositiveLengthMeasure> Height; // required parameter
      boost::optional<IfcPositiveLengthMeasure> BottomRadius; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Position);
         w.writeAttributeValueScalar(Height);
         w.writeAttributeValueScalar(BottomRadius);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif