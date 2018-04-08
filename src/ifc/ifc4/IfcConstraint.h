// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcActorSelect.h"

namespace ifc4
{
   class IfcConstraint : public ifc::Entity
   {
   public:
      virtual ~IfcConstraint(){}

      explicit IfcConstraint() = default;

      explicit IfcConstraint(const IfcLabel& _Name, const IfcConstraintEnum& _ConstraintGrade)
         : ifc::Entity(), Name(_Name), ConstraintGrade(_ConstraintGrade) {}

      virtual std::string className() const { return "IfcConstraint"; }

      boost::optional<IfcLabel> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter
      boost::optional<IfcConstraintEnum> ConstraintGrade; // required parameter
      boost::optional<IfcLabel> ConstraintSource; // optional parameter
      boost::optional<IfcActorSelect> CreatingActor; // optional parameter
      boost::optional<IfcDateTime> CreationTime; // optional parameter
      boost::optional<IfcLabel> UserDefinedGrade; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(IfcConstraintEnumStringMap, ConstraintGrade);
         w.writeAttributeValue(ConstraintSource);
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(CreatingActor);
         w.writeAttributeValue(CreationTime);
         w.writeAttributeValue(UserDefinedGrade);
         w.endEntity();
      }

   };

} // namespace ifc4

