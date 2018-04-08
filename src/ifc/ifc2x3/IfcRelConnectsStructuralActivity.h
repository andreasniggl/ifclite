#ifndef IFC2X3_IFCRELCONNECTSSTRUCTURALACTIVITY_H_INCLUDED
#define IFC2X3_IFCRELCONNECTSSTRUCTURALACTIVITY_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelConnects.h"
#include "IfcStructuralActivityAssignmentSelect.h"
#include "IfcStructuralActivity.h"

namespace ifc2x3
{
   class IfcRelConnectsStructuralActivity : public IfcRelConnects
   {
   public:
      virtual ~IfcRelConnectsStructuralActivity(){}

      IfcRelConnectsStructuralActivity() = default;

      IfcRelConnectsStructuralActivity(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcStructuralActivityAssignmentSelect& _RelatingElement, IfcStructuralActivity* _RelatedStructuralActivity)
         : IfcRelConnects(_GlobalId, _OwnerHistory), RelatingElement(_RelatingElement), RelatedStructuralActivity(_RelatedStructuralActivity) {}

      virtual std::string name() const { return "IfcRelConnectsStructuralActivity"; }

      boost::optional<IfcStructuralActivityAssignmentSelect> RelatingElement; // required parameter
      IfcStructuralActivity* RelatedStructuralActivity; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeSelect<IfcStructuralActivityAssignmentSelectWriterVisitor>(RelatingElement);
         w.writeAttributeInstance(RelatedStructuralActivity);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
