// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"
#include "IfcConditionCriterionSelect.h"
#include "IfcDateTimeSelect.h"

namespace ifc2x3
{
   class IfcConditionCriterion : public IfcControl
   {
   public:
      virtual ~IfcConditionCriterion(){}

      explicit IfcConditionCriterion() = default;

      explicit IfcConditionCriterion(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcConditionCriterionSelect& _Criterion, const IfcDateTimeSelect& _CriterionDateTime)
         : IfcControl(_GlobalId, _OwnerHistory), Criterion(_Criterion), CriterionDateTime(_CriterionDateTime) {}

      virtual std::string className() const { return "IfcConditionCriterion"; }

      boost::optional<IfcConditionCriterionSelect> Criterion; // required parameter
      boost::optional<IfcDateTimeSelect> CriterionDateTime; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeSelect<IfcConditionCriterionSelectWriterVisitor>(Criterion);
         w.writeAttributeSelect<IfcDateTimeSelectWriterVisitor>(CriterionDateTime);
         w.endEntity();
      }

   };

} // namespace ifc2x3

