// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementComponent.h"

namespace ifc4
{
   class IfcBuildingElementPart : public IfcElementComponent
   {
   public:
      virtual ~IfcBuildingElementPart(){}

      explicit IfcBuildingElementPart() = default;

      explicit IfcBuildingElementPart(const IfcGloballyUniqueId& _GlobalId)
         : IfcElementComponent(_GlobalId) {}

      virtual std::string className() const { return "IfcBuildingElementPart"; }

      boost::optional<IfcBuildingElementPartTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(IfcBuildingElementPartTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

