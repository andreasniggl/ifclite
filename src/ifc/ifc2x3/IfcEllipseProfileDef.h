#ifndef IFC2X3_IFCELLIPSEPROFILEDEF_H_INCLUDED
#define IFC2X3_IFCELLIPSEPROFILEDEF_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcParameterizedProfileDef.h"

namespace ifc2x3
{
   class IfcEllipseProfileDef : public IfcParameterizedProfileDef
   {
   public:
      virtual ~IfcEllipseProfileDef(){}

      IfcEllipseProfileDef() = default;

      IfcEllipseProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcAxis2Placement2D* _Position, const IfcPositiveLengthMeasure& _SemiAxis1, const IfcPositiveLengthMeasure& _SemiAxis2)
         : IfcParameterizedProfileDef(_ProfileType, _Position), SemiAxis1(_SemiAxis1), SemiAxis2(_SemiAxis2) {}

      virtual std::string name() const { return "IfcEllipseProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> SemiAxis1; // required parameter
      boost::optional<IfcPositiveLengthMeasure> SemiAxis2; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValueScalar(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValueScalar(SemiAxis1);
         w.writeAttributeValueScalar(SemiAxis2);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif