#ifndef IFC2X3_IFCSTRUCTURALREACTION_H_INCLUDED
#define IFC2X3_IFCSTRUCTURALREACTION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcStructuralActivity.h"

namespace ifc2x3
{
   class IfcStructuralReaction : public IfcStructuralActivity
   {
   public:
      virtual ~IfcStructuralReaction(){}

      IfcStructuralReaction() = default;

      IfcStructuralReaction(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, IfcStructuralLoad* _AppliedLoad, const IfcGlobalOrLocalEnum& _GlobalOrLocal)
         : IfcStructuralActivity(_GlobalId, _OwnerHistory, _AppliedLoad, _GlobalOrLocal) {}

      virtual std::string name() const { return "IfcStructuralReaction"; }


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
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
