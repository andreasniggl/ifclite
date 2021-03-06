// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"
#include "IfcWorkTime.h"
#include "IfcWorkTime.h"

namespace ifc4
{
   class IfcWorkCalendar : public IfcControl
   {
   public:
      virtual ~IfcWorkCalendar(){}

      explicit IfcWorkCalendar() = default;

      explicit IfcWorkCalendar(const IfcGloballyUniqueId& _GlobalId)
         : IfcControl(_GlobalId) {}

      virtual std::string className() const { return "IfcWorkCalendar"; }

      std::vector<IfcWorkTime*> WorkingTimes; // optional parameter
      std::vector<IfcWorkTime*> ExceptionTimes; // optional parameter
      boost::optional<IfcWorkCalendarTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeInstance(WorkingTimes);
         w.writeAttributeInstance(ExceptionTimes);
         w.writeAttributeValue(IfcWorkCalendarTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

