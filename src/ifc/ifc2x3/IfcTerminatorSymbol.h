#ifndef IFC2X3_IFCTERMINATORSYMBOL_H_INCLUDED
#define IFC2X3_IFCTERMINATORSYMBOL_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcAnnotationSymbolOccurrence.h"
#include "IfcAnnotationCurveOccurrence.h"

namespace ifc2x3
{
   class IfcTerminatorSymbol : public IfcAnnotationSymbolOccurrence
   {
   public:
      virtual ~IfcTerminatorSymbol(){}

      IfcTerminatorSymbol() = default;

      IfcTerminatorSymbol(const std::vector<IfcPresentationStyleAssignment*>& _Styles, IfcAnnotationCurveOccurrence* _AnnotatedCurve)
         : IfcAnnotationSymbolOccurrence(_Styles), AnnotatedCurve(_AnnotatedCurve) {}

      virtual std::string name() const { return "IfcTerminatorSymbol"; }

      IfcAnnotationCurveOccurrence* AnnotatedCurve; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Item);
         w.writeAttributeInstanceList(Styles);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeInstance(AnnotatedCurve);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif