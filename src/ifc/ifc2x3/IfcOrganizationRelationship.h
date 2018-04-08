#ifndef IFC2X3_IFCORGANIZATIONRELATIONSHIP_H_INCLUDED
#define IFC2X3_IFCORGANIZATIONRELATIONSHIP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcOrganization.h"
#include "IfcOrganization.h"

namespace ifc2x3
{
   class IfcOrganizationRelationship : public ifc::Entity
   {
   public:
      virtual ~IfcOrganizationRelationship(){}

      IfcOrganizationRelationship() = default;

      IfcOrganizationRelationship(const IfcLabel& _Name, IfcOrganization* _RelatingOrganization, const std::vector<IfcOrganization*>& _RelatedOrganizations)
         : ifc::Entity(), Name(_Name), RelatingOrganization(_RelatingOrganization), RelatedOrganizations(_RelatedOrganizations) {}

      virtual std::string name() const { return "IfcOrganizationRelationship"; }

      boost::optional<IfcLabel> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter
      IfcOrganization* RelatingOrganization; // required parameter
      std::vector<IfcOrganization*> RelatedOrganizations; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeInstance(RelatingOrganization);
         w.writeAttributeInstanceList(RelatedOrganizations);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
