// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcWorkControl.h"

namespace ifc4
{
   class IfcWorkSchedule : public IfcWorkControl
   {
   public:
      virtual ~IfcWorkSchedule(){}

      explicit IfcWorkSchedule() = default;

      explicit IfcWorkSchedule(const IfcGloballyUniqueId& _GlobalId, const IfcDateTime& _CreationDate, const IfcDateTime& _StartTime)
         : IfcWorkControl(_GlobalId, _CreationDate, _StartTime) {}

      virtual std::string className() const { return "IfcWorkSchedule"; }

      boost::optional<IfcWorkScheduleTypeEnum> PredefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(Identification);
         w.writeAttributeValue(CreationDate);
         w.writeAttributeInstance(Creators);
         w.writeAttributeValue(Purpose);
         w.writeAttributeValue(Duration);
         w.writeAttributeValue(TotalFloat);
         w.writeAttributeValue(StartTime);
         w.writeAttributeValue(FinishTime);
         w.writeAttributeValue(IfcWorkScheduleTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
