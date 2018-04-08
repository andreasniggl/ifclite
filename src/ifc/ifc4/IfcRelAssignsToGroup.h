// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelAssigns.h"
#include "IfcGroup.h"

namespace ifc4
{
   class IfcRelAssignsToGroup : public IfcRelAssigns
   {
   public:
      virtual ~IfcRelAssignsToGroup(){}

      explicit IfcRelAssignsToGroup() = default;

      explicit IfcRelAssignsToGroup(const IfcGloballyUniqueId& _GlobalId, const std::vector<IfcObjectDefinition*>& _RelatedObjects, IfcGroup* _RelatingGroup)
         : IfcRelAssigns(_GlobalId, _RelatedObjects), RelatingGroup(_RelatingGroup) {}

      virtual std::string className() const { return "IfcRelAssignsToGroup"; }

      IfcGroup* RelatingGroup; // required parameter

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
         w.writeAttributeInstance(RelatingGroup);
         w.endEntity();
      }

   };

} // namespace ifc4

