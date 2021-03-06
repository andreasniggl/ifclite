// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPropertyTemplate.h"
#include "IfcPropertyTemplate.h"

namespace ifc4
{
   class IfcComplexPropertyTemplate : public IfcPropertyTemplate
   {
   public:
      virtual ~IfcComplexPropertyTemplate(){}

      explicit IfcComplexPropertyTemplate() = default;

      explicit IfcComplexPropertyTemplate(const IfcGloballyUniqueId& _GlobalId)
         : IfcPropertyTemplate(_GlobalId) {}

      virtual std::string className() const { return "IfcComplexPropertyTemplate"; }

      boost::optional<IfcLabel> UsageName; // optional parameter
      boost::optional<IfcComplexPropertyTemplateTypeEnum> TemplateType; // optional parameter
      std::vector<IfcPropertyTemplate*> HasPropertyTemplates; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(UsageName);
         w.writeAttributeValue(IfcComplexPropertyTemplateTypeEnumStringMap, TemplateType);
         w.writeAttributeInstance(HasPropertyTemplates);
         w.endEntity();
      }

   };

} // namespace ifc4

