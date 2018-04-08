// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcResourceLevelRelationship.h"
#include "IfcOrganization.h"
#include "IfcOrganization.h"

namespace ifc4
{
   class IfcOrganizationRelationship : public IfcResourceLevelRelationship
   {
   public:
      virtual ~IfcOrganizationRelationship(){}

      explicit IfcOrganizationRelationship() = default;

      explicit IfcOrganizationRelationship(IfcOrganization* _RelatingOrganization, const std::vector<IfcOrganization*>& _RelatedOrganizations)
         : IfcResourceLevelRelationship(), RelatingOrganization(_RelatingOrganization), RelatedOrganizations(_RelatedOrganizations) {}

      virtual std::string className() const { return "IfcOrganizationRelationship"; }

      IfcOrganization* RelatingOrganization; // required parameter
      std::vector<IfcOrganization*> RelatedOrganizations; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingOrganization);
         w.writeAttributeInstance(RelatedOrganizations);
         w.endEntity();
      }

   };

} // namespace ifc4
