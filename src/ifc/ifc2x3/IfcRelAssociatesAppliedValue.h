// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelAssociates.h"
#include "IfcAppliedValue.h"

namespace ifc2x3
{
   class IfcRelAssociatesAppliedValue : public IfcRelAssociates
   {
   public:
      virtual ~IfcRelAssociatesAppliedValue(){}

      explicit IfcRelAssociatesAppliedValue() = default;

      explicit IfcRelAssociatesAppliedValue(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcRoot*>& _RelatedObjects, IfcAppliedValue* _RelatingAppliedValue)
         : IfcRelAssociates(_GlobalId, _OwnerHistory, _RelatedObjects), RelatingAppliedValue(_RelatingAppliedValue) {}

      virtual std::string className() const { return "IfcRelAssociatesAppliedValue"; }

      IfcAppliedValue* RelatingAppliedValue; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedObjects);
         w.writeAttributeInstance(RelatingAppliedValue);
         w.endEntity();
      }

   };

} // namespace ifc2x3

