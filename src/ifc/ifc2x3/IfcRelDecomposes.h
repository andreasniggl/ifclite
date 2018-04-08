// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"
#include "IfcObjectDefinition.h"
#include "IfcObjectDefinition.h"

namespace ifc2x3
{
   class IfcRelDecomposes : public IfcRelationship
   {
   public:
      virtual ~IfcRelDecomposes(){}

      explicit IfcRelDecomposes() = default;

      explicit IfcRelDecomposes(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, IfcObjectDefinition* _RelatingObject, const std::vector<IfcObjectDefinition*>& _RelatedObjects)
         : IfcRelationship(_GlobalId, _OwnerHistory), RelatingObject(_RelatingObject), RelatedObjects(_RelatedObjects) {}

      virtual std::string className() const { return "IfcRelDecomposes"; }

      IfcObjectDefinition* RelatingObject; // required parameter
      std::vector<IfcObjectDefinition*> RelatedObjects; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingObject);
         w.writeAttributeInstance(RelatedObjects);
         w.endEntity();
      }

   };

} // namespace ifc2x3

