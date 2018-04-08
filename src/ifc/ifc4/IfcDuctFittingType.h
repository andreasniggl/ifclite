// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowFittingType.h"

namespace ifc4
{
   class IfcDuctFittingType : public IfcFlowFittingType
   {
   public:
      virtual ~IfcDuctFittingType(){}

      explicit IfcDuctFittingType() = default;

      explicit IfcDuctFittingType(const IfcGloballyUniqueId& _GlobalId, const IfcDuctFittingTypeEnum& _PredefinedType)
         : IfcFlowFittingType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcDuctFittingType"; }

      boost::optional<IfcDuctFittingTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcDuctFittingTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
