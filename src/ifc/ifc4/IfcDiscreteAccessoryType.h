// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementComponentType.h"

namespace ifc4
{
   class IfcDiscreteAccessoryType : public IfcElementComponentType
   {
   public:
      virtual ~IfcDiscreteAccessoryType(){}

      explicit IfcDiscreteAccessoryType() = default;

      explicit IfcDiscreteAccessoryType(const IfcGloballyUniqueId& _GlobalId, const IfcDiscreteAccessoryTypeEnum& _PredefinedType)
         : IfcElementComponentType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcDiscreteAccessoryType"; }

      boost::optional<IfcDiscreteAccessoryTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcDiscreteAccessoryTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

