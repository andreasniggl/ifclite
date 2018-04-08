// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSweptDiskSolid.h"

namespace ifc4
{
   class IfcSweptDiskSolidPolygonal : public IfcSweptDiskSolid
   {
   public:
      virtual ~IfcSweptDiskSolidPolygonal(){}

      explicit IfcSweptDiskSolidPolygonal() = default;

      explicit IfcSweptDiskSolidPolygonal(IfcCurve* _Directrix, const IfcPositiveLengthMeasure& _Radius)
         : IfcSweptDiskSolid(_Directrix, _Radius) {}

      virtual std::string className() const { return "IfcSweptDiskSolidPolygonal"; }

      boost::optional<IfcPositiveLengthMeasure> FilletRadius; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Directrix);
         w.writeAttributeValue(Radius);
         w.writeAttributeValue(InnerRadius);
         w.writeAttributeValue(StartParam);
         w.writeAttributeValue(EndParam);
         w.writeAttributeValue(FilletRadius);
         w.endEntity();
      }

   };

} // namespace ifc4

