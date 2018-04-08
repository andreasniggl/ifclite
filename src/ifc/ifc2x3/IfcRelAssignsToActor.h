// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelAssigns.h"
#include "IfcActor.h"
#include "IfcActorRole.h"

namespace ifc2x3
{
   class IfcRelAssignsToActor : public IfcRelAssigns
   {
   public:
      virtual ~IfcRelAssignsToActor(){}

      explicit IfcRelAssignsToActor() = default;

      explicit IfcRelAssignsToActor(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObjectDefinition*>& _RelatedObjects, IfcActor* _RelatingActor)
         : IfcRelAssigns(_GlobalId, _OwnerHistory, _RelatedObjects), RelatingActor(_RelatingActor) {}

      virtual std::string className() const { return "IfcRelAssignsToActor"; }

      IfcActor* RelatingActor; // required parameter
      IfcActorRole* ActingRole; // optional parameter

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
         w.writeAttributeInstance(RelatingActor);
         w.writeAttributeInstance(ActingRole);
         w.endEntity();
      }

   };

} // namespace ifc2x3

