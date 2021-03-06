// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc4
{
   class IfcExternalReference : public ifc::Entity
   {
   public:
      virtual ~IfcExternalReference(){}

      explicit IfcExternalReference() = default;

      virtual std::string className() const { return "IfcExternalReference"; }

      boost::optional<IfcURIReference> Location; // optional parameter
      boost::optional<IfcIdentifier> Identification; // optional parameter
      boost::optional<IfcLabel> Name; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Location);
         w.writeAttributeValue(Identification);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc4

