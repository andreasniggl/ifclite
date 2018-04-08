#ifndef IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H_INCLUDED
#define IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcSectionProperties.h"
#include "IfcReinforcementBarProperties.h"

namespace ifc2x3
{
   class IfcSectionReinforcementProperties : public ifc::Entity
   {
   public:
      virtual ~IfcSectionReinforcementProperties(){}

      IfcSectionReinforcementProperties() = default;

      IfcSectionReinforcementProperties(const IfcLengthMeasure& _LongitudinalStartPosition, const IfcLengthMeasure& _LongitudinalEndPosition, const IfcReinforcingBarRoleEnum& _ReinforcementRole, IfcSectionProperties* _SectionDefinition, const std::vector<IfcReinforcementBarProperties*>& _CrossSectionReinforcementDefinitions)
         : ifc::Entity(), LongitudinalStartPosition(_LongitudinalStartPosition), LongitudinalEndPosition(_LongitudinalEndPosition), ReinforcementRole(_ReinforcementRole), SectionDefinition(_SectionDefinition), CrossSectionReinforcementDefinitions(_CrossSectionReinforcementDefinitions) {}

      virtual std::string name() const { return "IfcSectionReinforcementProperties"; }

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
         w.writeAttributeValueScalar(LongitudinalStartPosition);
         w.writeAttributeValueScalar(LongitudinalEndPosition);
         w.writeAttributeValueScalar(TransversePosition);
         w.writeAttributeValueEnumeration(IfcReinforcingBarRoleEnumStringMap, ReinforcementRole);
         w.writeAttributeInstance(SectionDefinition);
         w.writeAttributeInstanceList(CrossSectionReinforcementDefinitions);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif