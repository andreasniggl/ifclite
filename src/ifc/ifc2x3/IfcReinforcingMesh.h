// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElement.h"

namespace ifc2x3
{
   class IfcReinforcingMesh : public IfcReinforcingElement
   {
   public:
      virtual ~IfcReinforcingMesh(){}

      explicit IfcReinforcingMesh() = default;

      explicit IfcReinforcingMesh(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcPositiveLengthMeasure& _LongitudinalBarNominalDiameter, const IfcPositiveLengthMeasure& _TransverseBarNominalDiameter, const IfcAreaMeasure& _LongitudinalBarCrossSectionArea, const IfcAreaMeasure& _TransverseBarCrossSectionArea, const IfcPositiveLengthMeasure& _LongitudinalBarSpacing, const IfcPositiveLengthMeasure& _TransverseBarSpacing)
         : IfcReinforcingElement(_GlobalId, _OwnerHistory), LongitudinalBarNominalDiameter(_LongitudinalBarNominalDiameter), TransverseBarNominalDiameter(_TransverseBarNominalDiameter), LongitudinalBarCrossSectionArea(_LongitudinalBarCrossSectionArea), TransverseBarCrossSectionArea(_TransverseBarCrossSectionArea), LongitudinalBarSpacing(_LongitudinalBarSpacing), TransverseBarSpacing(_TransverseBarSpacing) {}

      virtual std::string className() const { return "IfcReinforcingMesh"; }

      boost::optional<IfcPositiveLengthMeasure> MeshLength; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> MeshWidth; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> LongitudinalBarNominalDiameter; // required parameter
      boost::optional<IfcPositiveLengthMeasure> TransverseBarNominalDiameter; // required parameter
      boost::optional<IfcAreaMeasure> LongitudinalBarCrossSectionArea; // required parameter
      boost::optional<IfcAreaMeasure> TransverseBarCrossSectionArea; // required parameter
      boost::optional<IfcPositiveLengthMeasure> LongitudinalBarSpacing; // required parameter
      boost::optional<IfcPositiveLengthMeasure> TransverseBarSpacing; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(SteelGrade);
         w.writeAttributeValue(MeshLength);
         w.writeAttributeValue(MeshWidth);
         w.writeAttributeValue(LongitudinalBarNominalDiameter);
         w.writeAttributeValue(TransverseBarNominalDiameter);
         w.writeAttributeValue(LongitudinalBarCrossSectionArea);
         w.writeAttributeValue(TransverseBarCrossSectionArea);
         w.writeAttributeValue(LongitudinalBarSpacing);
         w.writeAttributeValue(TransverseBarSpacing);
         w.endEntity();
      }

   };

} // namespace ifc2x3

