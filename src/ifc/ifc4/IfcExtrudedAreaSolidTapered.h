// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcExtrudedAreaSolid.h"
#include "IfcProfileDef.h"

namespace ifc4
{
   class IfcExtrudedAreaSolidTapered : public IfcExtrudedAreaSolid
   {
   public:
      virtual ~IfcExtrudedAreaSolidTapered(){}

      explicit IfcExtrudedAreaSolidTapered() = default;

      explicit IfcExtrudedAreaSolidTapered(IfcProfileDef* _SweptArea, IfcDirection* _ExtrudedDirection, const IfcPositiveLengthMeasure& _Depth, IfcProfileDef* _EndSweptArea)
         : IfcExtrudedAreaSolid(_SweptArea, _ExtrudedDirection, _Depth), EndSweptArea(_EndSweptArea) {}

      virtual std::string className() const { return "IfcExtrudedAreaSolidTapered"; }

      IfcProfileDef* EndSweptArea; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SweptArea);
         w.writeAttributeInstance(Position);
         w.writeAttributeInstance(ExtrudedDirection);
         w.writeAttributeValue(Depth);
         w.writeAttributeInstance(EndSweptArea);
         w.endEntity();
      }

   };

} // namespace ifc4

