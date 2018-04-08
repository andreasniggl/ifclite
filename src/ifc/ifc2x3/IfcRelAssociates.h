// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"
#include "IfcRoot.h"

namespace ifc2x3
{
   class IfcRelAssociates : public IfcRelationship
   {
   public:
      virtual ~IfcRelAssociates(){}

      explicit IfcRelAssociates() = default;

      explicit IfcRelAssociates(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcRoot*>& _RelatedObjects)
         : IfcRelationship(_GlobalId, _OwnerHistory), RelatedObjects(_RelatedObjects) {}

      virtual std::string className() const { return "IfcRelAssociates"; }

      std::vector<IfcRoot*> RelatedObjects; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedObjects);
         w.endEntity();
      }

   };

} // namespace ifc2x3

