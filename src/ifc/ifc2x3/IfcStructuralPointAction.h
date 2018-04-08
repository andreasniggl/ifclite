#ifndef IFC2X3_IFCSTRUCTURALPOINTACTION_H_INCLUDED
#define IFC2X3_IFCSTRUCTURALPOINTACTION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcStructuralAction.h"

namespace ifc2x3
{
   class IfcStructuralPointAction : public IfcStructuralAction
   {
   public:
      virtual ~IfcStructuralPointAction(){}

      IfcStructuralPointAction() = default;

      IfcStructuralPointAction(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, IfcStructuralLoad* _AppliedLoad, const IfcGlobalOrLocalEnum& _GlobalOrLocal, const bool& _DestabilizingLoad)
         : IfcStructuralAction(_GlobalId, _OwnerHistory, _AppliedLoad, _GlobalOrLocal, _DestabilizingLoad) {}

      virtual std::string name() const { return "IfcStructuralPointAction"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeInstance(AppliedLoad);
         w.writeAttributeValueEnumeration(IfcGlobalOrLocalEnumStringMap, GlobalOrLocal);
         w.writeAttributeValueScalar(DestabilizingLoad);
         w.writeAttributeInstance(CausedBy);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
