// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementarySurface.h"

namespace ifc4
{
   class IfcToroidalSurface : public IfcElementarySurface
   {
   public:
      virtual ~IfcToroidalSurface(){}

      explicit IfcToroidalSurface() = default;

      explicit IfcToroidalSurface(IfcAxis2Placement3D* _Position, const IfcPositiveLengthMeasure& _MajorRadius, const IfcPositiveLengthMeasure& _MinorRadius)
         : IfcElementarySurface(_Position), MajorRadius(_MajorRadius), MinorRadius(_MinorRadius) {}

      virtual std::string className() const { return "IfcToroidalSurface"; }

      boost::optional<IfcPositiveLengthMeasure> MajorRadius; // required parameter
      boost::optional<IfcPositiveLengthMeasure> MinorRadius; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Position);
         w.writeAttributeValue(MajorRadius);
         w.writeAttributeValue(MinorRadius);
         w.endEntity();
      }

   };

} // namespace ifc4

