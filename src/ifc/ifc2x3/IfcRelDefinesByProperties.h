// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelDefines.h"
#include "IfcPropertySetDefinition.h"

namespace ifc2x3
{
   class IfcRelDefinesByProperties : public IfcRelDefines
   {
   public:
      virtual ~IfcRelDefinesByProperties(){}

      explicit IfcRelDefinesByProperties() = default;

      explicit IfcRelDefinesByProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObject*>& _RelatedObjects, IfcPropertySetDefinition* _RelatingPropertyDefinition)
         : IfcRelDefines(_GlobalId, _OwnerHistory, _RelatedObjects), RelatingPropertyDefinition(_RelatingPropertyDefinition) {}

      virtual std::string className() const { return "IfcRelDefinesByProperties"; }

      IfcPropertySetDefinition* RelatingPropertyDefinition; // required parameter

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
         w.endEntity();
      }

   };

} // namespace ifc2x3

