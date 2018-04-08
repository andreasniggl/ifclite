#ifndef IFC2X3_IFCWINDOWLININGPROPERTIES_H_INCLUDED
#define IFC2X3_IFCWINDOWLININGPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPropertySetDefinition.h"
#include "IfcShapeAspect.h"

namespace ifc2x3
{
   class IfcWindowLiningProperties : public IfcPropertySetDefinition
   {
   public:
      virtual ~IfcWindowLiningProperties(){}

      IfcWindowLiningProperties() = default;

      IfcWindowLiningProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcPropertySetDefinition(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcWindowLiningProperties"; }

      boost::optional<IfcPositiveLengthMeasure> LiningDepth; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> LiningThickness; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> TransomThickness; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> MullionThickness; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> FirstTransomOffset; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> SecondTransomOffset; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> FirstMullionOffset; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> SecondMullionOffset; // optional parameter
      IfcShapeAspect* ShapeAspectStyle; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(LiningDepth);
         w.writeAttributeValueScalar(LiningThickness);
         w.writeAttributeValueScalar(TransomThickness);
         w.writeAttributeValueScalar(MullionThickness);
         w.writeAttributeValueScalar(FirstTransomOffset);
         w.writeAttributeValueScalar(SecondTransomOffset);
         w.writeAttributeValueScalar(FirstMullionOffset);
         w.writeAttributeValueScalar(SecondMullionOffset);
         w.writeAttributeInstance(ShapeAspectStyle);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
