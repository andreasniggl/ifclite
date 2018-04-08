#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONITEM_H_INCLUDED
#define IFC2X3_IFCGEOMETRICREPRESENTATIONITEM_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRepresentationItem.h"

namespace ifc2x3
{
   class IfcGeometricRepresentationItem : public IfcRepresentationItem
   {
   public:
      virtual ~IfcGeometricRepresentationItem(){}

      IfcGeometricRepresentationItem() = default;

      virtual std::string name() const { return "IfcGeometricRepresentationItem"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif