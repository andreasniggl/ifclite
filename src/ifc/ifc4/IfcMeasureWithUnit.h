// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcValue.h"
#include "IfcUnit.h"

namespace ifc4
{
   class IfcMeasureWithUnit : public ifc::Entity
   {
   public:
      virtual ~IfcMeasureWithUnit(){}

      explicit IfcMeasureWithUnit() = default;

      explicit IfcMeasureWithUnit(const IfcValue& _ValueComponent, const IfcUnit& _UnitComponent)
         : ifc::Entity(), ValueComponent(_ValueComponent), UnitComponent(_UnitComponent) {}

      virtual std::string className() const { return "IfcMeasureWithUnit"; }

      boost::optional<IfcValue> ValueComponent; // required parameter
      boost::optional<IfcUnit> UnitComponent; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcValueWriterVisitor>(ValueComponent);
         w.writeAttributeSelect<IfcUnitWriterVisitor>(UnitComponent);
         w.endEntity();
      }

   };

} // namespace ifc4

