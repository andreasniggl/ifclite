#ifndef IFC2X3_IFCBEZIERCURVE_H_INCLUDED
#define IFC2X3_IFCBEZIERCURVE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBSplineCurve.h"

namespace ifc2x3
{
   class IfcBezierCurve : public IfcBSplineCurve
   {
   public:
      virtual ~IfcBezierCurve(){}

      IfcBezierCurve() = default;

      IfcBezierCurve(const int& _Degree, const std::vector<IfcCartesianPoint*>& _ControlPointsList, const IfcBSplineCurveForm& _CurveForm, const bool& _ClosedCurve, const bool& _SelfIntersect)
         : IfcBSplineCurve(_Degree, _ControlPointsList, _CurveForm, _ClosedCurve, _SelfIntersect) {}

      virtual std::string name() const { return "IfcBezierCurve"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Degree);
         w.writeAttributeInstanceList(ControlPointsList);
         w.writeAttributeValueEnumeration(IfcBSplineCurveFormStringMap, CurveForm);
         w.writeAttributeValueScalar(ClosedCurve);
         w.writeAttributeValueScalar(SelfIntersect);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
