// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralItem.h"

namespace ifc4
{
   class IfcStructuralMember : public IfcStructuralItem
   {
   public:
      virtual ~IfcStructuralMember(){}

      explicit IfcStructuralMember() = default;

      explicit IfcStructuralMember(const IfcGloballyUniqueId& _GlobalId)
         : IfcStructuralItem(_GlobalId) {}

      virtual std::string className() const { return "IfcStructuralMember"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.endEntity();
      }

   };

} // namespace ifc4

