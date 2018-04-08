// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcConstraint.h"
#include "IfcClassificationNotationSelect.h"

namespace ifc2x3
{
   class IfcConstraintClassificationRelationship : public ifc::Entity
   {
   public:
      virtual ~IfcConstraintClassificationRelationship(){}

      explicit IfcConstraintClassificationRelationship() = default;

      explicit IfcConstraintClassificationRelationship(IfcConstraint* _ClassifiedConstraint, const std::vector< boost::optional<IfcClassificationNotationSelect> >& _RelatedClassifications)
         : ifc::Entity(), ClassifiedConstraint(_ClassifiedConstraint), RelatedClassifications(_RelatedClassifications) {}

      virtual std::string className() const { return "IfcConstraintClassificationRelationship"; }

      IfcConstraint* ClassifiedConstraint; // required parameter
      std::vector< boost::optional<IfcClassificationNotationSelect> > RelatedClassifications; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ClassifiedConstraint);
         w.writeAttributeSelect<IfcClassificationNotationSelectWriterVisitor>(RelatedClassifications);
         w.endEntity();
      }

   };

} // namespace ifc2x3

