// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcObjectPlacement.h"
#include "IfcVirtualGridIntersection.h"
#include "IfcGridPlacementDirectionSelect.h"

namespace ifc4
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
      boost::optional<IfcGridPlacementDirectionSelect> PlacementRefDirection; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(PlacementLocation);
         w.writeAttributeSelect<IfcGridPlacementDirectionSelectWriterVisitor>(PlacementRefDirection);
         w.endEntity();
      }

   };

} // namespace ifc4

