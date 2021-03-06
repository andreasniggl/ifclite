// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcWindow.h"

namespace ifc4
{
   class IfcWindowStandardCase : public IfcWindow
   {
   public:
      virtual ~IfcWindowStandardCase(){}

      explicit IfcWindowStandardCase() = default;

      explicit IfcWindowStandardCase(const IfcGloballyUniqueId& _GlobalId)
         : IfcWindow(_GlobalId) {}

      virtual std::string className() const { return "IfcWindowStandardCase"; }


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
         w.writeAttributeValue(OverallHeight);
         w.writeAttributeValue(OverallWidth);
         w.writeAttributeValue(IfcWindowTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(IfcWindowTypePartitioningEnumStringMap, PartitioningType);
         w.writeAttributeValue(UserDefinedPartitioningType);
         w.endEntity();
      }

   };

} // namespace ifc4

