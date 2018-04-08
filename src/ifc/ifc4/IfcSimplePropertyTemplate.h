// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPropertyTemplate.h"
#include "IfcPropertyEnumeration.h"
#include "IfcUnit.h"
#include "IfcUnit.h"

namespace ifc4
{
   class IfcSimplePropertyTemplate : public IfcPropertyTemplate
   {
   public:
      virtual ~IfcSimplePropertyTemplate(){}

      explicit IfcSimplePropertyTemplate() = default;

      explicit IfcSimplePropertyTemplate(const IfcGloballyUniqueId& _GlobalId)
         : IfcPropertyTemplate(_GlobalId) {}

      virtual std::string className() const { return "IfcSimplePropertyTemplate"; }

      boost::optional<IfcSimplePropertyTemplateTypeEnum> TemplateType; // optional parameter
      boost::optional<IfcLabel> PrimaryMeasureType; // optional parameter
      boost::optional<IfcLabel> SecondaryMeasureType; // optional parameter
      IfcPropertyEnumeration* Enumerators; // optional parameter
      boost::optional<IfcUnit> PrimaryUnit; // optional parameter
      boost::optional<IfcUnit> SecondaryUnit; // optional parameter
      boost::optional<IfcLabel> Expression; // optional parameter
      boost::optional<IfcStateEnum> AccessState; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(IfcSimplePropertyTemplateTypeEnumStringMap, TemplateType);
         w.writeAttributeValue(PrimaryMeasureType);
         w.writeAttributeValue(SecondaryMeasureType);
         w.writeAttributeInstance(Enumerators);
         w.writeAttributeSelect<IfcUnitWriterVisitor>(PrimaryUnit);
         w.writeAttributeSelect<IfcUnitWriterVisitor>(SecondaryUnit);
         w.writeAttributeValue(Expression);
         w.writeAttributeValue(IfcStateEnumStringMap, AccessState);
         w.endEntity();
      }

   };

} // namespace ifc4

