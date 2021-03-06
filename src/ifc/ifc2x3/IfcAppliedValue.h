// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcAppliedValueSelect.h"
#include "IfcMeasureWithUnit.h"
#include "IfcDateTimeSelect.h"
#include "IfcDateTimeSelect.h"

namespace ifc2x3
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
      boost::optional<IfcDateTimeSelect> ApplicableDate; // optional parameter
      boost::optional<IfcDateTimeSelect> FixedUntilDate; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcAppliedValueSelectWriterVisitor>(AppliedValue);
         w.writeAttributeInstance(UnitBasis);
         w.writeAttributeSelect<IfcDateTimeSelectWriterVisitor>(ApplicableDate);
         w.writeAttributeSelect<IfcDateTimeSelectWriterVisitor>(FixedUntilDate);
         w.endEntity();
      }

   };

} // namespace ifc2x3

