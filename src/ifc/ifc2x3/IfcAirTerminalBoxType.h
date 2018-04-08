// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowControllerType.h"

namespace ifc2x3
{
   class IfcAirTerminalBoxType : public IfcFlowControllerType
   {
   public:
      virtual ~IfcAirTerminalBoxType(){}

      explicit IfcAirTerminalBoxType() = default;

      explicit IfcAirTerminalBoxType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcAirTerminalBoxTypeEnum& _PredefinedType)
         : IfcFlowControllerType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcAirTerminalBoxType"; }

      boost::optional<IfcAirTerminalBoxTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcAirTerminalBoxTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

