// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcCurve.h"

namespace ifc2x3
{
   class IfcGridAxis : public ifc::Entity
   {
   public:
      virtual ~IfcGridAxis(){}

      explicit IfcGridAxis() = default;

      explicit IfcGridAxis(IfcCurve* _AxisCurve, const IfcBoolean& _SameSense)
         : ifc::Entity(), AxisCurve(_AxisCurve), SameSense(_SameSense) {}

      virtual std::string className() const { return "IfcGridAxis"; }

      boost::optional<IfcLabel> AxisTag; // optional parameter
      IfcCurve* AxisCurve; // required parameter
      boost::optional<IfcBoolean> SameSense; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(AxisTag);
         w.writeAttributeInstance(AxisCurve);
         w.writeAttributeValue(SameSense);
         w.endEntity();
      }

   };

} // namespace ifc2x3

