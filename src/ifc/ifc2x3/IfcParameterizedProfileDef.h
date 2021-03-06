// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProfileDef.h"
#include "IfcAxis2Placement2D.h"

namespace ifc2x3
{
   class IfcParameterizedProfileDef : public IfcProfileDef
   {
   public:
      virtual ~IfcParameterizedProfileDef(){}

      explicit IfcParameterizedProfileDef() = default;

      explicit IfcParameterizedProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcAxis2Placement2D* _Position)
         : IfcProfileDef(_ProfileType), Position(_Position) {}

      virtual std::string className() const { return "IfcParameterizedProfileDef"; }

      IfcAxis2Placement2D* Position; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.endEntity();
      }

   };

} // namespace ifc2x3

