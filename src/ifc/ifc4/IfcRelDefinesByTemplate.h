// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelDefines.h"
#include "IfcPropertySetDefinition.h"
#include "IfcPropertySetTemplate.h"

namespace ifc4
{
   class IfcRelDefinesByTemplate : public IfcRelDefines
   {
   public:
      virtual ~IfcRelDefinesByTemplate(){}

      explicit IfcRelDefinesByTemplate() = default;

      explicit IfcRelDefinesByTemplate(const IfcGloballyUniqueId& _GlobalId, const std::vector<IfcPropertySetDefinition*>& _RelatedPropertySets, IfcPropertySetTemplate* _RelatingTemplate)
         : IfcRelDefines(_GlobalId), RelatedPropertySets(_RelatedPropertySets), RelatingTemplate(_RelatingTemplate) {}

      virtual std::string className() const { return "IfcRelDefinesByTemplate"; }

      std::vector<IfcPropertySetDefinition*> RelatedPropertySets; // required parameter
      IfcPropertySetTemplate* RelatingTemplate; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedPropertySets);
         w.writeAttributeInstance(RelatingTemplate);
         w.endEntity();
      }

   };

} // namespace ifc4
