#ifndef IFC2X3_IFCPROCEDURE_H_INCLUDED
#define IFC2X3_IFCPROCEDURE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcProcess.h"

namespace ifc2x3
{
   class IfcProcedure : public IfcProcess
   {
   public:
      virtual ~IfcProcedure(){}

      IfcProcedure() = default;

      IfcProcedure(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcIdentifier& _ProcedureID, const IfcProcedureTypeEnum& _ProcedureType)
         : IfcProcess(_GlobalId, _OwnerHistory), ProcedureID(_ProcedureID), ProcedureType(_ProcedureType) {}

      virtual std::string name() const { return "IfcProcedure"; }

      boost::optional<IfcIdentifier> ProcedureID; // required parameter
      boost::optional<IfcProcedureTypeEnum> ProcedureType; // required parameter
      boost::optional<IfcLabel> UserDefinedProcedureType; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeValueScalar(ProcedureID);
         w.writeAttributeValueEnumeration(IfcProcedureTypeEnumStringMap, ProcedureType);
         w.writeAttributeValueScalar(UserDefinedProcedureType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif