// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcTextureCoordinate.h"

namespace ifc2x3
{
   class IfcAnnotationSurface : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcAnnotationSurface(){}

      explicit IfcAnnotationSurface() = default;

      explicit IfcAnnotationSurface(IfcGeometricRepresentationItem* _Item)
         : IfcGeometricRepresentationItem(), Item(_Item) {}

      virtual std::string className() const { return "IfcAnnotationSurface"; }

      IfcGeometricRepresentationItem* Item; // required parameter
      IfcTextureCoordinate* TextureCoordinates; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Item);
         w.writeAttributeInstance(TextureCoordinates);
         w.endEntity();
      }

   };

} // namespace ifc2x3

