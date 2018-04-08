// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralCurveAction.h"

namespace ifc4
{
   class IfcStructuralLinearAction : public IfcStructuralCurveAction
   {
   public:
      virtual ~IfcStructuralLinearAction(){}

      explicit IfcStructuralLinearAction() = default;

      explicit IfcStructuralLinearAction(const IfcGloballyUniqueId& _GlobalId, IfcStructuralLoad* _AppliedLoad, const IfcGlobalOrLocalEnum& _GlobalOrLocal, const IfcStructuralCurveActivityTypeEnum& _PredefinedType)
         : IfcStructuralCurveAction(_GlobalId, _AppliedLoad, _GlobalOrLocal, _PredefinedType) {}

      virtual std::string className() const { return "IfcStructuralLinearAction"; }


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
         w.writeAttributeValue(IfcProjectedOrTrueLengthEnumStringMap, ProjectedOrTrue);
         w.writeAttributeValue(IfcStructuralCurveActivityTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

