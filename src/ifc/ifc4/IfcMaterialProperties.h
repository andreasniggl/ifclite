// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcExtendedProperties.h"
#include "IfcMaterialDefinition.h"

namespace ifc4
{
   class IfcMaterialProperties : public IfcExtendedProperties
   {
   public:
      virtual ~IfcMaterialProperties(){}

      explicit IfcMaterialProperties() = default;

      explicit IfcMaterialProperties(const std::vector<IfcProperty*>& _Properties, IfcMaterialDefinition* _Material)
         : IfcExtendedProperties(_Properties), Material(_Material) {}

      virtual std::string className() const { return "IfcMaterialProperties"; }

      IfcMaterialDefinition* Material; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(Properties);
         w.writeAttributeInstance(Material);
         w.endEntity();
      }

   };

} // namespace ifc4

