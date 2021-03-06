// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDraughtingCalloutRelationship.h"

namespace ifc2x3
{
   class IfcDimensionCalloutRelationship : public IfcDraughtingCalloutRelationship
   {
   public:
      virtual ~IfcDimensionCalloutRelationship(){}

      explicit IfcDimensionCalloutRelationship() = default;

      explicit IfcDimensionCalloutRelationship(IfcDraughtingCallout* _RelatingDraughtingCallout, IfcDraughtingCallout* _RelatedDraughtingCallout)
         : IfcDraughtingCalloutRelationship(_RelatingDraughtingCallout, _RelatedDraughtingCallout) {}

      virtual std::string className() const { return "IfcDimensionCalloutRelationship"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingDraughtingCallout);
         w.writeAttributeInstance(RelatedDraughtingCallout);
         w.endEntity();
      }

   };

} // namespace ifc2x3

