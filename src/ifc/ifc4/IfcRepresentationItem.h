// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc4
{
   class IfcRepresentationItem : public ifc::Entity
   {
   public:
      virtual ~IfcRepresentationItem(){}

      explicit IfcRepresentationItem() = default;

      virtual std::string className() const { return "IfcRepresentationItem"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc4
