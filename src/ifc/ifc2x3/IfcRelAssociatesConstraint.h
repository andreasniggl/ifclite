#ifndef IFC2X3_IFCRELASSOCIATESCONSTRAINT_H_INCLUDED
#define IFC2X3_IFCRELASSOCIATESCONSTRAINT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelAssociates.h"
#include "IfcConstraint.h"

namespace ifc2x3
{
   class IfcRelAssociatesConstraint : public IfcRelAssociates
   {
   public:
      virtual ~IfcRelAssociatesConstraint(){}

      IfcRelAssociatesConstraint() = default;

      IfcRelAssociatesConstraint(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcRoot*>& _RelatedObjects, const IfcLabel& _Intent, IfcConstraint* _RelatingConstraint)
         : IfcRelAssociates(_GlobalId, _OwnerHistory, _RelatedObjects), Intent(_Intent), RelatingConstraint(_RelatingConstraint) {}

      virtual std::string name() const { return "IfcRelAssociatesConstraint"; }

      boost::optional<IfcLabel> Intent; // required parameter
      IfcConstraint* RelatingConstraint; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeInstanceList(RelatedObjects);
         w.writeAttributeValueScalar(Intent);
         w.writeAttributeInstance(RelatingConstraint);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif