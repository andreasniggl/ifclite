// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedPropertySet.h"
#include "IfcShapeAspect.h"

namespace ifc4
{
   class IfcDoorPanelProperties : public IfcPreDefinedPropertySet
   {
   public:
      virtual ~IfcDoorPanelProperties(){}

      explicit IfcDoorPanelProperties() = default;

      explicit IfcDoorPanelProperties(const IfcGloballyUniqueId& _GlobalId, const IfcDoorPanelOperationEnum& _PanelOperation, const IfcDoorPanelPositionEnum& _PanelPosition)
         : IfcPreDefinedPropertySet(_GlobalId), PanelOperation(_PanelOperation), PanelPosition(_PanelPosition) {}

      virtual std::string className() const { return "IfcDoorPanelProperties"; }

      boost::optional<IfcPositiveLengthMeasure> PanelDepth; // optional parameter
      boost::optional<IfcDoorPanelOperationEnum> PanelOperation; // required parameter
      boost::optional<IfcNormalisedRatioMeasure> PanelWidth; // optional parameter
      boost::optional<IfcDoorPanelPositionEnum> PanelPosition; // required parameter
      IfcShapeAspect* ShapeAspectStyle; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(PanelDepth);
         w.writeAttributeValue(IfcDoorPanelOperationEnumStringMap, PanelOperation);
         w.writeAttributeValue(PanelWidth);
         w.writeAttributeValue(IfcDoorPanelPositionEnumStringMap, PanelPosition);
         w.writeAttributeInstance(ShapeAspectStyle);
         w.endEntity();
      }

   };

} // namespace ifc4

