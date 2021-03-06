// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelDefines.h"
#include "IfcObject.h"
#include "IfcTypeObject.h"

namespace ifc4
{
   class IfcRelDefinesByType : public IfcRelDefines
   {
   public:
      virtual ~IfcRelDefinesByType(){}

      explicit IfcRelDefinesByType() = default;

      explicit IfcRelDefinesByType(const IfcGloballyUniqueId& _GlobalId, const std::vector<IfcObject*>& _RelatedObjects, IfcTypeObject* _RelatingType)
         : IfcRelDefines(_GlobalId), RelatedObjects(_RelatedObjects), RelatingType(_RelatingType) {}

      virtual std::string className() const { return "IfcRelDefinesByType"; }

      std::vector<IfcObject*> RelatedObjects; // required parameter
      IfcTypeObject* RelatingType; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedObjects);
         w.writeAttributeInstance(RelatingType);
         w.endEntity();
      }

   };

} // namespace ifc4

