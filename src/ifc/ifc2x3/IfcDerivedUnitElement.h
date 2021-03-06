// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcNamedUnit.h"

namespace ifc2x3
{
   class IfcDerivedUnitElement : public ifc::Entity
   {
   public:
      virtual ~IfcDerivedUnitElement(){}

      explicit IfcDerivedUnitElement() = default;

      explicit IfcDerivedUnitElement(IfcNamedUnit* _Unit, const int& _Exponent)
         : ifc::Entity(), Unit(_Unit), Exponent(_Exponent) {}

      virtual std::string className() const { return "IfcDerivedUnitElement"; }

      IfcNamedUnit* Unit; // required parameter
      boost::optional<int> Exponent; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Unit);
         w.writeAttributeValue(Exponent);
         w.endEntity();
      }

   };

} // namespace ifc2x3

