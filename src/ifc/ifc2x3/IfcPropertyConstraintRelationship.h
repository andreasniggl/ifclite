#ifndef IFC2X3_IFCPROPERTYCONSTRAINTRELATIONSHIP_H_INCLUDED
#define IFC2X3_IFCPROPERTYCONSTRAINTRELATIONSHIP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcConstraint.h"
#include "IfcProperty.h"

namespace ifc2x3
{
   class IfcPropertyConstraintRelationship : public ifc::Entity
   {
   public:
      virtual ~IfcPropertyConstraintRelationship(){}

      IfcPropertyConstraintRelationship() = default;

      IfcPropertyConstraintRelationship(IfcConstraint* _RelatingConstraint, const std::vector<IfcProperty*>& _RelatedProperties)
         : ifc::Entity(), RelatingConstraint(_RelatingConstraint), RelatedProperties(_RelatedProperties) {}

      virtual std::string name() const { return "IfcPropertyConstraintRelationship"; }

      IfcConstraint* RelatingConstraint; // required parameter
      std::vector<IfcProperty*> RelatedProperties; // required parameter
      boost::optional<IfcLabel> Name; // optional parameter
      boost::optional<IfcText> Description; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(RelatingConstraint);
         w.writeAttributeInstanceList(RelatedProperties);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
