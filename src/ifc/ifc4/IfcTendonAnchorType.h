// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElementType.h"

namespace ifc4
{
   class IfcTendonAnchorType : public IfcReinforcingElementType
   {
   public:
      virtual ~IfcTendonAnchorType(){}

      explicit IfcTendonAnchorType() = default;

      explicit IfcTendonAnchorType(const IfcGloballyUniqueId& _GlobalId, const IfcTendonAnchorTypeEnum& _PredefinedType)
         : IfcReinforcingElementType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcTendonAnchorType"; }

      boost::optional<IfcTendonAnchorTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcTendonAnchorTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

