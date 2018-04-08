// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowSegmentType.h"

namespace ifc4
{
   class IfcPipeSegmentType : public IfcFlowSegmentType
   {
   public:
      virtual ~IfcPipeSegmentType(){}

      explicit IfcPipeSegmentType() = default;

      explicit IfcPipeSegmentType(const IfcGloballyUniqueId& _GlobalId, const IfcPipeSegmentTypeEnum& _PredefinedType)
         : IfcFlowSegmentType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcPipeSegmentType"; }

      boost::optional<IfcPipeSegmentTypeEnum> PredefinedType; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ApplicableOccurrence);
         w.writeAttributeInstance(HasPropertySets);
         w.writeAttributeInstance(RepresentationMaps);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(ElementType);
         w.writeAttributeValue(IfcPipeSegmentTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

