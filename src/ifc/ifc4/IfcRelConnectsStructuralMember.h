// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelConnects.h"
#include "IfcStructuralMember.h"
#include "IfcStructuralConnection.h"
#include "IfcBoundaryCondition.h"
#include "IfcStructuralConnectionCondition.h"
#include "IfcAxis2Placement3D.h"

namespace ifc4
{
   class IfcRelConnectsStructuralMember : public IfcRelConnects
   {
   public:
      virtual ~IfcRelConnectsStructuralMember(){}

      explicit IfcRelConnectsStructuralMember() = default;

      explicit IfcRelConnectsStructuralMember(const IfcGloballyUniqueId& _GlobalId, IfcStructuralMember* _RelatingStructuralMember, IfcStructuralConnection* _RelatedStructuralConnection)
         : IfcRelConnects(_GlobalId), RelatingStructuralMember(_RelatingStructuralMember), RelatedStructuralConnection(_RelatedStructuralConnection) {}

      virtual std::string className() const { return "IfcRelConnectsStructuralMember"; }

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
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingStructuralMember);
         w.writeAttributeInstance(RelatedStructuralConnection);
         w.writeAttributeInstance(AppliedCondition);
         w.writeAttributeInstance(AdditionalConditions);
         w.writeAttributeValue(SupportedLength);
         w.writeAttributeInstance(ConditionCoordinateSystem);
         w.endEntity();
      }

   };

} // namespace ifc4

