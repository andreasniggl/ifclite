#ifndef IFC2X3_IFCANNOTATIONSURFACE_H_INCLUDED
#define IFC2X3_IFCANNOTATIONSURFACE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

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

      IfcAnnotationSurface() = default;

      IfcAnnotationSurface(IfcGeometricRepresentationItem* _Item)
         : IfcGeometricRepresentationItem(), Item(_Item) {}

      virtual std::string name() const { return "IfcAnnotationSurface"; }

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

#endif
