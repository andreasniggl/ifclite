// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcObjectPlacement.h"
#include "IfcVirtualGridIntersection.h"
#include "IfcVirtualGridIntersection.h"

namespace ifc2x3
{
   class IfcGridPlacement : public IfcObjectPlacement
   {
   public:
      virtual ~IfcGridPlacement(){}

      explicit IfcGridPlacement() = default;

      explicit IfcGridPlacement(IfcVirtualGridIntersection* _PlacementLocation)
         : IfcObjectPlacement(), PlacementLocation(_PlacementLocation) {}

      virtual std::string className() const { return "IfcGridPlacement"; }

      IfcVirtualGridIntersection* PlacementLocation; // required parameter
      IfcVirtualGridIntersection* PlacementRefDirection; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(PlacementLocation);
         w.writeAttributeInstance(PlacementRefDirection);
         w.endEntity();
      }

   };

} // namespace ifc2x3

