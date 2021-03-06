// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelAssociates.h"
#include "IfcLibrarySelect.h"

namespace ifc4
{
   class IfcRelAssociatesLibrary : public IfcRelAssociates
   {
   public:
      virtual ~IfcRelAssociatesLibrary(){}

      explicit IfcRelAssociatesLibrary() = default;

      explicit IfcRelAssociatesLibrary(const IfcGloballyUniqueId& _GlobalId, const std::vector< boost::optional<IfcDefinitionSelect> >& _RelatedObjects, const IfcLibrarySelect& _RelatingLibrary)
         : IfcRelAssociates(_GlobalId, _RelatedObjects), RelatingLibrary(_RelatingLibrary) {}

      virtual std::string className() const { return "IfcRelAssociatesLibrary"; }

      boost::optional<IfcLibrarySelect> RelatingLibrary; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcDefinitionSelectWriterVisitor>(RelatedObjects);
         w.writeAttributeSelect<IfcLibrarySelectWriterVisitor>(RelatingLibrary);
         w.endEntity();
      }

   };

} // namespace ifc4

