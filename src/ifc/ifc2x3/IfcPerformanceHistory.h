// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"

namespace ifc2x3
{
   class IfcPerformanceHistory : public IfcControl
   {
   public:
      virtual ~IfcPerformanceHistory(){}

      explicit IfcPerformanceHistory() = default;

      explicit IfcPerformanceHistory(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcLabel& _LifeCyclePhase)
         : IfcControl(_GlobalId, _OwnerHistory), LifeCyclePhase(_LifeCyclePhase) {}

      virtual std::string className() const { return "IfcPerformanceHistory"; }

      boost::optional<IfcLabel> LifeCyclePhase; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(LifeCyclePhase);
         w.endEntity();
      }

   };

} // namespace ifc2x3

