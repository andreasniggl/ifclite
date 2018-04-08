// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcQuantitySet.h"
#include "IfcPhysicalQuantity.h"

namespace ifc4
{
   class IfcElementQuantity : public IfcQuantitySet
   {
   public:
      virtual ~IfcElementQuantity(){}

      explicit IfcElementQuantity() = default;

      explicit IfcElementQuantity(const IfcGloballyUniqueId& _GlobalId, const std::vector<IfcPhysicalQuantity*>& _Quantities)
         : IfcQuantitySet(_GlobalId), Quantities(_Quantities) {}

      virtual std::string className() const { return "IfcElementQuantity"; }

      boost::optional<IfcLabel> MethodOfMeasurement; // optional parameter
      std::vector<IfcPhysicalQuantity*> Quantities; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(MethodOfMeasurement);
         w.writeAttributeInstance(Quantities);
         w.endEntity();
      }

   };

} // namespace ifc4
