#ifndef IFC2X3_IFCCARTESIANPOINT_H_INCLUDED
#define IFC2X3_IFCCARTESIANPOINT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPoint.h"

namespace ifc2x3
{
   class IfcCartesianPoint : public IfcPoint
   {
   public:
      virtual ~IfcCartesianPoint(){}

      IfcCartesianPoint() = default;

      IfcCartesianPoint(const std::vector<IfcLengthMeasure>& _Coordinates)
         : IfcPoint(), Coordinates(_Coordinates) {}

      virtual std::string name() const { return "IfcCartesianPoint"; }

      std::vector<IfcLengthMeasure> Coordinates; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueList(Coordinates);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif