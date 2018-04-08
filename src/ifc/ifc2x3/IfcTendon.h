// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElement.h"

namespace ifc2x3
{
   class IfcTendon : public IfcReinforcingElement
   {
   public:
      virtual ~IfcTendon(){}

      explicit IfcTendon() = default;

      explicit IfcTendon(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcTendonTypeEnum& _PredefinedType, const IfcPositiveLengthMeasure& _NominalDiameter, const IfcAreaMeasure& _CrossSectionArea)
         : IfcReinforcingElement(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType), NominalDiameter(_NominalDiameter), CrossSectionArea(_CrossSectionArea) {}

      virtual std::string className() const { return "IfcTendon"; }

      boost::optional<IfcTendonTypeEnum> PredefinedType; // required parameter
      boost::optional<IfcPositiveLengthMeasure> NominalDiameter; // required parameter
      boost::optional<IfcAreaMeasure> CrossSectionArea; // required parameter
      boost::optional<IfcForceMeasure> TensionForce; // optional parameter
      boost::optional<IfcPressureMeasure> PreStress; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> FrictionCoefficient; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> AnchorageSlip; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> MinCurvatureRadius; // optional parameter

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
         w.writeAttributeValue(IfcTendonTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(NominalDiameter);
         w.writeAttributeValue(CrossSectionArea);
         w.writeAttributeValue(TensionForce);
         w.writeAttributeValue(PreStress);
         w.writeAttributeValue(FrictionCoefficient);
         w.writeAttributeValue(AnchorageSlip);
         w.writeAttributeValue(MinCurvatureRadius);
         w.endEntity();
      }

   };

} // namespace ifc2x3

