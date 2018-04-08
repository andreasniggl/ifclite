// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowSegment.h"

namespace ifc4
{
   class IfcCableSegment : public IfcFlowSegment
   {
   public:
      virtual ~IfcCableSegment(){}

      explicit IfcCableSegment() = default;

      explicit IfcCableSegment(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowSegment(_GlobalId) {}

      virtual std::string className() const { return "IfcCableSegment"; }

      boost::optional<IfcCableSegmentTypeEnum> PredefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(IfcCableSegmentTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

