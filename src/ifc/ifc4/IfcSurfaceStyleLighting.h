// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"
#include "IfcColourRgb.h"
#include "IfcColourRgb.h"
#include "IfcColourRgb.h"
#include "IfcColourRgb.h"

namespace ifc4
{
   class IfcSurfaceStyleLighting : public IfcPresentationItem
   {
   public:
      virtual ~IfcSurfaceStyleLighting(){}

      explicit IfcSurfaceStyleLighting() = default;

      explicit IfcSurfaceStyleLighting(IfcColourRgb* _DiffuseTransmissionColour, IfcColourRgb* _DiffuseReflectionColour, IfcColourRgb* _TransmissionColour, IfcColourRgb* _ReflectanceColour)
         : IfcPresentationItem(), DiffuseTransmissionColour(_DiffuseTransmissionColour), DiffuseReflectionColour(_DiffuseReflectionColour), TransmissionColour(_TransmissionColour), ReflectanceColour(_ReflectanceColour) {}

      virtual std::string className() const { return "IfcSurfaceStyleLighting"; }

      IfcColourRgb* DiffuseTransmissionColour; // required parameter
      IfcColourRgb* DiffuseReflectionColour; // required parameter
      IfcColourRgb* TransmissionColour; // required parameter
      IfcColourRgb* ReflectanceColour; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(DiffuseTransmissionColour);
         w.writeAttributeInstance(DiffuseReflectionColour);
         w.writeAttributeInstance(TransmissionColour);
         w.writeAttributeInstance(ReflectanceColour);
         w.endEntity();
      }

   };

} // namespace ifc4

