// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowMovingDeviceType.h"

namespace ifc2x3
{
   class IfcCompressorType : public IfcFlowMovingDeviceType
   {
   public:
      virtual ~IfcCompressorType(){}

      explicit IfcCompressorType() = default;

      explicit IfcCompressorType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcCompressorTypeEnum& _PredefinedType)
         : IfcFlowMovingDeviceType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcCompressorType"; }

      boost::optional<IfcCompressorTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcCompressorTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

