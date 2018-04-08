// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElementType.h"
#include "IfcBendingParameterSelect.h"

namespace ifc4
{
   class IfcReinforcingBarType : public IfcReinforcingElementType
   {
   public:
      virtual ~IfcReinforcingBarType(){}

      explicit IfcReinforcingBarType() = default;

      explicit IfcReinforcingBarType(const IfcGloballyUniqueId& _GlobalId, const IfcReinforcingBarTypeEnum& _PredefinedType)
         : IfcReinforcingElementType(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcReinforcingBarType"; }

      boost::optional<IfcReinforcingBarTypeEnum> PredefinedType; // required parameter
      boost::optional<IfcPositiveLengthMeasure> NominalDiameter; // optional parameter
      boost::optional<IfcAreaMeasure> CrossSectionArea; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> BarLength; // optional parameter
      boost::optional<IfcReinforcingBarSurfaceEnum> BarSurface; // optional parameter
      boost::optional<IfcLabel> BendingShapeCode; // optional parameter
      std::vector< boost::optional<IfcBendingParameterSelect> > BendingParameters; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ApplicableOccurrence);
         w.writeAttributeInstance(HasPropertySets);
         w.writeAttributeInstance(RepresentationMaps);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(ElementType);
         w.writeAttributeValue(IfcReinforcingBarTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(NominalDiameter);
         w.writeAttributeValue(CrossSectionArea);
         w.writeAttributeValue(BarLength);
         w.writeAttributeValue(IfcReinforcingBarSurfaceEnumStringMap, BarSurface);
         w.writeAttributeValue(BendingShapeCode);
         w.writeAttributeSelect<IfcBendingParameterSelectWriterVisitor>(BendingParameters);
         w.endEntity();
      }

   };

} // namespace ifc4

