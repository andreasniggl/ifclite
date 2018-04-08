// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcColourSpecification.h"

namespace ifc4
{
   class IfcColourRgb : public IfcColourSpecification
   {
   public:
      virtual ~IfcColourRgb(){}

      explicit IfcColourRgb() = default;

      explicit IfcColourRgb(const IfcNormalisedRatioMeasure& _Red, const IfcNormalisedRatioMeasure& _Green, const IfcNormalisedRatioMeasure& _Blue)
         : IfcColourSpecification(), Red(_Red), Green(_Green), Blue(_Blue) {}

      virtual std::string className() const { return "IfcColourRgb"; }

      boost::optional<IfcNormalisedRatioMeasure> Red; // required parameter
      boost::optional<IfcNormalisedRatioMeasure> Green; // required parameter
      boost::optional<IfcNormalisedRatioMeasure> Blue; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Red);
         w.writeAttributeValue(Green);
         w.writeAttributeValue(Blue);
         w.endEntity();
      }

   };

} // namespace ifc4

