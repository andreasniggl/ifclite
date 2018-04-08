#ifndef IFC2X3_IFCCONNECTIONGEOMETRY_H_INCLUDED
#define IFC2X3_IFCCONNECTIONGEOMETRY_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcConnectionGeometry : public ifc::Entity
   {
   public:
      virtual ~IfcConnectionGeometry(){}

      IfcConnectionGeometry() = default;

      virtual std::string name() const { return "IfcConnectionGeometry"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif