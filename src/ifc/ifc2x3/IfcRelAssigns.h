// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"
#include "IfcObjectDefinition.h"

namespace ifc2x3
{
   class IfcRelAssigns : public IfcRelationship
   {
   public:
      virtual ~IfcRelAssigns(){}

      explicit IfcRelAssigns() = default;

      explicit IfcRelAssigns(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObjectDefinition*>& _RelatedObjects)
         : IfcRelationship(_GlobalId, _OwnerHistory), RelatedObjects(_RelatedObjects) {}

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

} // namespace ifc2x3

