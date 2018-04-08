// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowSegment.h"

namespace ifc4
{
   class IfcPipeSegment : public IfcFlowSegment
   {
   public:
      virtual ~IfcPipeSegment(){}

      explicit IfcPipeSegment() = default;

      explicit IfcPipeSegment(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowSegment(_GlobalId) {}

      virtual std::string className() const { return "IfcPipeSegment"; }

      boost::optional<IfcPipeSegmentTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcPipeSegmentTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

