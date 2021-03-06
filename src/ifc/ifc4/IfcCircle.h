// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConic.h"

namespace ifc4
{
   class IfcCircle : public IfcConic
   {
   public:
      virtual ~IfcCircle(){}

      explicit IfcCircle() = default;

      explicit IfcCircle(const IfcAxis2Placement& _Position, const IfcPositiveLengthMeasure& _Radius)
         : IfcConic(_Position), Radius(_Radius) {}

      virtual std::string className() const { return "IfcCircle"; }

      boost::optional<IfcPositiveLengthMeasure> Radius; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(Position);
         w.writeAttributeValue(Radius);
         w.endEntity();
      }

   };

} // namespace ifc4

