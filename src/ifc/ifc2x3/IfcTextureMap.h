// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTextureCoordinate.h"
#include "IfcVertexBasedTextureMap.h"

namespace ifc2x3
{
   class IfcTextureMap : public IfcTextureCoordinate
   {
   public:
      virtual ~IfcTextureMap(){}

      explicit IfcTextureMap() = default;

      explicit IfcTextureMap(const std::vector<IfcVertexBasedTextureMap*>& _TextureMaps)
         : IfcTextureCoordinate(), TextureMaps(_TextureMaps) {}

      virtual std::string className() const { return "IfcTextureMap"; }

      std::vector<IfcVertexBasedTextureMap*> TextureMaps; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(TextureMaps);
         w.endEntity();
      }

   };

} // namespace ifc2x3

