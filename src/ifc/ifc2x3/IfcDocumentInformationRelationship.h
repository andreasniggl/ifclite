// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcDocumentInformation.h"
#include "IfcDocumentInformation.h"

namespace ifc2x3
{
   class IfcDocumentInformationRelationship : public ifc::Entity
   {
   public:
      virtual ~IfcDocumentInformationRelationship(){}

      explicit IfcDocumentInformationRelationship() = default;

      explicit IfcDocumentInformationRelationship(IfcDocumentInformation* _RelatingDocument, const std::vector<IfcDocumentInformation*>& _RelatedDocuments)
         : ifc::Entity(), RelatingDocument(_RelatingDocument), RelatedDocuments(_RelatedDocuments) {}

      virtual std::string className() const { return "IfcDocumentInformationRelationship"; }

      IfcDocumentInformation* RelatingDocument; // required parameter
      std::vector<IfcDocumentInformation*> RelatedDocuments; // required parameter
      boost::optional<IfcLabel> RelationshipType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(RelatingDocument);
         w.writeAttributeInstance(RelatedDocuments);
         w.writeAttributeValue(RelationshipType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

