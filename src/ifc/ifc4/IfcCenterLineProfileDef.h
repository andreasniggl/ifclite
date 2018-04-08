// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcArbitraryOpenProfileDef.h"

namespace ifc4
{
   class IfcCenterLineProfileDef : public IfcArbitraryOpenProfileDef
   {
   public:
      virtual ~IfcCenterLineProfileDef(){}

      explicit IfcCenterLineProfileDef() = default;

      explicit IfcCenterLineProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcBoundedCurve* _Curve, const IfcPositiveLengthMeasure& _Thickness)
         : IfcArbitraryOpenProfileDef(_ProfileType, _Curve), Thickness(_Thickness) {}

      virtual std::string className() const { return "IfcCenterLineProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> Thickness; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Curve);
         w.writeAttributeValue(Thickness);
         w.endEntity();
      }

   };

} // namespace ifc4

