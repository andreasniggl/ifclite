// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcCartesianPointList.h"

namespace ifc4
{
   class IfcCartesianPointList3D : public IfcCartesianPointList
   {
   public:
      virtual ~IfcCartesianPointList3D(){}

      explicit IfcCartesianPointList3D() = default;

      explicit IfcCartesianPointList3D(const std::vector< std::vector<IfcLengthMeasure> >& _CoordList)
         : IfcCartesianPointList(), CoordList(_CoordList) {}

      virtual std::string className() const { return "IfcCartesianPointList3D"; }

      std::vector< std::vector<IfcLengthMeasure> > CoordList; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(CoordList);
         w.endEntity();
      }

   };

} // namespace ifc4

