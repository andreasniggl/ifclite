// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRoot.h"

namespace ifc2x3
{
   class IfcObjectDefinition : public IfcRoot
   {
   public:
      virtual ~IfcObjectDefinition(){}

      explicit IfcObjectDefinition() = default;

      explicit IfcObjectDefinition(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcRoot(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcObjectDefinition"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.endEntity();
      }

   };

} // namespace ifc2x3

