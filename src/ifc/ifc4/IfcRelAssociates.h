// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"
#include "IfcDefinitionSelect.h"

namespace ifc4
{
   class IfcRelAssociates : public IfcRelationship
   {
   public:
      virtual ~IfcRelAssociates(){}

      explicit IfcRelAssociates() = default;

      explicit IfcRelAssociates(const IfcGloballyUniqueId& _GlobalId, const std::vector< boost::optional<IfcDefinitionSelect> >& _RelatedObjects)
         : IfcRelationship(_GlobalId), RelatedObjects(_RelatedObjects) {}

      virtual std::string className() const { return "IfcRelAssociates"; }

      std::vector< boost::optional<IfcDefinitionSelect> > RelatedObjects; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcDefinitionSelectWriterVisitor>(RelatedObjects);
         w.endEntity();
      }

   };

} // namespace ifc4

