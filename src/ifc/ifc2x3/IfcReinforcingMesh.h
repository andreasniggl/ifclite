#ifndef IFC2X3_IFCREINFORCINGMESH_H_INCLUDED
#define IFC2X3_IFCREINFORCINGMESH_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElement.h"

namespace ifc2x3
{
   class IfcReinforcingMesh : public IfcReinforcingElement
   {
   public:
      virtual ~IfcReinforcingMesh(){}

      IfcReinforcingMesh() = default;

      IfcReinforcingMesh(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcPositiveLengthMeasure& _LongitudinalBarNominalDiameter, const IfcPositiveLengthMeasure& _TransverseBarNominalDiameter, const IfcAreaMeasure& _LongitudinalBarCrossSectionArea, const IfcAreaMeasure& _TransverseBarCrossSectionArea, const IfcPositiveLengthMeasure& _LongitudinalBarSpacing, const IfcPositiveLengthMeasure& _TransverseBarSpacing)
         : IfcReinforcingElement(_GlobalId, _OwnerHistory), LongitudinalBarNominalDiameter(_LongitudinalBarNominalDiameter), TransverseBarNominalDiameter(_TransverseBarNominalDiameter), LongitudinalBarCrossSectionArea(_LongitudinalBarCrossSectionArea), TransverseBarCrossSectionArea(_TransverseBarCrossSectionArea), LongitudinalBarSpacing(_LongitudinalBarSpacing), TransverseBarSpacing(_TransverseBarSpacing) {}

      virtual std::string name() const { return "IfcReinforcingMesh"; }

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
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValueScalar(Tag);
         w.writeAttributeValueScalar(SteelGrade);
         w.writeAttributeValueScalar(MeshLength);
         w.writeAttributeValueScalar(MeshWidth);
         w.writeAttributeValueScalar(LongitudinalBarNominalDiameter);
         w.writeAttributeValueScalar(TransverseBarNominalDiameter);
         w.writeAttributeValueScalar(LongitudinalBarCrossSectionArea);
         w.writeAttributeValueScalar(TransverseBarCrossSectionArea);
         w.writeAttributeValueScalar(LongitudinalBarSpacing);
         w.writeAttributeValueScalar(TransverseBarSpacing);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif