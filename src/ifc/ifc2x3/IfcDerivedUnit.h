// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcDerivedUnitElement.h"

namespace ifc2x3
{
   class IfcDerivedUnit : public ifc::Entity
   {
   public:
      virtual ~IfcDerivedUnit(){}

      explicit IfcDerivedUnit() = default;

      explicit IfcDerivedUnit(const std::vector<IfcDerivedUnitElement*>& _Elements, const IfcDerivedUnitEnum& _UnitType)
         : ifc::Entity(), Elements(_Elements), UnitType(_UnitType) {}

      virtual std::string className() const { return "IfcDerivedUnit"; }

      std::vector<IfcDerivedUnitElement*> Elements; // required parameter
      boost::optional<IfcDerivedUnitEnum> UnitType; // required parameter
      boost::optional<IfcLabel> UserDefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Elements);
         w.writeAttributeValue(IfcDerivedUnitEnumStringMap, UnitType);
         w.writeAttributeValue(UserDefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

