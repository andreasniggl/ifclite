#ifndef IFC2X3_IFCPOINTONCURVE_H_INCLUDED
#define IFC2X3_IFCPOINTONCURVE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPoint.h"
#include "IfcCurve.h"

namespace ifc2x3
{
   class IfcPointOnCurve : public IfcPoint
   {
   public:
      virtual ~IfcPointOnCurve(){}

      IfcPointOnCurve() = default;

      IfcPointOnCurve(IfcCurve* _BasisCurve, const IfcParameterValue& _PointParameter)
         : IfcPoint(), BasisCurve(_BasisCurve), PointParameter(_PointParameter) {}

      virtual std::string name() const { return "IfcPointOnCurve"; }

      IfcCurve* BasisCurve; // required parameter
      boost::optional<IfcParameterValue> PointParameter; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(BasisCurve);
         w.writeAttributeValueScalar(PointParameter);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
