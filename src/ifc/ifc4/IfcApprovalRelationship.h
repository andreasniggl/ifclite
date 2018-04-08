// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcResourceLevelRelationship.h"
#include "IfcApproval.h"
#include "IfcApproval.h"

namespace ifc4
{
   class IfcApprovalRelationship : public IfcResourceLevelRelationship
   {
   public:
      virtual ~IfcApprovalRelationship(){}

      explicit IfcApprovalRelationship() = default;

      explicit IfcApprovalRelationship(IfcApproval* _RelatingApproval, const std::vector<IfcApproval*>& _RelatedApprovals)
         : IfcResourceLevelRelationship(), RelatingApproval(_RelatingApproval), RelatedApprovals(_RelatedApprovals) {}

      virtual std::string className() const { return "IfcApprovalRelationship"; }

      IfcApproval* RelatingApproval; // required parameter
      std::vector<IfcApproval*> RelatedApprovals; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingApproval);
         w.writeAttributeInstance(RelatedApprovals);
         w.endEntity();
      }

   };

} // namespace ifc4

