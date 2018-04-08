#ifndef IFC2X3_IFCELEMENTARYSURFACE_H_INCLUDED
#define IFC2X3_IFCELEMENTARYSURFACE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcSurface.h"
#include "IfcAxis2Placement3D.h"

namespace ifc2x3
{
   class IfcElementarySurface : public IfcSurface
   {
   public:
      virtual ~IfcElementarySurface(){}

      IfcElementarySurface() = default;

      IfcElementarySurface(IfcAxis2Placement3D* _Position)
         : IfcSurface(), Position(_Position) {}

      virtual std::string name() const { return "IfcElementarySurface"; }

      IfcAxis2Placement3D* Position; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Position);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
