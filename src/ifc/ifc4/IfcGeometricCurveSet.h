// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricSet.h"

namespace ifc4
{
   class IfcGeometricCurveSet : public IfcGeometricSet
   {
   public:
      virtual ~IfcGeometricCurveSet(){}

      explicit IfcGeometricCurveSet() = default;

      explicit IfcGeometricCurveSet(const std::vector< boost::optional<IfcGeometricSetSelect> >& _Elements)
         : IfcGeometricSet(_Elements) {}

      virtual std::string className() const { return "IfcGeometricCurveSet"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcGeometricSetSelectWriterVisitor>(Elements);
         w.endEntity();
      }

   };

} // namespace ifc4

