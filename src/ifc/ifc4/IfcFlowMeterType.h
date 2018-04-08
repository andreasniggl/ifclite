// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowControllerType.h"

namespace ifc4
{
   class IfcFlowMeterType : public IfcFlowControllerType
   {
   public:
      virtual ~IfcFlowMeterType(){}

      explicit IfcFlowMeterType() = default;

      explicit IfcFlowMeterType(const IfcGloballyUniqueId& _GlobalId, const IfcFlowMeterTypeEnum& _PredefinedType)
         : IfcFlowControllerType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcFlowMeterType"; }

      boost::optional<IfcFlowMeterTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcFlowMeterTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
