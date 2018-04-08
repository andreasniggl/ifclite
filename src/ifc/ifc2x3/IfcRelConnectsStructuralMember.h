#ifndef IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H_INCLUDED
#define IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelConnects.h"
#include "IfcStructuralMember.h"
#include "IfcStructuralConnection.h"
#include "IfcBoundaryCondition.h"
#include "IfcStructuralConnectionCondition.h"
#include "IfcAxis2Placement3D.h"

namespace ifc2x3
{
   class IfcRelConnectsStructuralMember : public IfcRelConnects
   {
   public:
      virtual ~IfcRelConnectsStructuralMember(){}

      IfcRelConnectsStructuralMember() = default;

      IfcRelConnectsStructuralMember(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, IfcStructuralMember* _RelatingStructuralMember, IfcStructuralConnection* _RelatedStructuralConnection)
         : IfcRelConnects(_GlobalId, _OwnerHistory), RelatingStructuralMember(_RelatingStructuralMember), RelatedStructuralConnection(_RelatedStructuralConnection) {}

      virtual std::string name() const { return "IfcRelConnectsStructuralMember"; }

      IfcStructuralMember* RelatingStructuralMember; // required parameter
      IfcStructuralConnection* RelatedStructuralConnection; // required parameter
      IfcBoundaryCondition* AppliedCondition; // optional parameter
      IfcStructuralConnectionCondition* AdditionalConditions; // optional parameter
      boost::optional<IfcLengthMeasure> SupportedLength; // optional parameter
      IfcAxis2Placement3D* ConditionCoordinateSystem; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeInstance(RelatingStructuralMember);
         w.writeAttributeInstance(RelatedStructuralConnection);
         w.writeAttributeInstance(AppliedCondition);
         w.writeAttributeInstance(AdditionalConditions);
         w.writeAttributeValueScalar(SupportedLength);
         w.writeAttributeInstance(ConditionCoordinateSystem);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
