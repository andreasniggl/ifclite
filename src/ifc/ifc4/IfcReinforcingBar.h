// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcReinforcingElement.h"

namespace ifc4
{
   class IfcReinforcingBar : public IfcReinforcingElement
   {
   public:
      virtual ~IfcReinforcingBar(){}

      explicit IfcReinforcingBar() = default;

      explicit IfcReinforcingBar(const IfcGloballyUniqueId& _GlobalId)
         : IfcReinforcingElement(_GlobalId) {}

      virtual std::string className() const { return "IfcReinforcingBar"; }

      boost::optional<IfcPositiveLengthMeasure> NominalDiameter; // optional parameter
      boost::optional<IfcAreaMeasure> CrossSectionArea; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> BarLength; // optional parameter
      boost::optional<IfcReinforcingBarTypeEnum> PredefinedType; // optional parameter
      boost::optional<IfcReinforcingBarSurfaceEnum> BarSurface; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(SteelGrade);
         w.writeAttributeValue(NominalDiameter);
         w.writeAttributeValue(CrossSectionArea);
         w.writeAttributeValue(BarLength);
         w.writeAttributeValue(IfcReinforcingBarTypeEnumStringMap, PredefinedType);
         w.writeAttributeValue(IfcReinforcingBarSurfaceEnumStringMap, BarSurface);
         w.endEntity();
      }

   };

} // namespace ifc4

