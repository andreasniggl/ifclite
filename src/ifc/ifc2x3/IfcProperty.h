// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcProperty : public ifc::Entity
   {
   public:
      virtual ~IfcProperty(){}

      explicit IfcProperty() = default;

      explicit IfcProperty(const IfcIdentifier& _Name)
         : ifc::Entity(), Name(_Name) {}

      virtual std::string className() const { return "IfcProperty"; }

      boost::optional<IfcIdentifier> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.endEntity();
      }

   };

} // namespace ifc2x3

