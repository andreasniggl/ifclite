// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowTerminalType.h"

namespace ifc2x3
{
   class IfcLampType : public IfcFlowTerminalType
   {
   public:
      virtual ~IfcLampType(){}

      explicit IfcLampType() = default;

      explicit IfcLampType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcLampTypeEnum& _PredefinedType)
         : IfcFlowTerminalType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcLampType"; }

      boost::optional<IfcLampTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcLampTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

