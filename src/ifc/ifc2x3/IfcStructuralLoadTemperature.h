// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcStructuralLoadStatic.h"

namespace ifc2x3
{
   class IfcStructuralLoadTemperature : public IfcStructuralLoadStatic
   {
   public:
      virtual ~IfcStructuralLoadTemperature(){}

      explicit IfcStructuralLoadTemperature() = default;

      virtual std::string className() const { return "IfcStructuralLoadTemperature"; }

      boost::optional<IfcThermodynamicTemperatureMeasure> DeltaT_Constant; // optional parameter
      boost::optional<IfcThermodynamicTemperatureMeasure> DeltaT_Y; // optional parameter
      boost::optional<IfcThermodynamicTemperatureMeasure> DeltaT_Z; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(DeltaT_Constant);
         w.writeAttributeValue(DeltaT_Y);
         w.writeAttributeValue(DeltaT_Z);
         w.endEntity();
      }

   };

} // namespace ifc2x3

