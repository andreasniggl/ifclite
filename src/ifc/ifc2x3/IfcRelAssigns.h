#ifndef IFC2X3_IFCRELASSIGNS_H_INCLUDED
#define IFC2X3_IFCRELASSIGNS_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelationship.h"
#include "IfcObjectDefinition.h"

namespace ifc2x3
{
   class IfcRelAssigns : public IfcRelationship
   {
   public:
      virtual ~IfcRelAssigns(){}

      IfcRelAssigns() = default;

      IfcRelAssigns(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObjectDefinition*>& _RelatedObjects)
         : IfcRelationship(_GlobalId, _OwnerHistory), RelatedObjects(_RelatedObjects) {}

      virtual std::string name() const { return "IfcRelAssigns"; }

      std::vector<IfcObjectDefinition*> RelatedObjects; // required parameter
      boost::optional<IfcObjectTypeEnum> RelatedObjectsType; // optional parameter

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
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif