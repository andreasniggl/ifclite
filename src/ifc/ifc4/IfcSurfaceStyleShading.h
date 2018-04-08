// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"
#include "IfcColourRgb.h"

namespace ifc4
{
   class IfcSurfaceStyleShading : public IfcPresentationItem
   {
   public:
      virtual ~IfcSurfaceStyleShading(){}

      explicit IfcSurfaceStyleShading() = default;

      explicit IfcSurfaceStyleShading(IfcColourRgb* _SurfaceColour)
         : IfcPresentationItem(), SurfaceColour(_SurfaceColour) {}

      virtual std::string className() const { return "IfcSurfaceStyleShading"; }

      IfcColourRgb* SurfaceColour; // required parameter
      boost::optional<IfcNormalisedRatioMeasure> Transparency; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SurfaceColour);
         w.writeAttributeValue(Transparency);
         w.endEntity();
      }

   };

} // namespace ifc4
