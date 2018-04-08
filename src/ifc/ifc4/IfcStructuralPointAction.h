// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralAction.h"

namespace ifc4
{
   class IfcStructuralPointAction : public IfcStructuralAction
   {
   public:
      virtual ~IfcStructuralPointAction(){}

      explicit IfcStructuralPointAction() = default;

      explicit IfcStructuralPointAction(const IfcGloballyUniqueId& _GlobalId, IfcStructuralLoad* _AppliedLoad, const IfcGlobalOrLocalEnum& _GlobalOrLocal)
         : IfcStructuralAction(_GlobalId, _AppliedLoad, _GlobalOrLocal) {}

      virtual std::string className() const { return "IfcStructuralPointAction"; }


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
         w.writeAttributeInstance(AppliedLoad);
         w.writeAttributeValue(IfcGlobalOrLocalEnumStringMap, GlobalOrLocal);
         w.writeAttributeValue(DestabilizingLoad);
         w.endEntity();
      }

   };

} // namespace ifc4
