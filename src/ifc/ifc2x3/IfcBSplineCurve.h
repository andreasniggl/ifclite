#ifndef IFC2X3_IFCBSPLINECURVE_H_INCLUDED
#define IFC2X3_IFCBSPLINECURVE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBoundedCurve.h"
#include "IfcCartesianPoint.h"

namespace ifc2x3
{
   class IfcBSplineCurve : public IfcBoundedCurve
   {
   public:
      virtual ~IfcBSplineCurve(){}

      IfcBSplineCurve() = default;

      IfcBSplineCurve(const int& _Degree, const std::vector<IfcCartesianPoint*>& _ControlPointsList, const IfcBSplineCurveForm& _CurveForm, const bool& _ClosedCurve, const bool& _SelfIntersect)
         : IfcBoundedCurve(), Degree(_Degree), ControlPointsList(_ControlPointsList), CurveForm(_CurveForm), ClosedCurve(_ClosedCurve), SelfIntersect(_SelfIntersect) {}

      virtual std::string name() const { return "IfcBSplineCurve"; }

      boost::optional<int> Degree; // required parameter
      std::vector<IfcCartesianPoint*> ControlPointsList; // required parameter
      boost::optional<IfcBSplineCurveForm> CurveForm; // required parameter
      boost::optional<bool> ClosedCurve; // required parameter
      boost::optional<bool> SelfIntersect; // required parameter

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
