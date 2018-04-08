#ifndef IFC2X3_IFCGENERALMATERIALPROPERTIES_H_INCLUDED
#define IFC2X3_IFCGENERALMATERIALPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcMaterialProperties.h"

namespace ifc2x3
{
   class IfcGeneralMaterialProperties : public IfcMaterialProperties
   {
   public:
      virtual ~IfcGeneralMaterialProperties(){}

      IfcGeneralMaterialProperties() = default;

      IfcGeneralMaterialProperties(IfcMaterial* _Material)
         : IfcMaterialProperties(_Material) {}

      virtual std::string name() const { return "IfcGeneralMaterialProperties"; }

      boost::optional<IfcMolecularWeightMeasure> MolecularWeight; // optional parameter
      boost::optional<IfcNormalisedRatioMeasure> Porosity; // optional parameter
      boost::optional<IfcMassDensityMeasure> MassDensity; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Material);
         w.writeAttributeValueScalar(MolecularWeight);
         w.writeAttributeValueScalar(Porosity);
         w.writeAttributeValueScalar(MassDensity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
