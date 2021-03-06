// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcMaterialUsageDefinition.h"
#include "IfcMaterialLayerSet.h"

namespace ifc4
{
   class IfcMaterialLayerSetUsage : public IfcMaterialUsageDefinition
   {
   public:
      virtual ~IfcMaterialLayerSetUsage(){}

      explicit IfcMaterialLayerSetUsage() = default;

      explicit IfcMaterialLayerSetUsage(IfcMaterialLayerSet* _ForLayerSet, const IfcLayerSetDirectionEnum& _LayerSetDirection, const IfcDirectionSenseEnum& _DirectionSense, const IfcLengthMeasure& _OffsetFromReferenceLine)
         : IfcMaterialUsageDefinition(), ForLayerSet(_ForLayerSet), LayerSetDirection(_LayerSetDirection), DirectionSense(_DirectionSense), OffsetFromReferenceLine(_OffsetFromReferenceLine) {}

      virtual std::string className() const { return "IfcMaterialLayerSetUsage"; }

      IfcMaterialLayerSet* ForLayerSet; // required parameter
      boost::optional<IfcLayerSetDirectionEnum> LayerSetDirection; // required parameter
      boost::optional<IfcDirectionSenseEnum> DirectionSense; // required parameter
      boost::optional<IfcLengthMeasure> OffsetFromReferenceLine; // required parameter
      boost::optional<IfcPositiveLengthMeasure> ReferenceExtent; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ForLayerSet);
         w.writeAttributeValue(IfcLayerSetDirectionEnumStringMap, LayerSetDirection);
         w.writeAttributeValue(IfcDirectionSenseEnumStringMap, DirectionSense);
         w.writeAttributeValue(OffsetFromReferenceLine);
         w.writeAttributeValue(ReferenceExtent);
         w.endEntity();
      }

   };

} // namespace ifc4

