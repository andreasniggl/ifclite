// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPhysicalSimpleQuantity.h"

namespace ifc2x3
{
   class IfcQuantityCount : public IfcPhysicalSimpleQuantity
   {
   public:
      virtual ~IfcQuantityCount(){}

      explicit IfcQuantityCount() = default;

      explicit IfcQuantityCount(const IfcLabel& _Name, const IfcCountMeasure& _CountValue)
         : IfcPhysicalSimpleQuantity(_Name), CountValue(_CountValue) {}

      virtual std::string className() const { return "IfcQuantityCount"; }

      boost::optional<IfcCountMeasure> CountValue; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(Unit);
         w.writeAttributeValue(CountValue);
         w.endEntity();
      }

   };

} // namespace ifc2x3

