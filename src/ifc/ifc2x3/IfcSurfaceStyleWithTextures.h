#ifndef IFC2X3_IFCSURFACESTYLEWITHTEXTURES_H_INCLUDED
#define IFC2X3_IFCSURFACESTYLEWITHTEXTURES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcSurfaceTexture.h"

namespace ifc2x3
{
   class IfcSurfaceStyleWithTextures : public ifc::Entity
   {
   public:
      virtual ~IfcSurfaceStyleWithTextures(){}

      IfcSurfaceStyleWithTextures() = default;

      IfcSurfaceStyleWithTextures(const std::vector<IfcSurfaceTexture*>& _Textures)
         : ifc::Entity(), Textures(_Textures) {}

      virtual std::string name() const { return "IfcSurfaceStyleWithTextures"; }

      std::vector<IfcSurfaceTexture*> Textures; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstanceList(Textures);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif