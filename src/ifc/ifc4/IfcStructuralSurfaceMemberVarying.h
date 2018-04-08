// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralSurfaceMember.h"

namespace ifc4
{
   class IfcStructuralSurfaceMemberVarying : public IfcStructuralSurfaceMember
   {
   public:
      virtual ~IfcStructuralSurfaceMemberVarying(){}

      explicit IfcStructuralSurfaceMemberVarying() = default;

      explicit IfcStructuralSurfaceMemberVarying(const IfcGloballyUniqueId& _GlobalId, const IfcStructuralSurfaceMemberTypeEnum& _PredefinedType)
         : IfcStructuralSurfaceMember(_GlobalId, _PredefinedType) {}

      virtual std::string className() const { return "IfcStructuralSurfaceMemberVarying"; }


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
