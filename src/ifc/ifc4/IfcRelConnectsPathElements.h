// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelConnectsElements.h"

namespace ifc4
{
   class IfcRelConnectsPathElements : public IfcRelConnectsElements
   {
   public:
      virtual ~IfcRelConnectsPathElements(){}

      explicit IfcRelConnectsPathElements() = default;

      explicit IfcRelConnectsPathElements(const IfcGloballyUniqueId& _GlobalId, IfcElement* _RelatingElement, IfcElement* _RelatedElement, const std::vector<IfcInteger>& _RelatingPriorities, const std::vector<IfcInteger>& _RelatedPriorities, const IfcConnectionTypeEnum& _RelatedConnectionType, const IfcConnectionTypeEnum& _RelatingConnectionType)
         : IfcRelConnectsElements(_GlobalId, _RelatingElement, _RelatedElement), RelatingPriorities(_RelatingPriorities), RelatedPriorities(_RelatedPriorities), RelatedConnectionType(_RelatedConnectionType), RelatingConnectionType(_RelatingConnectionType) {}

      virtual std::string className() const { return "IfcRelConnectsPathElements"; }

      std::vector<IfcInteger> RelatingPriorities; // required parameter
      std::vector<IfcInteger> RelatedPriorities; // required parameter
      boost::optional<IfcConnectionTypeEnum> RelatedConnectionType; // required parameter
      boost::optional<IfcConnectionTypeEnum> RelatingConnectionType; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(ConnectionGeometry);
         w.writeAttributeInstance(RelatingElement);
         w.writeAttributeInstance(RelatedElement);
         w.writeAttributeValue(RelatingPriorities);
         w.writeAttributeValue(RelatedPriorities);
         w.writeAttributeValue(IfcConnectionTypeEnumStringMap, RelatedConnectionType);
         w.writeAttributeValue(IfcConnectionTypeEnumStringMap, RelatingConnectionType);
         w.endEntity();
      }

   };

} // namespace ifc4

