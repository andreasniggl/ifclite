// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcExternalReference.h"

namespace ifc2x3
{
   class IfcDocumentReference : public IfcExternalReference
   {
   public:
      virtual ~IfcDocumentReference(){}

      explicit IfcDocumentReference() = default;

      virtual std::string className() const { return "IfcDocumentReference"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Location);
         w.writeAttributeValue(ItemReference);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

