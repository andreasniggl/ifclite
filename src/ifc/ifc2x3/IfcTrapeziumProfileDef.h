#ifndef IFC2X3_IFCTRAPEZIUMPROFILEDEF_H_INCLUDED
#define IFC2X3_IFCTRAPEZIUMPROFILEDEF_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcParameterizedProfileDef.h"

namespace ifc2x3
{
   class IfcTrapeziumProfileDef : public IfcParameterizedProfileDef
   {
   public:
      virtual ~IfcTrapeziumProfileDef(){}

      IfcTrapeziumProfileDef() = default;

      IfcTrapeziumProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcAxis2Placement2D* _Position, const IfcPositiveLengthMeasure& _BottomXDim, const IfcPositiveLengthMeasure& _TopXDim, const IfcPositiveLengthMeasure& _YDim, const IfcLengthMeasure& _TopXOffset)
         : IfcParameterizedProfileDef(_ProfileType, _Position), BottomXDim(_BottomXDim), TopXDim(_TopXDim), YDim(_YDim), TopXOffset(_TopXOffset) {}

      virtual std::string name() const { return "IfcTrapeziumProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> BottomXDim; // required parameter
      boost::optional<IfcPositiveLengthMeasure> TopXDim; // required parameter
      boost::optional<IfcPositiveLengthMeasure> YDim; // required parameter
      boost::optional<IfcLengthMeasure> TopXOffset; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValueScalar(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValueScalar(BottomXDim);
         w.writeAttributeValueScalar(TopXDim);
         w.writeAttributeValueScalar(YDim);
         w.writeAttributeValueScalar(TopXOffset);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
