// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPlacement.h"
#include "IfcDirection.h"

namespace ifc4
{
   class IfcAxis1Placement : public IfcPlacement
   {
   public:
      virtual ~IfcAxis1Placement(){}

      explicit IfcAxis1Placement() = default;

      explicit IfcAxis1Placement(IfcCartesianPoint* _Location)
         : IfcPlacement(_Location) {}

      virtual std::string className() const { return "IfcAxis1Placement"; }

      IfcDirection* Axis; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Location);
         w.writeAttributeInstance(Axis);
         w.endEntity();
      }

   };

} // namespace ifc4

