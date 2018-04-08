// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcReference.h"

namespace ifc4
{
   class IfcReference : public ifc::Entity
   {
   public:
      virtual ~IfcReference(){}

      explicit IfcReference() = default;

      virtual std::string className() const { return "IfcReference"; }

      boost::optional<IfcIdentifier> TypeIdentifier; // optional parameter
      boost::optional<IfcIdentifier> AttributeIdentifier; // optional parameter
      boost::optional<IfcLabel> InstanceName; // optional parameter
      std::vector<IfcInteger> ListPositions; // optional parameter
      IfcReference* InnerReference; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(TypeIdentifier);
         w.writeAttributeValue(AttributeIdentifier);
         w.writeAttributeValue(InstanceName);
         w.writeAttributeValue(ListPositions);
         w.writeAttributeInstance(InnerReference);
         w.endEntity();
      }

   };

} // namespace ifc4
