// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSimpleProperty.h"
#include "IfcValue.h"
#include "IfcUnit.h"

namespace ifc2x3
{
   class IfcPropertyListValue : public IfcSimpleProperty
   {
   public:
      virtual ~IfcPropertyListValue(){}

      explicit IfcPropertyListValue() = default;

      explicit IfcPropertyListValue(const IfcIdentifier& _Name, const std::vector< boost::optional<IfcValue> >& _ListValues)
         : IfcSimpleProperty(_Name), ListValues(_ListValues) {}

      virtual std::string className() const { return "IfcPropertyListValue"; }

      std::vector< boost::optional<IfcValue> > ListValues; // required parameter
      boost::optional<IfcUnit> Unit; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcValueWriterVisitor>(ListValues);
         w.writeAttributeSelect<IfcUnitWriterVisitor>(Unit);
         w.endEntity();
      }

   };

} // namespace ifc2x3

