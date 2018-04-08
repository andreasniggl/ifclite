#ifndef IFC2X3_IFCFACETEDBREPWITHVOIDS_H_INCLUDED
#define IFC2X3_IFCFACETEDBREPWITHVOIDS_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcManifoldSolidBrep.h"
#include "IfcClosedShell.h"

namespace ifc2x3
{
   class IfcFacetedBrepWithVoids : public IfcManifoldSolidBrep
   {
   public:
      virtual ~IfcFacetedBrepWithVoids(){}

      IfcFacetedBrepWithVoids() = default;

      IfcFacetedBrepWithVoids(IfcClosedShell* _Outer, const std::vector<IfcClosedShell*>& _Voids)
         : IfcManifoldSolidBrep(_Outer), Voids(_Voids) {}

      virtual std::string name() const { return "IfcFacetedBrepWithVoids"; }

      std::vector<IfcClosedShell*> Voids; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Outer);
         w.writeAttributeInstanceList(Voids);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif