// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPlanarExtent.h"
#include "IfcAxis2Placement.h"

namespace ifc4
{
   class IfcPlanarBox : public IfcPlanarExtent
   {
   public:
      virtual ~IfcPlanarBox(){}

      explicit IfcPlanarBox() = default;

      explicit IfcPlanarBox(const IfcLengthMeasure& _SizeInX, const IfcLengthMeasure& _SizeInY, const IfcAxis2Placement& _Placement)
         : IfcPlanarExtent(_SizeInX, _SizeInY), Placement(_Placement) {}

      virtual std::string className() const { return "IfcPlanarBox"; }

      boost::optional<IfcAxis2Placement> Placement; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(SizeInX);
         w.writeAttributeValue(SizeInY);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(Placement);
         w.endEntity();
      }

   };

} // namespace ifc4

