#ifndef IFC2X3_IFCLOCALPLACEMENT_H_INCLUDED
#define IFC2X3_IFCLOCALPLACEMENT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcObjectPlacement.h"
#include "IfcObjectPlacement.h"
#include "IfcAxis2Placement.h"

namespace ifc2x3
{
   class IfcLocalPlacement : public IfcObjectPlacement
   {
   public:
      virtual ~IfcLocalPlacement(){}

      IfcLocalPlacement() = default;

      IfcLocalPlacement(const IfcAxis2Placement& _RelativePlacement)
         : IfcObjectPlacement(), RelativePlacement(_RelativePlacement) {}

      virtual std::string name() const { return "IfcLocalPlacement"; }

      IfcObjectPlacement* PlacementRelTo; // optional parameter
      boost::optional<IfcAxis2Placement> RelativePlacement; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(PlacementRelTo);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(RelativePlacement);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
