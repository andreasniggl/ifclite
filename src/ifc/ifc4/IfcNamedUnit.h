// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcDimensionalExponents.h"

namespace ifc4
{
   class IfcNamedUnit : public ifc::Entity
   {
   public:
      virtual ~IfcNamedUnit(){}

      explicit IfcNamedUnit() = default;

      explicit IfcNamedUnit(IfcDimensionalExponents* _Dimensions, const IfcUnitEnum& _UnitType)
         : ifc::Entity(), Dimensions(_Dimensions), UnitType(_UnitType) {}

      virtual std::string className() const { return "IfcNamedUnit"; }

      IfcDimensionalExponents* Dimensions; // required parameter
      boost::optional<IfcUnitEnum> UnitType; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Dimensions,true);
         w.writeAttributeValue(IfcUnitEnumStringMap, UnitType);
         w.endEntity();
      }

   };

} // namespace ifc4

