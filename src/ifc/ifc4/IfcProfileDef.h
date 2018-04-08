// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc4
{
   class IfcProfileDef : public ifc::Entity
   {
   public:
      virtual ~IfcProfileDef(){}

      explicit IfcProfileDef() = default;

      explicit IfcProfileDef(const IfcProfileTypeEnum& _ProfileType)
         : ifc::Entity(), ProfileType(_ProfileType) {}

      virtual std::string className() const { return "IfcProfileDef"; }

      boost::optional<IfcProfileTypeEnum> ProfileType; // required parameter
      boost::optional<IfcLabel> ProfileName; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.endEntity();
      }

   };

} // namespace ifc4

