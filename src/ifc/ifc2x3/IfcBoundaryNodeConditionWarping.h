#ifndef IFC2X3_IFCBOUNDARYNODECONDITIONWARPING_H_INCLUDED
#define IFC2X3_IFCBOUNDARYNODECONDITIONWARPING_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBoundaryNodeCondition.h"

namespace ifc2x3
{
   class IfcBoundaryNodeConditionWarping : public IfcBoundaryNodeCondition
   {
   public:
      virtual ~IfcBoundaryNodeConditionWarping(){}

      IfcBoundaryNodeConditionWarping() = default;

      virtual std::string name() const { return "IfcBoundaryNodeConditionWarping"; }

      boost::optional<IfcWarpingMomentMeasure> WarpingStiffness; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(LinearStiffnessX);
         w.writeAttributeValueScalar(LinearStiffnessY);
         w.writeAttributeValueScalar(LinearStiffnessZ);
         w.writeAttributeValueScalar(RotationalStiffnessX);
         w.writeAttributeValueScalar(RotationalStiffnessY);
         w.writeAttributeValueScalar(RotationalStiffnessZ);
         w.writeAttributeValueScalar(WarpingStiffness);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
