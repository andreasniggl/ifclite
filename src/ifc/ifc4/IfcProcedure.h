// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProcess.h"

namespace ifc4
{
   class IfcProcedure : public IfcProcess
   {
   public:
      virtual ~IfcProcedure(){}

      explicit IfcProcedure() = default;

      explicit IfcProcedure(const IfcGloballyUniqueId& _GlobalId)
         : IfcProcess(_GlobalId) {}

      virtual std::string className() const { return "IfcProcedure"; }

      boost::optional<IfcProcedureTypeEnum> PredefinedType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(Identification);
         w.writeAttributeValue(LongDescription);
         w.writeAttributeValue(IfcProcedureTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

