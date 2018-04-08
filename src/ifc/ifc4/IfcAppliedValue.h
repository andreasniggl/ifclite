// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcAppliedValueSelect.h"
#include "IfcMeasureWithUnit.h"
#include "IfcAppliedValue.h"

namespace ifc4
{
   class IfcAppliedValue : public ifc::Entity
   {
   public:
      virtual ~IfcAppliedValue(){}

      explicit IfcAppliedValue() = default;

      virtual std::string className() const { return "IfcAppliedValue"; }

      boost::optional<IfcLabel> Name; // optional parameter
      boost::optional<IfcText> Description; // optional parameter
      boost::optional<IfcAppliedValueSelect> AppliedValue; // optional parameter
      IfcMeasureWithUnit* UnitBasis; // optional parameter
      boost::optional<IfcDate> ApplicableDate; // optional parameter
      boost::optional<IfcDate> FixedUntilDate; // optional parameter
      boost::optional<IfcLabel> Category; // optional parameter
      boost::optional<IfcLabel> Condition; // optional parameter
      boost::optional<IfcArithmeticOperatorEnum> ArithmeticOperator; // optional parameter
      std::vector<IfcAppliedValue*> Components; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcAppliedValueSelectWriterVisitor>(AppliedValue);
         w.writeAttributeInstance(UnitBasis);
         w.writeAttributeValue(ApplicableDate);
         w.writeAttributeValue(FixedUntilDate);
         w.writeAttributeValue(Category);
         w.writeAttributeValue(Condition);
         w.writeAttributeValue(IfcArithmeticOperatorEnumStringMap, ArithmeticOperator);
         w.writeAttributeInstance(Components);
         w.endEntity();
      }

   };

} // namespace ifc4
