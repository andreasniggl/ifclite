#ifndef IFC2X3_IFCSTRUCTURALCONNECTION_H_INCLUDED
#define IFC2X3_IFCSTRUCTURALCONNECTION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcStructuralItem.h"
#include "IfcBoundaryCondition.h"

namespace ifc2x3
{
   class IfcStructuralConnection : public IfcStructuralItem
   {
   public:
      virtual ~IfcStructuralConnection(){}

      IfcStructuralConnection() = default;

      IfcStructuralConnection(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcStructuralItem(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcStructuralConnection"; }

      IfcBoundaryCondition* AppliedCondition; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeInstance(AppliedCondition);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
