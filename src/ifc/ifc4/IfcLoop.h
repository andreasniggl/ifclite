// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTopologicalRepresentationItem.h"

namespace ifc4
{
   class IfcLoop : public IfcTopologicalRepresentationItem
   {
   public:
      virtual ~IfcLoop(){}

      explicit IfcLoop() = default;

      virtual std::string className() const { return "IfcLoop"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc4

