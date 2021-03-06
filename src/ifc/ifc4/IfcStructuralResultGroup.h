// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"
#include "IfcStructuralLoadGroup.h"

namespace ifc4
{
   class IfcStructuralResultGroup : public IfcGroup
   {
   public:
      virtual ~IfcStructuralResultGroup(){}

      explicit IfcStructuralResultGroup() = default;

      explicit IfcStructuralResultGroup(const IfcGloballyUniqueId& _GlobalId, const IfcAnalysisTheoryTypeEnum& _TheoryType, const IfcBoolean& _IsLinear)
         : IfcGroup(_GlobalId), TheoryType(_TheoryType), IsLinear(_IsLinear) {}

      virtual std::string className() const { return "IfcStructuralResultGroup"; }

      boost::optional<IfcAnalysisTheoryTypeEnum> TheoryType; // required parameter
      IfcStructuralLoadGroup* ResultForLoadGroup; // optional parameter
      boost::optional<IfcBoolean> IsLinear; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(IfcAnalysisTheoryTypeEnumStringMap, TheoryType);
         w.writeAttributeInstance(ResultForLoadGroup);
         w.writeAttributeValue(IsLinear);
         w.endEntity();
      }

   };

} // namespace ifc4

