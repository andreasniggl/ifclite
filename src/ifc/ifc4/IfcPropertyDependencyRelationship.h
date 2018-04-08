// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcResourceLevelRelationship.h"
#include "IfcProperty.h"
#include "IfcProperty.h"

namespace ifc4
{
   class IfcPropertyDependencyRelationship : public IfcResourceLevelRelationship
   {
   public:
      virtual ~IfcPropertyDependencyRelationship(){}

      explicit IfcPropertyDependencyRelationship() = default;

      explicit IfcPropertyDependencyRelationship(IfcProperty* _DependingProperty, IfcProperty* _DependantProperty)
         : IfcResourceLevelRelationship(), DependingProperty(_DependingProperty), DependantProperty(_DependantProperty) {}

      virtual std::string className() const { return "IfcPropertyDependencyRelationship"; }

      IfcProperty* DependingProperty; // required parameter
      IfcProperty* DependantProperty; // required parameter
      boost::optional<IfcText> Expression; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(DependingProperty);
         w.writeAttributeInstance(DependantProperty);
         w.writeAttributeValue(Expression);
         w.endEntity();
      }

   };

} // namespace ifc4

