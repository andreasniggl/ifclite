#ifndef IFC2X3_IFCCOMPOSITECURVESEGMENT_H_INCLUDED
#define IFC2X3_IFCCOMPOSITECURVESEGMENT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcCurve.h"

namespace ifc2x3
{
   class IfcCompositeCurveSegment : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcCompositeCurveSegment(){}

      IfcCompositeCurveSegment() = default;

      IfcCompositeCurveSegment(const IfcTransitionCode& _Transition, const bool& _SameSense, IfcCurve* _ParentCurve)
         : IfcGeometricRepresentationItem(), Transition(_Transition), SameSense(_SameSense), ParentCurve(_ParentCurve) {}

      virtual std::string name() const { return "IfcCompositeCurveSegment"; }

      boost::optional<IfcTransitionCode> Transition; // required parameter
      boost::optional<bool> SameSense; // required parameter
      IfcCurve* ParentCurve; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcTransitionCodeStringMap, Transition);
         w.writeAttributeValueScalar(SameSense);
         w.writeAttributeInstance(ParentCurve);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
