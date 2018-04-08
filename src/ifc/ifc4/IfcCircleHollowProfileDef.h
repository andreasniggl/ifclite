// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcCircleProfileDef.h"

namespace ifc4
{
   class IfcCircleHollowProfileDef : public IfcCircleProfileDef
   {
   public:
      virtual ~IfcCircleHollowProfileDef(){}

      explicit IfcCircleHollowProfileDef() = default;

      explicit IfcCircleHollowProfileDef(const IfcProfileTypeEnum& _ProfileType, const IfcPositiveLengthMeasure& _Radius, const IfcPositiveLengthMeasure& _WallThickness)
         : IfcCircleProfileDef(_ProfileType, _Radius), WallThickness(_WallThickness) {}

      virtual std::string className() const { return "IfcCircleHollowProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> WallThickness; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(Radius);
         w.writeAttributeValue(WallThickness);
         w.endEntity();
      }

   };

} // namespace ifc4
