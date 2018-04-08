// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElementType.h"

namespace ifc4
{
   class IfcSlabType : public IfcBuildingElementType
   {
   public:
      virtual ~IfcSlabType(){}

      explicit IfcSlabType() = default;

      explicit IfcSlabType(const IfcGloballyUniqueId& _GlobalId, const IfcSlabTypeEnum& _PredefinedType)
         : IfcBuildingElementType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcSlabType"; }

      boost::optional<IfcSlabTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcSlabTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

