// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcDocumentElectronicFormat : public ifc::Entity
   {
   public:
      virtual ~IfcDocumentElectronicFormat(){}

      explicit IfcDocumentElectronicFormat() = default;

      virtual std::string className() const { return "IfcDocumentElectronicFormat"; }

      boost::optional<IfcLabel> FileExtension; // optional parameter
      boost::optional<IfcLabel> MimeContentType; // optional parameter
      boost::optional<IfcLabel> MimeSubtype; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(FileExtension);
         w.writeAttributeValue(MimeContentType);
         w.writeAttributeValue(MimeSubtype);
         w.endEntity();
      }

   };

} // namespace ifc2x3

