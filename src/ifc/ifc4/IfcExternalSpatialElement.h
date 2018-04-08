// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcExternalSpatialStructureElement.h"

namespace ifc4
{
   class IfcExternalSpatialElement : public IfcExternalSpatialStructureElement
   {
   public:
      virtual ~IfcExternalSpatialElement(){}

      explicit IfcExternalSpatialElement() = default;

      explicit IfcExternalSpatialElement(const IfcGloballyUniqueId& _GlobalId)
         : IfcExternalSpatialStructureElement(_GlobalId) {}

      virtual std::string className() const { return "IfcExternalSpatialElement"; }

      boost::optional<IfcExternalSpatialElementTypeEnum> PredefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(LongName);
         w.writeAttributeValue(IfcExternalSpatialElementTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

