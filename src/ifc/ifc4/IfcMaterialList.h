// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcMaterial.h"

namespace ifc4
{
   class IfcMaterialList : public ifc::Entity
   {
   public:
      virtual ~IfcMaterialList(){}

      explicit IfcMaterialList() = default;

      explicit IfcMaterialList(const std::vector<IfcMaterial*>& _Materials)
         : ifc::Entity(), Materials(_Materials) {}

      virtual std::string className() const { return "IfcMaterialList"; }

      std::vector<IfcMaterial*> Materials; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Materials);
         w.endEntity();
      }

   };

} // namespace ifc4
