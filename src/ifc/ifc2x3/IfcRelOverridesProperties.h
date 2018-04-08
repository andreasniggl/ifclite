// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelDefinesByProperties.h"
#include "IfcProperty.h"

namespace ifc2x3
{
   class IfcRelOverridesProperties : public IfcRelDefinesByProperties
   {
   public:
      virtual ~IfcRelOverridesProperties(){}

      explicit IfcRelOverridesProperties() = default;

      explicit IfcRelOverridesProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObject*>& _RelatedObjects, IfcPropertySetDefinition* _RelatingPropertyDefinition, const std::vector<IfcProperty*>& _OverridingProperties)
         : IfcRelDefinesByProperties(_GlobalId, _OwnerHistory, _RelatedObjects, _RelatingPropertyDefinition), OverridingProperties(_OverridingProperties) {}

      virtual std::string className() const { return "IfcRelOverridesProperties"; }

      std::vector<IfcProperty*> OverridingProperties; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedObjects);
         w.writeAttributeInstance(RelatingPropertyDefinition);
         w.writeAttributeInstance(OverridingProperties);
         w.endEntity();
      }

   };

} // namespace ifc2x3

