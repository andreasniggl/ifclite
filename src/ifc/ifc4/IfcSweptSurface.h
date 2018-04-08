// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSurface.h"
#include "IfcProfileDef.h"
#include "IfcAxis2Placement3D.h"

namespace ifc4
{
   class IfcSweptSurface : public IfcSurface
   {
   public:
      virtual ~IfcSweptSurface(){}

      explicit IfcSweptSurface() = default;

      explicit IfcSweptSurface(IfcProfileDef* _SweptCurve)
         : IfcSurface(), SweptCurve(_SweptCurve) {}

      virtual std::string className() const { return "IfcSweptSurface"; }

      IfcProfileDef* SweptCurve; // required parameter
      IfcAxis2Placement3D* Position; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SweptCurve);
         w.writeAttributeInstance(Position);
         w.endEntity();
      }

   };

} // namespace ifc4

