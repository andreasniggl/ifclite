#ifndef IFC2X3_IFCRELOCCUPIESSPACES_H_INCLUDED
#define IFC2X3_IFCRELOCCUPIESSPACES_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelAssignsToActor.h"

namespace ifc2x3
{
   class IfcRelOccupiesSpaces : public IfcRelAssignsToActor
   {
   public:
      virtual ~IfcRelOccupiesSpaces(){}

      IfcRelOccupiesSpaces() = default;

      IfcRelOccupiesSpaces(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObjectDefinition*>& _RelatedObjects, IfcActor* _RelatingActor)
         : IfcRelAssignsToActor(_GlobalId, _OwnerHistory, _RelatedObjects, _RelatingActor) {}

      virtual std::string name() const { return "IfcRelOccupiesSpaces"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeInstanceList(RelatedObjects);
         w.writeAttributeValueEnumeration(IfcObjectTypeEnumStringMap, RelatedObjectsType);
         w.writeAttributeInstance(RelatingActor);
         w.writeAttributeInstance(ActingRole);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
