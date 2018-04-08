// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionFlowElementType.h"

namespace ifc2x3
{
   class IfcFlowFittingType : public IfcDistributionFlowElementType
   {
   public:
      virtual ~IfcFlowFittingType(){}

      explicit IfcFlowFittingType() = default;

      explicit IfcFlowFittingType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcDistributionFlowElementType(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcFlowFittingType"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ApplicableOccurrence);
         w.writeAttributeInstance(HasPropertySets);
         w.writeAttributeInstance(RepresentationMaps);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(ElementType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

