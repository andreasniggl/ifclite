// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcCurve.h"

namespace ifc4
{
   class IfcCompositeCurveSegment : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcCompositeCurveSegment(){}

      explicit IfcCompositeCurveSegment() = default;

      explicit IfcCompositeCurveSegment(const IfcTransitionCode& _Transition, const IfcBoolean& _SameSense, IfcCurve* _ParentCurve)
         : IfcGeometricRepresentationItem(), Transition(_Transition), SameSense(_SameSense), ParentCurve(_ParentCurve) {}

      virtual std::string className() const { return "IfcCompositeCurveSegment"; }

      boost::optional<IfcTransitionCode> Transition; // required parameter
      boost::optional<IfcBoolean> SameSense; // required parameter
      IfcCurve* ParentCurve; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcTransitionCodeStringMap, Transition);
         w.writeAttributeValue(SameSense);
         w.writeAttributeInstance(ParentCurve);
         w.endEntity();
      }

   };

} // namespace ifc4

