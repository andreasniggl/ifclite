#ifndef IFC2X3_IFCRELASSIGNSTOGROUP_H_INCLUDED
#define IFC2X3_IFCRELASSIGNSTOGROUP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelAssigns.h"
#include "IfcGroup.h"

namespace ifc2x3
{
   class IfcRelAssignsToGroup : public IfcRelAssigns
   {
   public:
      virtual ~IfcRelAssignsToGroup(){}

      IfcRelAssignsToGroup() = default;

      IfcRelAssignsToGroup(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcObjectDefinition*>& _RelatedObjects, IfcGroup* _RelatingGroup)
         : IfcRelAssigns(_GlobalId, _OwnerHistory, _RelatedObjects), RelatingGroup(_RelatingGroup) {}

      virtual std::string name() const { return "IfcRelAssignsToGroup"; }

      IfcGroup* RelatingGroup; // required parameter

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
         w.writeAttributeInstance(RelatingGroup);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
