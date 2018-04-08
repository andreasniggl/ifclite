#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H_INCLUDED
#define IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationContext.h"
#include "IfcGeometricRepresentationContext.h"

namespace ifc2x3
{
   class IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext
   {
   public:
      virtual ~IfcGeometricRepresentationSubContext(){}

      IfcGeometricRepresentationSubContext() = default;

      IfcGeometricRepresentationSubContext(const IfcDimensionCount& _CoordinateSpaceDimension, const IfcAxis2Placement& _WorldCoordinateSystem, IfcGeometricRepresentationContext* _ParentContext, const IfcGeometricProjectionEnum& _TargetView)
         : IfcGeometricRepresentationContext(_CoordinateSpaceDimension, _WorldCoordinateSystem), ParentContext(_ParentContext), TargetView(_TargetView) {}

      virtual std::string name() const { return "IfcGeometricRepresentationSubContext"; }

      IfcGeometricRepresentationContext* ParentContext; // required parameter
      boost::optional<IfcPositiveRatioMeasure> TargetScale; // optional parameter
      boost::optional<IfcGeometricProjectionEnum> TargetView; // required parameter
      boost::optional<IfcLabel> UserDefinedTargetView; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(ContextIdentifier);
         w.writeAttributeValueScalar(ContextType);
         w.writeAttributeValueScalar(CoordinateSpaceDimension);
         w.writeAttributeValueScalar(Precision);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(WorldCoordinateSystem);
         w.writeAttributeInstance(TrueNorth);
         w.writeAttributeInstance(ParentContext);
         w.writeAttributeValueScalar(TargetScale);
         w.writeAttributeValueEnumeration(IfcGeometricProjectionEnumStringMap, TargetView);
         w.writeAttributeValueScalar(UserDefinedTargetView);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
