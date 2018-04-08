// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowControllerType.h"

namespace ifc4
{
   class IfcProtectiveDeviceType : public IfcFlowControllerType
   {
   public:
      virtual ~IfcProtectiveDeviceType(){}

      explicit IfcProtectiveDeviceType() = default;

      explicit IfcProtectiveDeviceType(const IfcGloballyUniqueId& _GlobalId, const IfcProtectiveDeviceTypeEnum& _PredefinedType)
         : IfcFlowControllerType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcProtectiveDeviceType"; }

      boost::optional<IfcProtectiveDeviceTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcProtectiveDeviceTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
