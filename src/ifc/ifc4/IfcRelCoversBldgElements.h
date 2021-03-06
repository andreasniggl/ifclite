// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelConnects.h"
#include "IfcElement.h"
#include "IfcCovering.h"

namespace ifc4
{
   class IfcRelCoversBldgElements : public IfcRelConnects
   {
   public:
      virtual ~IfcRelCoversBldgElements(){}

      explicit IfcRelCoversBldgElements() = default;

      explicit IfcRelCoversBldgElements(const IfcGloballyUniqueId& _GlobalId, IfcElement* _RelatingBuildingElement, const std::vector<IfcCovering*>& _RelatedCoverings)
         : IfcRelConnects(_GlobalId), RelatingBuildingElement(_RelatingBuildingElement), RelatedCoverings(_RelatedCoverings) {}

      virtual std::string className() const { return "IfcRelCoversBldgElements"; }

      IfcElement* RelatingBuildingElement; // required parameter
      std::vector<IfcCovering*> RelatedCoverings; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingBuildingElement);
         w.writeAttributeInstance(RelatedCoverings);
         w.endEntity();
      }

   };

} // namespace ifc4

