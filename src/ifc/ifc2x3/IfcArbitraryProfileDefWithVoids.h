#ifndef IFC2X3_IFCARBITRARYPROFILEDEFWITHVOIDS_H_INCLUDED
#define IFC2X3_IFCARBITRARYPROFILEDEFWITHVOIDS_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcArbitraryClosedProfileDef.h"
#include "IfcCurve.h"

namespace ifc2x3
{
   class IfcArbitraryProfileDefWithVoids : public IfcArbitraryClosedProfileDef
   {
   public:
      virtual ~IfcArbitraryProfileDefWithVoids(){}

      IfcArbitraryProfileDefWithVoids() = default;

      IfcArbitraryProfileDefWithVoids(const IfcProfileTypeEnum& _ProfileType, IfcCurve* _OuterCurve, const std::vector<IfcCurve*>& _InnerCurves)
         : IfcArbitraryClosedProfileDef(_ProfileType, _OuterCurve), InnerCurves(_InnerCurves) {}

      virtual std::string name() const { return "IfcArbitraryProfileDefWithVoids"; }

      std::vector<IfcCurve*> InnerCurves; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValueScalar(ProfileName);
         w.writeAttributeInstance(OuterCurve);
         w.writeAttributeInstanceList(InnerCurves);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
