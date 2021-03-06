// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPropertyAbstraction.h"
#include "IfcValue.h"
#include "IfcUnit.h"

namespace ifc4
{
   class IfcPropertyEnumeration : public IfcPropertyAbstraction
   {
   public:
      virtual ~IfcPropertyEnumeration(){}

      explicit IfcPropertyEnumeration() = default;

      explicit IfcPropertyEnumeration(const IfcLabel& _Name, const std::vector< boost::optional<IfcValue> >& _EnumerationValues)
         : IfcPropertyAbstraction(), Name(_Name), EnumerationValues(_EnumerationValues) {}

      virtual std::string className() const { return "IfcPropertyEnumeration"; }

      boost::optional<IfcLabel> Name; // required parameter
      std::vector< boost::optional<IfcValue> > EnumerationValues; // required parameter
      boost::optional<IfcUnit> Unit; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeSelect<IfcValueWriterVisitor>(EnumerationValues);
         w.writeAttributeSelect<IfcUnitWriterVisitor>(Unit);
         w.endEntity();
      }

   };

} // namespace ifc4

