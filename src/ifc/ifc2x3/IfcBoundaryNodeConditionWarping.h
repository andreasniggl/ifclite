// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBoundaryNodeCondition.h"

namespace ifc2x3
{
   class IfcBoundaryNodeConditionWarping : public IfcBoundaryNodeCondition
   {
   public:
      virtual ~IfcBoundaryNodeConditionWarping(){}

      explicit IfcBoundaryNodeConditionWarping() = default;

      virtual std::string className() const { return "IfcBoundaryNodeConditionWarping"; }

      boost::optional<IfcWarpingMomentMeasure> WarpingStiffness; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(LinearStiffnessX);
         w.writeAttributeValue(LinearStiffnessY);
         w.writeAttributeValue(LinearStiffnessZ);
         w.writeAttributeValue(RotationalStiffnessX);
         w.writeAttributeValue(RotationalStiffnessY);
         w.writeAttributeValue(RotationalStiffnessZ);
         w.writeAttributeValue(WarpingStiffness);
         w.endEntity();
      }

   };

} // namespace ifc2x3

