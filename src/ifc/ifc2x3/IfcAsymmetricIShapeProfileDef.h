#ifndef IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H_INCLUDED
#define IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcIShapeProfileDef.h"

namespace ifc2x3
{
   class IfcAsymmetricIShapeProfileDef : public IfcIShapeProfileDef
   {
   public:
      virtual ~IfcAsymmetricIShapeProfileDef(){}

      IfcAsymmetricIShapeProfileDef() = default;

      IfcAsymmetricIShapeProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcAxis2Placement2D* _Position, const IfcPositiveLengthMeasure& _OverallWidth, const IfcPositiveLengthMeasure& _OverallDepth, const IfcPositiveLengthMeasure& _WebThickness, const IfcPositiveLengthMeasure& _FlangeThickness, const IfcPositiveLengthMeasure& _TopFlangeWidth)
         : IfcIShapeProfileDef(_ProfileType, _Position, _OverallWidth, _OverallDepth, _WebThickness, _FlangeThickness), TopFlangeWidth(_TopFlangeWidth) {}

      virtual std::string name() const { return "IfcAsymmetricIShapeProfileDef"; }

      boost::optional<IfcPositiveLengthMeasure> TopFlangeWidth; // required parameter
      boost::optional<IfcPositiveLengthMeasure> TopFlangeThickness; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> TopFlangeFilletRadius; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> CentreOfGravityInY; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValueScalar(ProfileName);
         w.writeAttributeInstance(Position);
         w.writeAttributeValueScalar(OverallWidth);
         w.writeAttributeValueScalar(OverallDepth);
         w.writeAttributeValueScalar(WebThickness);
         w.writeAttributeValueScalar(FlangeThickness);
         w.writeAttributeValueScalar(FilletRadius);
         w.writeAttributeValueScalar(TopFlangeWidth);
         w.writeAttributeValueScalar(TopFlangeThickness);
         w.writeAttributeValueScalar(TopFlangeFilletRadius);
         w.writeAttributeValueScalar(CentreOfGravityInY);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif