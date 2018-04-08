// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralLoadGroup.h"

namespace ifc4
{
   class IfcStructuralLoadCase : public IfcStructuralLoadGroup
   {
   public:
      virtual ~IfcStructuralLoadCase(){}

      explicit IfcStructuralLoadCase() = default;

      explicit IfcStructuralLoadCase(const IfcGloballyUniqueId& _GlobalId, const IfcLoadGroupTypeEnum& _PredefinedType, const IfcActionTypeEnum& _ActionType, const IfcActionSourceTypeEnum& _ActionSource)
         : IfcStructuralLoadGroup(_GlobalId, _PredefinedType, _ActionType, _ActionSource) {}

      virtual std::string className() const { return "IfcStructuralLoadCase"; }

      std::vector<IfcRatioMeasure> SelfWeightCoefficients; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(IfcLoadGroupTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(IfcActionTypeEnumStringMap, ActionType);
         w.writeAttributeValue(IfcActionSourceTypeEnumStringMap, ActionSource);
         w.writeAttributeValue(Coefficient);
         w.writeAttributeValue(Purpose);
         w.writeAttributeValue(SelfWeightCoefficients);
         w.endEntity();
      }

   };

} // namespace ifc4
