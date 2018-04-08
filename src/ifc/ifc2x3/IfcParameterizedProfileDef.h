#ifndef IFC2X3_IFCPARAMETERIZEDPROFILEDEF_H_INCLUDED
#define IFC2X3_IFCPARAMETERIZEDPROFILEDEF_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcProfileDef.h"
#include "IfcAxis2Placement2D.h"

namespace ifc2x3
{
   class IfcParameterizedProfileDef : public IfcProfileDef
   {
   public:
      virtual ~IfcParameterizedProfileDef(){}

      IfcParameterizedProfileDef() = default;

      IfcParameterizedProfileDef(const IfcProfileTypeEnum& _ProfileType, IfcAxis2Placement2D* _Position)
         : IfcProfileDef(_ProfileType), Position(_Position) {}

      virtual std::string name() const { return "IfcParameterizedProfileDef"; }

      IfcAxis2Placement2D* Position; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValueScalar(ProfileName);
         w.writeAttributeInstance(Position);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif