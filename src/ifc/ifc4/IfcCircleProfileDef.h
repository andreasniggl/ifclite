// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcParameterizedProfileDef.h"

namespace ifc4
{
   class IfcCircleProfileDef : public IfcParameterizedProfileDef
   {
   public:
      virtual ~IfcCircleProfileDef(){}

      explicit IfcCircleProfileDef() = default;

      explicit IfcCircleProfileDef(const IfcProfileTypeEnum& _ProfileType, const IfcPositiveLengthMeasure& _Radius)
         : IfcParameterizedProfileDef(_ProfileType), Radius(_Radius) {}

      virtual std::string className() const { return "IfcCircleProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> Radius; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(Radius);
         w.endEntity();
      }

   };

} // namespace ifc4

