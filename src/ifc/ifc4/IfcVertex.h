// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTopologicalRepresentationItem.h"

namespace ifc4
{
   class IfcVertex : public IfcTopologicalRepresentationItem
   {
   public:
      virtual ~IfcVertex(){}

      explicit IfcVertex() = default;

      virtual std::string className() const { return "IfcVertex"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc4

