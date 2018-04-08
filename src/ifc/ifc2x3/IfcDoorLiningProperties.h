#ifndef IFC2X3_IFCDOORLININGPROPERTIES_H_INCLUDED
#define IFC2X3_IFCDOORLININGPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPropertySetDefinition.h"
#include "IfcShapeAspect.h"

namespace ifc2x3
{
   class IfcDoorLiningProperties : public IfcPropertySetDefinition
   {
   public:
      virtual ~IfcDoorLiningProperties(){}

      IfcDoorLiningProperties() = default;

      IfcDoorLiningProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcPropertySetDefinition(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcDoorLiningProperties"; }

      boost::optional<IfcPositiveLengthMeasure> LiningDepth; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> LiningThickness; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> ThresholdDepth; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> ThresholdThickness; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> TransomThickness; // optional parameter
      boost::optional<IfcLengthMeasure> TransomOffset; // optional parameter
      boost::optional<IfcLengthMeasure> LiningOffset; // optional parameter
      boost::optional<IfcLengthMeasure> ThresholdOffset; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> CasingThickness; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> CasingDepth; // optional parameter
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
         w.writeAttributeValueScalar(ThresholdDepth);
         w.writeAttributeValueScalar(ThresholdThickness);
         w.writeAttributeValueScalar(TransomThickness);
         w.writeAttributeValueScalar(TransomOffset);
         w.writeAttributeValueScalar(LiningOffset);
         w.writeAttributeValueScalar(ThresholdOffset);
         w.writeAttributeValueScalar(CasingThickness);
         w.writeAttributeValueScalar(CasingDepth);
         w.writeAttributeInstance(ShapeAspectStyle);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
