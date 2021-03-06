// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcResourceLevelRelationship.h"
#include "IfcMonetaryUnit.h"
#include "IfcMonetaryUnit.h"
#include "IfcLibraryInformation.h"

namespace ifc4
{
   class IfcCurrencyRelationship : public IfcResourceLevelRelationship
   {
   public:
      virtual ~IfcCurrencyRelationship(){}

      explicit IfcCurrencyRelationship() = default;

      explicit IfcCurrencyRelationship(IfcMonetaryUnit* _RelatingMonetaryUnit, IfcMonetaryUnit* _RelatedMonetaryUnit, const IfcPositiveRatioMeasure& _ExchangeRate)
         : IfcResourceLevelRelationship(), RelatingMonetaryUnit(_RelatingMonetaryUnit), RelatedMonetaryUnit(_RelatedMonetaryUnit), ExchangeRate(_ExchangeRate) {}

      virtual std::string className() const { return "IfcCurrencyRelationship"; }

      IfcMonetaryUnit* RelatingMonetaryUnit; // required parameter
      IfcMonetaryUnit* RelatedMonetaryUnit; // required parameter
      boost::optional<IfcPositiveRatioMeasure> ExchangeRate; // required parameter
      boost::optional<IfcDateTime> RateDateTime; // optional parameter
      IfcLibraryInformation* RateSource; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingMonetaryUnit);
         w.writeAttributeInstance(RelatedMonetaryUnit);
         w.writeAttributeValue(ExchangeRate);
         w.writeAttributeValue(RateDateTime);
         w.writeAttributeInstance(RateSource);
         w.endEntity();
      }

   };

} // namespace ifc4

