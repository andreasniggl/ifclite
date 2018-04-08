#ifndef IFC2X3_IFCPOLYLOOP_H_INCLUDED
#define IFC2X3_IFCPOLYLOOP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcLoop.h"
#include "IfcCartesianPoint.h"

namespace ifc2x3
{
   class IfcPolyLoop : public IfcLoop
   {
   public:
      virtual ~IfcPolyLoop(){}

      IfcPolyLoop() = default;

      IfcPolyLoop(const std::vector<IfcCartesianPoint*>& _Polygon)
         : IfcLoop(), Polygon(_Polygon) {}

      virtual std::string name() const { return "IfcPolyLoop"; }

      std::vector<IfcCartesianPoint*> Polygon; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstanceList(Polygon);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
