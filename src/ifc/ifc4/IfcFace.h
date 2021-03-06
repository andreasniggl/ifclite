// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTopologicalRepresentationItem.h"
#include "IfcFaceBound.h"

namespace ifc4
{
   class IfcFace : public IfcTopologicalRepresentationItem
   {
   public:
      virtual ~IfcFace(){}

      explicit IfcFace() = default;

      explicit IfcFace(const std::vector<IfcFaceBound*>& _Bounds)
         : IfcTopologicalRepresentationItem(), Bounds(_Bounds) {}

      virtual std::string className() const { return "IfcFace"; }

      std::vector<IfcFaceBound*> Bounds; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Bounds);
         w.endEntity();
      }

   };

} // namespace ifc4

