// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcValue.h"
#include "IfcUnit.h"

namespace ifc2x3
{
   class IfcPropertyEnumeration : public ifc::Entity
   {
   public:
      virtual ~IfcPropertyEnumeration(){}

      explicit IfcPropertyEnumeration() = default;

      explicit IfcPropertyEnumeration(const IfcLabel& _Name, const std::vector< boost::optional<IfcValue> >& _EnumerationValues)
         : ifc::Entity(), Name(_Name), EnumerationValues(_EnumerationValues) {}

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

} // namespace ifc2x3

