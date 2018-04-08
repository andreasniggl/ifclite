// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcActorRole : public ifc::Entity
   {
   public:
      virtual ~IfcActorRole(){}

      explicit IfcActorRole() = default;

      explicit IfcActorRole(const IfcRoleEnum& _Role)
         : ifc::Entity(), Role(_Role) {}

      virtual std::string className() const { return "IfcActorRole"; }

      boost::optional<IfcRoleEnum> Role; // required parameter
      boost::optional<IfcLabel> UserDefinedRole; // optional parameter
      boost::optional<IfcText> Description; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcRoleEnumStringMap, Role);
         w.writeAttributeValue(UserDefinedRole);
         w.writeAttributeValue(Description);
         w.endEntity();
      }

   };

} // namespace ifc2x3

