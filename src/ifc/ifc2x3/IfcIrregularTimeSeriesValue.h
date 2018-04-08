// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcDateTimeSelect.h"
#include "IfcValue.h"

namespace ifc2x3
{
   class IfcIrregularTimeSeriesValue : public ifc::Entity
   {
   public:
      virtual ~IfcIrregularTimeSeriesValue(){}

      explicit IfcIrregularTimeSeriesValue() = default;

      explicit IfcIrregularTimeSeriesValue(const IfcDateTimeSelect& _TimeStamp, const std::vector< boost::optional<IfcValue> >& _ListValues)
         : ifc::Entity(), TimeStamp(_TimeStamp), ListValues(_ListValues) {}

      virtual std::string className() const { return "IfcIrregularTimeSeriesValue"; }

      boost::optional<IfcDateTimeSelect> TimeStamp; // required parameter
      std::vector< boost::optional<IfcValue> > ListValues; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcDateTimeSelectWriterVisitor>(TimeStamp);
         w.writeAttributeSelect<IfcValueWriterVisitor>(ListValues);
         w.endEntity();
      }

   };

} // namespace ifc2x3

