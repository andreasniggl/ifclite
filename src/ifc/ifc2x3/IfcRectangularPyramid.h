#ifndef IFC2X3_IFCRECTANGULARPYRAMID_H_INCLUDED
#define IFC2X3_IFCRECTANGULARPYRAMID_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcCsgPrimitive3D.h"

namespace ifc2x3
{
   class IfcRectangularPyramid : public IfcCsgPrimitive3D
   {
   public:
      virtual ~IfcRectangularPyramid(){}

      IfcRectangularPyramid() = default;

      IfcRectangularPyramid(IfcAxis2Placement3D* _Position, const IfcPositiveLengthMeasure& _XLength, const IfcPositiveLengthMeasure& _YLength, const IfcPositiveLengthMeasure& _Height)
         : IfcCsgPrimitive3D(_Position), XLength(_XLength), YLength(_YLength), Height(_Height) {}

      virtual std::string name() const { return "IfcRectangularPyramid"; }

      boost::optional<IfcPositiveLengthMeasure> XLength; // required parameter
      boost::optional<IfcPositiveLengthMeasure> YLength; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Height; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Position);
         w.writeAttributeValueScalar(XLength);
         w.writeAttributeValueScalar(YLength);
         w.writeAttributeValueScalar(Height);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
