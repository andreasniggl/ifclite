// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"

namespace ifc4
{
   class IfcStructuralLoadGroup : public IfcGroup
   {
   public:
      virtual ~IfcStructuralLoadGroup(){}

      explicit IfcStructuralLoadGroup() = default;

      explicit IfcStructuralLoadGroup(const IfcGloballyUniqueId& _GlobalId, const IfcLoadGroupTypeEnum& _PredefinedType, const IfcActionTypeEnum& _ActionType, const IfcActionSourceTypeEnum& _ActionSource)
         : IfcGroup(_GlobalId), PredefinedType(_PredefinedType), ActionType(_ActionType), ActionSource(_ActionSource) {}

      virtual std::string className() const { return "IfcStructuralLoadGroup"; }

      boost::optional<IfcLoadGroupTypeEnum> PredefinedType; // required parameter
      boost::optional<IfcActionTypeEnum> ActionType; // required parameter
      boost::optional<IfcActionSourceTypeEnum> ActionSource; // required parameter
      boost::optional<IfcRatioMeasure> Coefficient; // optional parameter
      boost::optional<IfcLabel> Purpose; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(IfcLoadGroupTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(IfcActionTypeEnumStringMap, ActionType);
         w.writeAttributeValue(IfcActionSourceTypeEnumStringMap, ActionSource);
         w.writeAttributeValue(Coefficient);
         w.writeAttributeValue(Purpose);
         w.endEntity();
      }

   };

} // namespace ifc4

