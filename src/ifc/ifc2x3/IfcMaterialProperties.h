// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcMaterial.h"

namespace ifc2x3
{
   class IfcMaterialProperties : public ifc::Entity
   {
   public:
      virtual ~IfcMaterialProperties(){}

      explicit IfcMaterialProperties() = default;

      explicit IfcMaterialProperties(IfcMaterial* _Material)
         : ifc::Entity(), Material(_Material) {}

      virtual std::string className() const { return "IfcMaterialProperties"; }

      IfcMaterial* Material; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Material);
         w.endEntity();
      }

   };

} // namespace ifc2x3

