// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSurfaceCurve.h"

namespace ifc4
{
   class IfcIntersectionCurve : public IfcSurfaceCurve
   {
   public:
      virtual ~IfcIntersectionCurve(){}

      explicit IfcIntersectionCurve() = default;

      explicit IfcIntersectionCurve(IfcCurve* _Curve3D, const std::vector<IfcPcurve*>& _AssociatedGeometry, const IfcPreferredSurfaceCurveRepresentation& _MasterRepresentation)
         : IfcSurfaceCurve(_Curve3D, _AssociatedGeometry, _MasterRepresentation) {}

      virtual std::string className() const { return "IfcIntersectionCurve"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Curve3D);
         w.writeAttributeInstance(AssociatedGeometry);
         w.writeAttributeValue(IfcPreferredSurfaceCurveRepresentationStringMap, MasterRepresentation);
         w.endEntity();
      }

   };

} // namespace ifc4
