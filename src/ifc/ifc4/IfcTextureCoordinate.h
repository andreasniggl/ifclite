// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"
#include "IfcSurfaceTexture.h"

namespace ifc4
{
   class IfcTextureCoordinate : public IfcPresentationItem
   {
   public:
      virtual ~IfcTextureCoordinate(){}

      explicit IfcTextureCoordinate() = default;

      explicit IfcTextureCoordinate(const std::vector<IfcSurfaceTexture*>& _Maps)
         : IfcPresentationItem(), Maps(_Maps) {}

      virtual std::string className() const { return "IfcTextureCoordinate"; }

      std::vector<IfcSurfaceTexture*> Maps; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Maps);
         w.endEntity();
      }

   };

} // namespace ifc4

