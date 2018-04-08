#ifndef IFC2X3_IFCPROPERTYBOUNDEDVALUE_H_INCLUDED
#define IFC2X3_IFCPROPERTYBOUNDEDVALUE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcSimpleProperty.h"
#include "IfcValue.h"
#include "IfcValue.h"
#include "IfcUnit.h"

namespace ifc2x3
{
   class IfcPropertyBoundedValue : public IfcSimpleProperty
   {
   public:
      virtual ~IfcPropertyBoundedValue(){}

      IfcPropertyBoundedValue() = default;

      IfcPropertyBoundedValue(const IfcIdentifier& _Name)
         : IfcSimpleProperty(_Name) {}

      virtual std::string name() const { return "IfcPropertyBoundedValue"; }

      boost::optional<IfcValue> UpperBoundValue; // optional parameter
      boost::optional<IfcValue> LowerBoundValue; // optional parameter
      boost::optional<IfcUnit> Unit; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeSelect<IfcValueWriterVisitor>(UpperBoundValue);
         w.writeAttributeSelect<IfcValueWriterVisitor>(LowerBoundValue);
         w.writeAttributeSelect<IfcUnitWriterVisitor>(Unit);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
