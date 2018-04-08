#ifndef IFC2X3_IFCDIMENSIONCURVETERMINATOR_H_INCLUDED
#define IFC2X3_IFCDIMENSIONCURVETERMINATOR_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcTerminatorSymbol.h"

namespace ifc2x3
{
   class IfcDimensionCurveTerminator : public IfcTerminatorSymbol
   {
   public:
      virtual ~IfcDimensionCurveTerminator(){}

      IfcDimensionCurveTerminator() = default;

      IfcDimensionCurveTerminator(const std::vector<IfcPresentationStyleAssignment*>& _Styles, IfcAnnotationCurveOccurrence* _AnnotatedCurve, const IfcDimensionExtentUsage& _Role)
         : IfcTerminatorSymbol(_Styles, _AnnotatedCurve), Role(_Role) {}

      virtual std::string name() const { return "IfcDimensionCurveTerminator"; }

      boost::optional<IfcDimensionExtentUsage> Role; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Item);
         w.writeAttributeInstanceList(Styles);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeInstance(AnnotatedCurve);
         w.writeAttributeValueEnumeration(IfcDimensionExtentUsageStringMap, Role);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
