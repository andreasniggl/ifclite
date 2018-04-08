#ifndef IFC2X3_IFCEXTRUDEDAREASOLID_H_INCLUDED
#define IFC2X3_IFCEXTRUDEDAREASOLID_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcSweptAreaSolid.h"
#include "IfcDirection.h"

namespace ifc2x3
{
   class IfcExtrudedAreaSolid : public IfcSweptAreaSolid
   {
   public:
      virtual ~IfcExtrudedAreaSolid(){}

      IfcExtrudedAreaSolid() = default;

      IfcExtrudedAreaSolid(IfcProfileDef* _SweptArea, IfcAxis2Placement3D* _Position, IfcDirection* _ExtrudedDirection, const IfcPositiveLengthMeasure& _Depth)
         : IfcSweptAreaSolid(_SweptArea, _Position), ExtrudedDirection(_ExtrudedDirection), Depth(_Depth) {}

      virtual std::string name() const { return "IfcExtrudedAreaSolid"; }

      IfcDirection* ExtrudedDirection; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Depth; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SweptArea);
         w.writeAttributeInstance(Position);
         w.writeAttributeInstance(ExtrudedDirection);
         w.writeAttributeValueScalar(Depth);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif