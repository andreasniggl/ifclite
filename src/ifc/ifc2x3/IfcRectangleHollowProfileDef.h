// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRectangleProfileDef.h"

namespace ifc2x3
{
   class IfcRectangleHollowProfileDef : public IfcRectangleProfileDef
   {
   public:
      virtual ~IfcRectangleHollowProfileDef(){}

      explicit IfcRectangleHollowProfileDef() = default;

      explicit IfcRectangleHollowProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcAxis2Placement2D* _Position, const IfcPositiveLengthMeasure& _XDim, const IfcPositiveLengthMeasure& _YDim, const IfcPositiveLengthMeasure& _WallThickness)
         : IfcRectangleProfileDef(_ProfileType, _Position, _XDim, _YDim), WallThickness(_WallThickness) {}

      virtual std::string className() const { return "IfcRectangleHollowProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> WallThickness; // required parameter
      boost::optional<IfcPositiveLengthMeasure> InnerFilletRadius; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> OuterFilletRadius; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(XDim);
         w.writeAttributeValue(YDim);
         w.writeAttributeValue(WallThickness);
         w.writeAttributeValue(InnerFilletRadius);
         w.writeAttributeValue(OuterFilletRadius);
         w.endEntity();
      }

   };

} // namespace ifc2x3

