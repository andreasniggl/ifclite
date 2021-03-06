// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"
#include "IfcObjectDefinition.h"

namespace ifc4
{
   class IfcRelAssigns : public IfcRelationship
   {
   public:
      virtual ~IfcRelAssigns(){}

      explicit IfcRelAssigns() = default;

      explicit IfcRelAssigns(const IfcGloballyUniqueId& _GlobalId, const std::vector<IfcObjectDefinition*>& _RelatedObjects)
         : IfcRelationship(_GlobalId), RelatedObjects(_RelatedObjects) {}

      virtual std::string className() const { return "IfcRelAssigns"; }

      std::vector<IfcObjectDefinition*> RelatedObjects; // required parameter
      boost::optional<IfcObjectTypeEnum> RelatedObjectsType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedObjects);
         w.writeAttributeValue(IfcObjectTypeEnumStringMap, RelatedObjectsType);
         w.endEntity();
      }

   };

} // namespace ifc4

