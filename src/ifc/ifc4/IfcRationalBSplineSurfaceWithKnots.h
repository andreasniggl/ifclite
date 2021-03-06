// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBSplineSurfaceWithKnots.h"

namespace ifc4
{
   class IfcRationalBSplineSurfaceWithKnots : public IfcBSplineSurfaceWithKnots
   {
   public:
      virtual ~IfcRationalBSplineSurfaceWithKnots(){}

      explicit IfcRationalBSplineSurfaceWithKnots() = default;

      explicit IfcRationalBSplineSurfaceWithKnots(const IfcInteger& _UDegree, const IfcInteger& _VDegree, const std::vector< std::vector<IfcCartesianPoint*> >& _ControlPointsList, const IfcBSplineSurfaceForm& _SurfaceForm, const IfcLogical& _UClosed, const IfcLogical& _VClosed, const IfcLogical& _SelfIntersect, const std::vector<IfcInteger>& _UMultiplicities, const std::vector<IfcInteger>& _VMultiplicities, const std::vector<IfcParameterValue>& _UKnots, const std::vector<IfcParameterValue>& _VKnots, const IfcKnotType& _KnotSpec, const std::vector< std::vector<IfcReal> >& _WeightsData)
         : IfcBSplineSurfaceWithKnots(_UDegree, _VDegree, _ControlPointsList, _SurfaceForm, _UClosed, _VClosed, _SelfIntersect, _UMultiplicities, _VMultiplicities, _UKnots, _VKnots, _KnotSpec), WeightsData(_WeightsData) {}

      virtual std::string className() const { return "IfcRationalBSplineSurfaceWithKnots"; }

      std::vector< std::vector<IfcReal> > WeightsData; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(UDegree);
         w.writeAttributeValue(VDegree);
         w.writeAttributeInstance(ControlPointsList);
         w.writeAttributeValue(IfcBSplineSurfaceFormStringMap, SurfaceForm);
         w.writeAttributeValue(UClosed);
         w.writeAttributeValue(VClosed);
         w.writeAttributeValue(SelfIntersect);
         w.writeAttributeValue(UMultiplicities);
         w.writeAttributeValue(VMultiplicities);
         w.writeAttributeValue(UKnots);
         w.writeAttributeValue(VKnots);
         w.writeAttributeValue(IfcKnotTypeStringMap, KnotSpec);
         w.writeAttributeValue(WeightsData);
         w.endEntity();
      }

   };

} // namespace ifc4

