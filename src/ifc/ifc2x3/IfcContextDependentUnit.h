// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcNamedUnit.h"

namespace ifc2x3
{
   class IfcContextDependentUnit : public IfcNamedUnit
   {
   public:
      virtual ~IfcContextDependentUnit(){}

      explicit IfcContextDependentUnit() = default;

      explicit IfcContextDependentUnit(IfcDimensionalExponents* _Dimensions, const IfcUnitEnum& _UnitType, const IfcLabel& _Name)
         : IfcNamedUnit(_Dimensions, _UnitType), Name(_Name) {}

      virtual std::string className() const { return "IfcContextDependentUnit"; }

      boost::optional<IfcLabel> Name; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Dimensions,true);
         w.writeAttributeValue(IfcUnitEnumStringMap, UnitType);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

