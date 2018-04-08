// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSweptAreaSolid.h"
#include "IfcCurve.h"
#include "IfcSurface.h"

namespace ifc2x3
{
   class IfcSurfaceCurveSweptAreaSolid : public IfcSweptAreaSolid
   {
   public:
      virtual ~IfcSurfaceCurveSweptAreaSolid(){}

      explicit IfcSurfaceCurveSweptAreaSolid() = default;

      explicit IfcSurfaceCurveSweptAreaSolid(IfcProfileDef* _SweptArea, IfcAxis2Placement3D* _Position, IfcCurve* _Directrix, const IfcParameterValue& _StartParam, const IfcParameterValue& _EndParam, IfcSurface* _ReferenceSurface)
         : IfcSweptAreaSolid(_SweptArea, _Position), Directrix(_Directrix), StartParam(_StartParam), EndParam(_EndParam), ReferenceSurface(_ReferenceSurface) {}

      virtual std::string className() const { return "IfcSurfaceCurveSweptAreaSolid"; }

      IfcCurve* Directrix; // required parameter
      boost::optional<IfcParameterValue> StartParam; // required parameter
      boost::optional<IfcParameterValue> EndParam; // required parameter
      IfcSurface* ReferenceSurface; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SweptArea);
         w.writeAttributeInstance(Position);
         w.writeAttributeInstance(Directrix);
         w.writeAttributeValue(StartParam);
         w.writeAttributeValue(EndParam);
         w.writeAttributeInstance(ReferenceSurface);
         w.endEntity();
      }

   };

} // namespace ifc2x3

