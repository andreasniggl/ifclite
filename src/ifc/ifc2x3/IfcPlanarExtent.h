// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"

namespace ifc2x3
{
   class IfcPlanarExtent : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcPlanarExtent(){}

      explicit IfcPlanarExtent() = default;

      explicit IfcPlanarExtent(const IfcLengthMeasure& _SizeInX, const IfcLengthMeasure& _SizeInY)
         : IfcGeometricRepresentationItem(), SizeInX(_SizeInX), SizeInY(_SizeInY) {}

      virtual std::string className() const { return "IfcPlanarExtent"; }

      boost::optional<IfcLengthMeasure> SizeInX; // required parameter
      boost::optional<IfcLengthMeasure> SizeInY; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(SizeInX);
         w.writeAttributeValue(SizeInY);
         w.endEntity();
      }

   };

} // namespace ifc2x3

