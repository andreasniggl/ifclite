// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcCoordinateReferenceSystem.h"
#include "IfcNamedUnit.h"

namespace ifc4
{
   class IfcProjectedCRS : public IfcCoordinateReferenceSystem
   {
   public:
      virtual ~IfcProjectedCRS(){}

      explicit IfcProjectedCRS() = default;

      explicit IfcProjectedCRS(const IfcLabel& _Name)
         : IfcCoordinateReferenceSystem(_Name) {}

      virtual std::string className() const { return "IfcProjectedCRS"; }

      boost::optional<IfcIdentifier> MapProjection; // optional parameter
      boost::optional<IfcIdentifier> MapZone; // optional parameter
      IfcNamedUnit* MapUnit; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(GeodeticDatum);
         w.writeAttributeValue(VerticalDatum);
         w.writeAttributeValue(MapProjection);
         w.writeAttributeValue(MapZone);
         w.writeAttributeInstance(MapUnit);
         w.endEntity();
      }

   };

} // namespace ifc4

