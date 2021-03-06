// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSolidModel.h"
#include "IfcCurve.h"

namespace ifc4
{
   class IfcSweptDiskSolid : public IfcSolidModel
   {
   public:
      virtual ~IfcSweptDiskSolid(){}

      explicit IfcSweptDiskSolid() = default;

      explicit IfcSweptDiskSolid(IfcCurve* _Directrix, const IfcPositiveLengthMeasure& _Radius)
         : IfcSolidModel(), Directrix(_Directrix), Radius(_Radius) {}

      virtual std::string className() const { return "IfcSweptDiskSolid"; }

      IfcCurve* Directrix; // required parameter
      boost::optional<IfcPositiveLengthMeasure> Radius; // required parameter
      boost::optional<IfcPositiveLengthMeasure> InnerRadius; // optional parameter
      boost::optional<IfcParameterValue> StartParam; // optional parameter
      boost::optional<IfcParameterValue> EndParam; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Directrix);
         w.writeAttributeValue(Radius);
         w.writeAttributeValue(InnerRadius);
         w.writeAttributeValue(StartParam);
         w.writeAttributeValue(EndParam);
         w.endEntity();
      }

   };

} // namespace ifc4

