// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowFittingType.h"

namespace ifc4
{
   class IfcCableFittingType : public IfcFlowFittingType
   {
   public:
      virtual ~IfcCableFittingType(){}

      explicit IfcCableFittingType() = default;

      explicit IfcCableFittingType(const IfcGloballyUniqueId& _GlobalId, const IfcCableFittingTypeEnum& _PredefinedType)
         : IfcFlowFittingType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcCableFittingType"; }

      boost::optional<IfcCableFittingTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcCableFittingTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

