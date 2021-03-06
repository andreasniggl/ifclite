// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcObject.h"

namespace ifc2x3
{
   class IfcGroup : public IfcObject
   {
   public:
      virtual ~IfcGroup(){}

      explicit IfcGroup() = default;

      explicit IfcGroup(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcObject(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcGroup"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

