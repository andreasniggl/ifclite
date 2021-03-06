// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSpatialElementType.h"

namespace ifc4
{
   class IfcSpatialZoneType : public IfcSpatialElementType
   {
   public:
      virtual ~IfcSpatialZoneType(){}

      explicit IfcSpatialZoneType() = default;

      explicit IfcSpatialZoneType(const IfcGloballyUniqueId& _GlobalId, const IfcSpatialZoneTypeEnum& _PredefinedType)
         : IfcSpatialElementType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcSpatialZoneType"; }

      boost::optional<IfcSpatialZoneTypeEnum> PredefinedType; // required parameter
      boost::optional<IfcLabel> LongName; // optional parameter

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
         w.writeAttributeValue(IfcSpatialZoneTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(LongName);
         w.endEntity();
      }

   };

} // namespace ifc4

