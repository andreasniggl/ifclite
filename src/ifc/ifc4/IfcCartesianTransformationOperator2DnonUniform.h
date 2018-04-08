// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcCartesianTransformationOperator2D.h"

namespace ifc4
{
   class IfcCartesianTransformationOperator2DnonUniform : public IfcCartesianTransformationOperator2D
   {
   public:
      virtual ~IfcCartesianTransformationOperator2DnonUniform(){}

      explicit IfcCartesianTransformationOperator2DnonUniform() = default;

      explicit IfcCartesianTransformationOperator2DnonUniform(IfcCartesianPoint* _LocalOrigin)
         : IfcCartesianTransformationOperator2D(_LocalOrigin) {}

      virtual std::string className() const { return "IfcCartesianTransformationOperator2DnonUniform"; }

      boost::optional<IfcReal> Scale2; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Axis1);
         w.writeAttributeInstance(Axis2);
         w.writeAttributeInstance(LocalOrigin);
         w.writeAttributeValue(Scale);
         w.writeAttributeValue(Scale2);
         w.endEntity();
      }

   };

} // namespace ifc4

