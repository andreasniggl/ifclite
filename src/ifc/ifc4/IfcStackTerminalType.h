// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowTerminalType.h"

namespace ifc4
{
   class IfcStackTerminalType : public IfcFlowTerminalType
   {
   public:
      virtual ~IfcStackTerminalType(){}

      explicit IfcStackTerminalType() = default;

      explicit IfcStackTerminalType(const IfcGloballyUniqueId& _GlobalId, const IfcStackTerminalTypeEnum& _PredefinedType)
         : IfcFlowTerminalType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcStackTerminalType"; }

      boost::optional<IfcStackTerminalTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcStackTerminalTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

