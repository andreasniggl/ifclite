// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementComponent.h"

namespace ifc4
{
   class IfcReinforcingElement : public IfcElementComponent
   {
   public:
      virtual ~IfcReinforcingElement(){}

      explicit IfcReinforcingElement() = default;

      explicit IfcReinforcingElement(const IfcGloballyUniqueId& _GlobalId)
         : IfcElementComponent(_GlobalId) {}

      virtual std::string className() const { return "IfcReinforcingElement"; }

      boost::optional<IfcLabel> SteelGrade; // optional parameter

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
         w.writeAttributeValue(SteelGrade);
         w.endEntity();
      }

   };

} // namespace ifc4

