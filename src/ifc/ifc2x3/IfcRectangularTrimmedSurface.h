// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBoundedSurface.h"
#include "IfcSurface.h"

namespace ifc2x3
{
   class IfcRectangularTrimmedSurface : public IfcBoundedSurface
   {
   public:
      virtual ~IfcRectangularTrimmedSurface(){}

      explicit IfcRectangularTrimmedSurface() = default;

      explicit IfcRectangularTrimmedSurface(IfcSurface* _BasisSurface, const IfcParameterValue& _U1, const IfcParameterValue& _V1, const IfcParameterValue& _U2, const IfcParameterValue& _V2, const bool& _Usense, const bool& _Vsense)
         : IfcBoundedSurface(), BasisSurface(_BasisSurface), U1(_U1), V1(_V1), U2(_U2), V2(_V2), Usense(_Usense), Vsense(_Vsense) {}

      virtual std::string className() const { return "IfcRectangularTrimmedSurface"; }

      IfcSurface* BasisSurface; // required parameter
      boost::optional<IfcParameterValue> U1; // required parameter
      boost::optional<IfcParameterValue> V1; // required parameter
      boost::optional<IfcParameterValue> U2; // required parameter
      boost::optional<IfcParameterValue> V2; // required parameter
      boost::optional<bool> Usense; // required parameter
      boost::optional<bool> Vsense; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(BasisSurface);
         w.writeAttributeValue(U1);
         w.writeAttributeValue(V1);
         w.writeAttributeValue(U2);
         w.writeAttributeValue(V2);
         w.writeAttributeValue(Usense);
         w.writeAttributeValue(Vsense);
         w.endEntity();
      }

   };

} // namespace ifc2x3

