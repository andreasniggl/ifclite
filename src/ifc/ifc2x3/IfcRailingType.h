// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElementType.h"

namespace ifc2x3
{
   class IfcRailingType : public IfcBuildingElementType
   {
   public:
      virtual ~IfcRailingType(){}

      explicit IfcRailingType() = default;

      explicit IfcRailingType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcRailingTypeEnum& _PredefinedType)
         : IfcBuildingElementType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcRailingType"; }

      boost::optional<IfcRailingTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcRailingTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

