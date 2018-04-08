// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcValue.h"

namespace ifc4
{
   class IfcTimeSeriesValue : public ifc::Entity
   {
   public:
      virtual ~IfcTimeSeriesValue(){}

      explicit IfcTimeSeriesValue() = default;

      explicit IfcTimeSeriesValue(const std::vector< boost::optional<IfcValue> >& _ListValues)
         : ifc::Entity(), ListValues(_ListValues) {}

      virtual std::string className() const { return "IfcTimeSeriesValue"; }

      std::vector< boost::optional<IfcValue> > ListValues; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcValueWriterVisitor>(ListValues);
         w.endEntity();
      }

   };

} // namespace ifc4
