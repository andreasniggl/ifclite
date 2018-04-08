// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowTerminal.h"

namespace ifc4
{
   class IfcFireSuppressionTerminal : public IfcFlowTerminal
   {
   public:
      virtual ~IfcFireSuppressionTerminal(){}

      explicit IfcFireSuppressionTerminal() = default;

      explicit IfcFireSuppressionTerminal(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowTerminal(_GlobalId) {}

      virtual std::string className() const { return "IfcFireSuppressionTerminal"; }

      boost::optional<IfcFireSuppressionTerminalTypeEnum> PredefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(IfcFireSuppressionTerminalTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

