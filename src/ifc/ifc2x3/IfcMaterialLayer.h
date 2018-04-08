#ifndef IFC2X3_IFCMATERIALLAYER_H_INCLUDED
#define IFC2X3_IFCMATERIALLAYER_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcMaterial.h"

namespace ifc2x3
{
   class IfcMaterialLayer : public ifc::Entity
   {
   public:
      virtual ~IfcMaterialLayer(){}

      IfcMaterialLayer() = default;

      IfcMaterialLayer(const IfcPositiveLengthMeasure& _LayerThickness)
         : ifc::Entity(), LayerThickness(_LayerThickness) {}

      virtual std::string name() const { return "IfcMaterialLayer"; }

      IfcMaterial* Material; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> LayerThickness; // required parameter
      boost::optional<IfcLogical> IsVentilated; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Material);
         w.writeAttributeValueScalar(LayerThickness);
         w.writeAttributeValueScalar(IsVentilated);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
