// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElement.h"

namespace ifc2x3
{
   class IfcTendonAnchor : public IfcReinforcingElement
   {
   public:
      virtual ~IfcTendonAnchor(){}

      explicit IfcTendonAnchor() = default;

      explicit IfcTendonAnchor(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcReinforcingElement(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcTendonAnchor"; }


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

} // namespace ifc2x3

