// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc4
{
   class IfcCoordinateReferenceSystem : public ifc::Entity
   {
   public:
      virtual ~IfcCoordinateReferenceSystem(){}

      explicit IfcCoordinateReferenceSystem() = default;

      explicit IfcCoordinateReferenceSystem(const IfcLabel& _Name)
         : ifc::Entity(), Name(_Name) {}

      virtual std::string className() const { return "IfcCoordinateReferenceSystem"; }

      boost::optional<IfcLabel> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter
      boost::optional<IfcIdentifier> GeodeticDatum; // optional parameter
      boost::optional<IfcIdentifier> VerticalDatum; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(GeodeticDatum);
         w.writeAttributeValue(VerticalDatum);
         w.endEntity();
      }

   };

} // namespace ifc4
