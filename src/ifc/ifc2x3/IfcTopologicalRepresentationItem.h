// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRepresentationItem.h"

namespace ifc2x3
{
   class IfcTopologicalRepresentationItem : public IfcRepresentationItem
   {
   public:
      virtual ~IfcTopologicalRepresentationItem(){}

      explicit IfcTopologicalRepresentationItem() = default;

      virtual std::string className() const { return "IfcTopologicalRepresentationItem"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc2x3

