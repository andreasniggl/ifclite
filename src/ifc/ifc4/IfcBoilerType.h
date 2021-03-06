// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcEnergyConversionDeviceType.h"

namespace ifc4
{
   class IfcBoilerType : public IfcEnergyConversionDeviceType
   {
   public:
      virtual ~IfcBoilerType(){}

      explicit IfcBoilerType() = default;

      explicit IfcBoilerType(const IfcGloballyUniqueId& _GlobalId, const IfcBoilerTypeEnum& _PredefinedType)
         : IfcEnergyConversionDeviceType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcBoilerType"; }

      boost::optional<IfcBoilerTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcBoilerTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

