// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTopologicalRepresentationItem.h"
#include "IfcLoop.h"

namespace ifc2x3
{
   class IfcFaceBound : public IfcTopologicalRepresentationItem
   {
   public:
      virtual ~IfcFaceBound(){}

      explicit IfcFaceBound() = default;

      explicit IfcFaceBound(IfcLoop* _Bound, const bool& _Orientation)
         : IfcTopologicalRepresentationItem(), Bound(_Bound), Orientation(_Orientation) {}

      virtual std::string className() const { return "IfcFaceBound"; }

      IfcLoop* Bound; // required parameter
      boost::optional<bool> Orientation; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Bound);
         w.writeAttributeValue(Orientation);
         w.endEntity();
      }

   };

} // namespace ifc2x3

