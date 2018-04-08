// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedProperties.h"
#include "IfcSectionProperties.h"
#include "IfcReinforcementBarProperties.h"

namespace ifc4
{
   class IfcSectionReinforcementProperties : public IfcPreDefinedProperties
   {
   public:
      virtual ~IfcSectionReinforcementProperties(){}

      explicit IfcSectionReinforcementProperties() = default;

      explicit IfcSectionReinforcementProperties(const IfcLengthMeasure& _LongitudinalStartPosition, const IfcLengthMeasure& _LongitudinalEndPosition, const IfcReinforcingBarRoleEnum& _ReinforcementRole, IfcSectionProperties* _SectionDefinition, const std::vector<IfcReinforcementBarProperties*>& _CrossSectionReinforcementDefinitions)
         : IfcPreDefinedProperties(), LongitudinalStartPosition(_LongitudinalStartPosition), LongitudinalEndPosition(_LongitudinalEndPosition), ReinforcementRole(_ReinforcementRole), SectionDefinition(_SectionDefinition), CrossSectionReinforcementDefinitions(_CrossSectionReinforcementDefinitions) {}

      virtual std::string className() const { return "IfcSectionReinforcementProperties"; }

      boost::optional<IfcLengthMeasure> LongitudinalStartPosition; // required parameter
      boost::optional<IfcLengthMeasure> LongitudinalEndPosition; // required parameter
      boost::optional<IfcLengthMeasure> TransversePosition; // optional parameter
      boost::optional<IfcReinforcingBarRoleEnum> ReinforcementRole; // required parameter
      IfcSectionProperties* SectionDefinition; // required parameter
      std::vector<IfcReinforcementBarProperties*> CrossSectionReinforcementDefinitions; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(LongitudinalStartPosition);
         w.writeAttributeValue(LongitudinalEndPosition);
         w.writeAttributeValue(TransversePosition);
         w.writeAttributeValue(IfcReinforcingBarRoleEnumStringMap, ReinforcementRole);
         w.writeAttributeInstance(SectionDefinition);
         w.writeAttributeInstance(CrossSectionReinforcementDefinitions);
         w.endEntity();
      }

   };

} // namespace ifc4

