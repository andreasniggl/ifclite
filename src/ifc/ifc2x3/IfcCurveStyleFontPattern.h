// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcCurveStyleFontPattern : public ifc::Entity
   {
   public:
      virtual ~IfcCurveStyleFontPattern(){}

      explicit IfcCurveStyleFontPattern() = default;

      explicit IfcCurveStyleFontPattern(const IfcLengthMeasure& _VisibleSegmentLength, const IfcPositiveLengthMeasure& _InvisibleSegmentLength)
         : ifc::Entity(), VisibleSegmentLength(_VisibleSegmentLength), InvisibleSegmentLength(_InvisibleSegmentLength) {}

      virtual std::string className() const { return "IfcCurveStyleFontPattern"; }

      boost::optional<IfcLengthMeasure> VisibleSegmentLength; // required parameter
      boost::optional<IfcPositiveLengthMeasure> InvisibleSegmentLength; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(VisibleSegmentLength);
         w.writeAttributeValue(InvisibleSegmentLength);
         w.endEntity();
      }

   };

} // namespace ifc2x3

