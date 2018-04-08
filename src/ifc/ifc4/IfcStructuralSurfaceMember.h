// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralMember.h"

namespace ifc4
{
   class IfcStructuralSurfaceMember : public IfcStructuralMember
   {
   public:
      virtual ~IfcStructuralSurfaceMember(){}

      explicit IfcStructuralSurfaceMember() = default;

      explicit IfcStructuralSurfaceMember(const IfcGloballyUniqueId& _GlobalId, const IfcStructuralSurfaceMemberTypeEnum& _PredefinedType)
         : IfcStructuralMember(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcStructuralSurfaceMember"; }

      boost::optional<IfcStructuralSurfaceMemberTypeEnum> PredefinedType; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Thickness; // optional parameter

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
         w.writeAttributeValue(IfcStructuralSurfaceMemberTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(Thickness);
         w.endEntity();
      }

   };

} // namespace ifc4
