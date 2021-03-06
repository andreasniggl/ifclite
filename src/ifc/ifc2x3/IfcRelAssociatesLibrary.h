// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelAssociates.h"
#include "IfcLibrarySelect.h"

namespace ifc2x3
{
   class IfcRelAssociatesLibrary : public IfcRelAssociates
   {
   public:
      virtual ~IfcRelAssociatesLibrary(){}

      explicit IfcRelAssociatesLibrary() = default;

      explicit IfcRelAssociatesLibrary(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcRoot*>& _RelatedObjects, const IfcLibrarySelect& _RelatingLibrary)
         : IfcRelAssociates(_GlobalId, _OwnerHistory, _RelatedObjects), RelatingLibrary(_RelatingLibrary) {}

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
         w.writeAttributeInstance(RelatedObjects);
         w.writeAttributeSelect<IfcLibrarySelectWriterVisitor>(RelatingLibrary);
         w.endEntity();
      }

   };

} // namespace ifc2x3

