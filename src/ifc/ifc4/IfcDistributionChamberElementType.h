// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcDistributionFlowElementType.h"

namespace ifc4
{
   class IfcDistributionChamberElementType : public IfcDistributionFlowElementType
   {
   public:
      virtual ~IfcDistributionChamberElementType(){}

      explicit IfcDistributionChamberElementType() = default;

      explicit IfcDistributionChamberElementType(const IfcGloballyUniqueId& _GlobalId, const IfcDistributionChamberElementTypeEnum& _PredefinedType)
         : IfcDistributionFlowElementType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcDistributionChamberElementType"; }

      boost::optional<IfcDistributionChamberElementTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcDistributionChamberElementTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

