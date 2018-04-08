// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcEnergyConversionDeviceType.h"

namespace ifc2x3
{
   class IfcEvaporativeCoolerType : public IfcEnergyConversionDeviceType
   {
   public:
      virtual ~IfcEvaporativeCoolerType(){}

      explicit IfcEvaporativeCoolerType() = default;

      explicit IfcEvaporativeCoolerType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcEvaporativeCoolerTypeEnum& _PredefinedType)
         : IfcEnergyConversionDeviceType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcEvaporativeCoolerType"; }

      boost::optional<IfcEvaporativeCoolerTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcEvaporativeCoolerTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

