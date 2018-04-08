// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelSpaceBoundary.h"
#include "IfcRelSpaceBoundary1stLevel.h"

namespace ifc4
{
   class IfcRelSpaceBoundary1stLevel : public IfcRelSpaceBoundary
   {
   public:
      virtual ~IfcRelSpaceBoundary1stLevel(){}

      explicit IfcRelSpaceBoundary1stLevel() = default;

      explicit IfcRelSpaceBoundary1stLevel(const IfcGloballyUniqueId& _GlobalId, const IfcSpaceBoundarySelect& _RelatingSpace, IfcElement* _RelatedBuildingElement, const IfcPhysicalOrVirtualEnum& _PhysicalOrVirtualBoundary, const IfcInternalOrExternalEnum& _InternalOrExternalBoundary)
         : IfcRelSpaceBoundary(_GlobalId, _RelatingSpace, _RelatedBuildingElement, _PhysicalOrVirtualBoundary, _InternalOrExternalBoundary) {}

      virtual std::string className() const { return "IfcRelSpaceBoundary1stLevel"; }

      IfcRelSpaceBoundary1stLevel* ParentBoundary; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcSpaceBoundarySelectWriterVisitor>(RelatingSpace);
         w.writeAttributeInstance(RelatedBuildingElement);
         w.writeAttributeInstance(ConnectionGeometry);
         w.writeAttributeValue(IfcPhysicalOrVirtualEnumStringMap, PhysicalOrVirtualBoundary);
         w.writeAttributeValue(IfcInternalOrExternalEnumStringMap, InternalOrExternalBoundary);
         w.writeAttributeInstance(ParentBoundary);
         w.endEntity();
      }

   };

} // namespace ifc4

