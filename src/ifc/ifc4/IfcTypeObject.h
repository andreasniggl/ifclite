// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcObjectDefinition.h"
#include "IfcPropertySetDefinition.h"

namespace ifc4
{
   class IfcTypeObject : public IfcObjectDefinition
   {
   public:
      virtual ~IfcTypeObject(){}

      explicit IfcTypeObject() = default;

      explicit IfcTypeObject(const IfcGloballyUniqueId& _GlobalId)
         : IfcObjectDefinition(_GlobalId) {}

      virtual std::string className() const { return "IfcTypeObject"; }

      boost::optional<IfcIdentifier> ApplicableOccurrence; // optional parameter
      std::vector<IfcPropertySetDefinition*> HasPropertySets; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ApplicableOccurrence);
         w.writeAttributeInstance(HasPropertySets);
         w.endEntity();
      }

   };

} // namespace ifc4

