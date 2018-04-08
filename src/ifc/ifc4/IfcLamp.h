// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowTerminal.h"

namespace ifc4
{
   class IfcLamp : public IfcFlowTerminal
   {
   public:
      virtual ~IfcLamp(){}

      explicit IfcLamp() = default;

      explicit IfcLamp(const IfcGloballyUniqueId& _GlobalId)
         : IfcFlowTerminal(_GlobalId) {}

      virtual std::string className() const { return "IfcLamp"; }

      boost::optional<IfcLampTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcLampTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

