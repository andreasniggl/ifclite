#ifndef IFC2X3_IFCSTRUCTURALSURFACECONNECTION_H_INCLUDED
#define IFC2X3_IFCSTRUCTURALSURFACECONNECTION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcStructuralConnection.h"

namespace ifc2x3
{
   class IfcStructuralSurfaceConnection : public IfcStructuralConnection
   {
   public:
      virtual ~IfcStructuralSurfaceConnection(){}

      IfcStructuralSurfaceConnection() = default;

      IfcStructuralSurfaceConnection(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcStructuralConnection(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcStructuralSurfaceConnection"; }


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