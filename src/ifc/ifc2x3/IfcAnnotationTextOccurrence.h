// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcAnnotationOccurrence.h"

namespace ifc2x3
{
   class IfcAnnotationTextOccurrence : public IfcAnnotationOccurrence
   {
   public:
      virtual ~IfcAnnotationTextOccurrence(){}

      explicit IfcAnnotationTextOccurrence() = default;

      explicit IfcAnnotationTextOccurrence(const std::vector<IfcPresentationStyleAssignment*>& _Styles)
         : IfcAnnotationOccurrence(_Styles) {}

      virtual std::string className() const { return "IfcAnnotationTextOccurrence"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Item);
         w.writeAttributeInstance(Styles);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

