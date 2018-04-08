#ifndef IFC2X3_IFCSTRUCTURALRESULTGROUP_H_INCLUDED
#define IFC2X3_IFCSTRUCTURALRESULTGROUP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"
#include "IfcStructuralLoadGroup.h"

namespace ifc2x3
{
   class IfcStructuralResultGroup : public IfcGroup
   {
   public:
      virtual ~IfcStructuralResultGroup(){}

      IfcStructuralResultGroup() = default;

      IfcStructuralResultGroup(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcAnalysisTheoryTypeEnum& _TheoryType, const bool& _IsLinear)
         : IfcGroup(_GlobalId, _OwnerHistory), TheoryType(_TheoryType), IsLinear(_IsLinear) {}

      virtual std::string name() const { return "IfcStructuralResultGroup"; }

      boost::optional<IfcAnalysisTheoryTypeEnum> TheoryType; // required parameter
      IfcStructuralLoadGroup* ResultForLoadGroup; // optional parameter
      boost::optional<bool> IsLinear; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeValueEnumeration(IfcAnalysisTheoryTypeEnumStringMap, TheoryType);
         w.writeAttributeInstance(ResultForLoadGroup);
         w.writeAttributeValueScalar(IsLinear);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
