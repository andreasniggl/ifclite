// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementType.h"

namespace ifc4
{
   class IfcElementAssemblyType : public IfcElementType
   {
   public:
      virtual ~IfcElementAssemblyType(){}

      explicit IfcElementAssemblyType() = default;

      explicit IfcElementAssemblyType(const IfcGloballyUniqueId& _GlobalId, const IfcElementAssemblyTypeEnum& _PredefinedType)
         : IfcElementType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcElementAssemblyType"; }

      boost::optional<IfcElementAssemblyTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValue(IfcElementAssemblyTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
