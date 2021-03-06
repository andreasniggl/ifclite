// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConnectionPointGeometry.h"

namespace ifc4
{
   class IfcConnectionPointEccentricity : public IfcConnectionPointGeometry
   {
   public:
      virtual ~IfcConnectionPointEccentricity(){}

      explicit IfcConnectionPointEccentricity() = default;

      explicit IfcConnectionPointEccentricity(const IfcPointOrVertexPoint& _PointOnRelatingElement)
         : IfcConnectionPointGeometry(_PointOnRelatingElement) {}

      virtual std::string className() const { return "IfcConnectionPointEccentricity"; }

      boost::optional<IfcLengthMeasure> EccentricityInX; // optional parameter
      boost::optional<IfcLengthMeasure> EccentricityInY; // optional parameter
      boost::optional<IfcLengthMeasure> EccentricityInZ; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcPointOrVertexPointWriterVisitor>(PointOnRelatingElement);
         w.writeAttributeSelect<IfcPointOrVertexPointWriterVisitor>(PointOnRelatedElement);
         w.writeAttributeValue(EccentricityInX);
         w.writeAttributeValue(EccentricityInY);
         w.writeAttributeValue(EccentricityInZ);
         w.endEntity();
      }

   };

} // namespace ifc4

