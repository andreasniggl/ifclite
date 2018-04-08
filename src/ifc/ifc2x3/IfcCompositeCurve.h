#ifndef IFC2X3_IFCCOMPOSITECURVE_H_INCLUDED
#define IFC2X3_IFCCOMPOSITECURVE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBoundedCurve.h"
#include "IfcCompositeCurveSegment.h"

namespace ifc2x3
{
   class IfcCompositeCurve : public IfcBoundedCurve
   {
   public:
      virtual ~IfcCompositeCurve(){}

      IfcCompositeCurve() = default;

      IfcCompositeCurve(const std::vector<IfcCompositeCurveSegment*>& _Segments, const bool& _SelfIntersect)
         : IfcBoundedCurve(), Segments(_Segments), SelfIntersect(_SelfIntersect) {}

      virtual std::string name() const { return "IfcCompositeCurve"; }

      std::vector<IfcCompositeCurveSegment*> Segments; // required parameter
      boost::optional<bool> SelfIntersect; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstanceList(Segments);
         w.writeAttributeValueScalar(SelfIntersect);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif