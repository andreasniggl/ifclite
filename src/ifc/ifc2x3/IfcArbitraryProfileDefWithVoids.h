// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcArbitraryClosedProfileDef.h"
#include "IfcCurve.h"

namespace ifc2x3
{
   class IfcArbitraryProfileDefWithVoids : public IfcArbitraryClosedProfileDef
   {
   public:
      virtual ~IfcArbitraryProfileDefWithVoids(){}

      explicit IfcArbitraryProfileDefWithVoids() = default;

      explicit IfcArbitraryProfileDefWithVoids(const IfcProfileTypeEnum& _ProfileType, IfcCurve* _OuterCurve, const std::vector<IfcCurve*>& _InnerCurves)
         : IfcArbitraryClosedProfileDef(_ProfileType, _OuterCurve), InnerCurves(_InnerCurves) {}

      virtual std::string className() const { return "IfcArbitraryProfileDefWithVoids"; }

      std::vector<IfcCurve*> InnerCurves; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcProfileTypeEnumStringMap, ProfileType);
         w.writeAttributeValue(ProfileName);
         w.writeAttributeInstance(OuterCurve);
         w.writeAttributeInstance(InnerCurves);
         w.endEntity();
      }

   };

} // namespace ifc2x3

