// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcParameterizedProfileDef.h"

namespace ifc4
{
   class IfcRectangleProfileDef : public IfcParameterizedProfileDef
   {
   public:
      virtual ~IfcRectangleProfileDef(){}

      explicit IfcRectangleProfileDef() = default;

      explicit IfcRectangleProfileDef(const IfcProfileTypeEnum& _ProfileType, const IfcPositiveLengthMeasure& _XDim, const IfcPositiveLengthMeasure& _YDim)
         : IfcParameterizedProfileDef(_ProfileType), XDim(_XDim), YDim(_YDim) {}

      virtual std::string className() const { return "IfcRectangleProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> XDim; // required parameter
      boost::optional<IfcPositiveLengthMeasure> YDim; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(XDim);
         w.writeAttributeValue(YDim);
         w.endEntity();
      }

   };

} // namespace ifc4
