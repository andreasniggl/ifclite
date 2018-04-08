#ifndef IFC2X3_IFCBOUNDEDSURFACE_H_INCLUDED
#define IFC2X3_IFCBOUNDEDSURFACE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcSurface.h"

namespace ifc2x3
{
   class IfcBoundedSurface : public IfcSurface
   {
   public:
      virtual ~IfcBoundedSurface(){}

      IfcBoundedSurface() = default;

      virtual std::string name() const { return "IfcBoundedSurface"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
