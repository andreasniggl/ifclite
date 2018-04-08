// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFlowControllerType.h"

namespace ifc4
{
   class IfcElectricTimeControlType : public IfcFlowControllerType
   {
   public:
      virtual ~IfcElectricTimeControlType(){}

      explicit IfcElectricTimeControlType() = default;

      explicit IfcElectricTimeControlType(const IfcGloballyUniqueId& _GlobalId, const IfcElectricTimeControlTypeEnum& _PredefinedType)
         : IfcFlowControllerType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcElectricTimeControlType"; }

      boost::optional<IfcElectricTimeControlTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcElectricTimeControlTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
