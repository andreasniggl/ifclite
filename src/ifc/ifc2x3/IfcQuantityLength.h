// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPhysicalSimpleQuantity.h"

namespace ifc2x3
{
   class IfcQuantityLength : public IfcPhysicalSimpleQuantity
   {
   public:
      virtual ~IfcQuantityLength(){}

      explicit IfcQuantityLength() = default;

      explicit IfcQuantityLength(const IfcLabel& _Name, const IfcLengthMeasure& _LengthValue)
         : IfcPhysicalSimpleQuantity(_Name), LengthValue(_LengthValue) {}

      virtual std::string className() const { return "IfcQuantityLength"; }

      boost::optional<IfcLengthMeasure> LengthValue; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(Unit);
         w.writeAttributeValue(LengthValue);
         w.endEntity();
      }

   };

} // namespace ifc2x3

