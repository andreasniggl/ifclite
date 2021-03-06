// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc4
{
   class IfcResourceLevelRelationship : public ifc::Entity
   {
   public:
      virtual ~IfcResourceLevelRelationship(){}

      explicit IfcResourceLevelRelationship() = default;

      virtual std::string className() const { return "IfcResourceLevelRelationship"; }

      boost::optional<IfcLabel> Name; // optional parameter
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

} // namespace ifc4

