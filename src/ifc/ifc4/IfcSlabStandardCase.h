// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSlab.h"

namespace ifc4
{
   class IfcSlabStandardCase : public IfcSlab
   {
   public:
      virtual ~IfcSlabStandardCase(){}

      explicit IfcSlabStandardCase() = default;

      explicit IfcSlabStandardCase(const IfcGloballyUniqueId& _GlobalId)
         : IfcSlab(_GlobalId) {}

      virtual std::string className() const { return "IfcSlabStandardCase"; }


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
         w.writeAttributeValue(IfcSlabTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

