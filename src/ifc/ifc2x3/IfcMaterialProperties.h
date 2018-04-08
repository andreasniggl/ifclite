#ifndef IFC2X3_IFCMATERIALPROPERTIES_H_INCLUDED
#define IFC2X3_IFCMATERIALPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcMaterial.h"

namespace ifc2x3
{
   class IfcMaterialProperties : public ifc::Entity
   {
   public:
      virtual ~IfcMaterialProperties(){}

      IfcMaterialProperties() = default;

      IfcMaterialProperties(IfcMaterial* _Material)
         : ifc::Entity(), Material(_Material) {}

      virtual std::string name() const { return "IfcMaterialProperties"; }

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

#endif