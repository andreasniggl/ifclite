// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSurfaceTexture.h"

namespace ifc2x3
{
   class IfcImageTexture : public IfcSurfaceTexture
   {
   public:
      virtual ~IfcImageTexture(){}

      explicit IfcImageTexture() = default;

      explicit IfcImageTexture(const bool& _RepeatS, const bool& _RepeatT, const IfcSurfaceTextureEnum& _TextureType, const IfcIdentifier& _UrlReference)
         : IfcSurfaceTexture(_RepeatS, _RepeatT, _TextureType), UrlReference(_UrlReference) {}

      virtual std::string className() const { return "IfcImageTexture"; }

      boost::optional<IfcIdentifier> UrlReference; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(RepeatS);
         w.writeAttributeValue(RepeatT);
         w.writeAttributeValue(IfcSurfaceTextureEnumStringMap, TextureType);
         w.writeAttributeInstance(TextureTransform);
         w.writeAttributeValue(UrlReference);
         w.endEntity();
      }

   };

} // namespace ifc2x3

