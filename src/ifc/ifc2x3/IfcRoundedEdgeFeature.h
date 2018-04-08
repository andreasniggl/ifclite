#ifndef IFC2X3_IFCROUNDEDEDGEFEATURE_H_INCLUDED
#define IFC2X3_IFCROUNDEDEDGEFEATURE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcEdgeFeature.h"

namespace ifc2x3
{
   class IfcRoundedEdgeFeature : public IfcEdgeFeature
   {
   public:
      virtual ~IfcRoundedEdgeFeature(){}

      IfcRoundedEdgeFeature() = default;

      IfcRoundedEdgeFeature(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcEdgeFeature(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcRoundedEdgeFeature"; }

      boost::optional<IfcPositiveLengthMeasure> Radius; // optional parameter

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
         w.writeAttributeValueScalar(FeatureLength);
         w.writeAttributeValueScalar(Radius);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif