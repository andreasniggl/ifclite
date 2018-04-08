#ifndef IFC2X3_IFCOFFSETCURVE3D_H_INCLUDED
#define IFC2X3_IFCOFFSETCURVE3D_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcCurve.h"
#include "IfcCurve.h"
#include "IfcDirection.h"

namespace ifc2x3
{
   class IfcOffsetCurve3D : public IfcCurve
   {
   public:
      virtual ~IfcOffsetCurve3D(){}

      IfcOffsetCurve3D() = default;

      IfcOffsetCurve3D(IfcCurve* _BasisCurve, const IfcLengthMeasure& _Distance, const bool& _SelfIntersect, IfcDirection* _RefDirection)
         : IfcCurve(), BasisCurve(_BasisCurve), Distance(_Distance), SelfIntersect(_SelfIntersect), RefDirection(_RefDirection) {}

      virtual std::string name() const { return "IfcOffsetCurve3D"; }

      IfcCurve* BasisCurve; // required parameter
      boost::optional<IfcLengthMeasure> Distance; // required parameter
      boost::optional<bool> SelfIntersect; // required parameter
      IfcDirection* RefDirection; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(BasisCurve);
         w.writeAttributeValueScalar(Distance);
         w.writeAttributeValueScalar(SelfIntersect);
         w.writeAttributeInstance(RefDirection);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif