// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowSegmentType.h"

namespace ifc2x3
{
   class IfcDuctSegmentType : public IfcFlowSegmentType
   {
   public:
      virtual ~IfcDuctSegmentType(){}

      explicit IfcDuctSegmentType() = default;

      explicit IfcDuctSegmentType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcDuctSegmentTypeEnum& _PredefinedType)
         : IfcFlowSegmentType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcDuctSegmentType"; }

      boost::optional<IfcDuctSegmentTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcDuctSegmentTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

