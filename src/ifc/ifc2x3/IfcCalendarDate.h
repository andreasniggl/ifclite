// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcCalendarDate : public ifc::Entity
   {
   public:
      virtual ~IfcCalendarDate(){}

      explicit IfcCalendarDate() = default;

      explicit IfcCalendarDate(const IfcDayInMonthNumber& _DayComponent, const IfcMonthInYearNumber& _MonthComponent, const IfcYearNumber& _YearComponent)
         : ifc::Entity(), DayComponent(_DayComponent), MonthComponent(_MonthComponent), YearComponent(_YearComponent) {}

      virtual std::string className() const { return "IfcCalendarDate"; }

      boost::optional<IfcDayInMonthNumber> DayComponent; // required parameter
      boost::optional<IfcMonthInYearNumber> MonthComponent; // required parameter
      boost::optional<IfcYearNumber> YearComponent; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(DayComponent);
         w.writeAttributeValue(MonthComponent);
         w.writeAttributeValue(YearComponent);
         w.endEntity();
      }

   };

} // namespace ifc2x3

