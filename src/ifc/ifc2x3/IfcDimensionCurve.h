#ifndef IFC2X3_IFCDIMENSIONCURVE_H_INCLUDED
#define IFC2X3_IFCDIMENSIONCURVE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcAnnotationCurveOccurrence.h"

namespace ifc2x3
{
   class IfcDimensionCurve : public IfcAnnotationCurveOccurrence
   {
   public:
      virtual ~IfcDimensionCurve(){}

      IfcDimensionCurve() = default;

      IfcDimensionCurve(const std::vector<IfcPresentationStyleAssignment*>& _Styles)
         : IfcAnnotationCurveOccurrence(_Styles) {}

      virtual std::string name() const { return "IfcDimensionCurve"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Item);
         w.writeAttributeInstanceList(Styles);
         w.writeAttributeValueScalar(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
