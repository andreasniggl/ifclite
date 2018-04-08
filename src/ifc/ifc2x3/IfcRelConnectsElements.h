#ifndef IFC2X3_IFCRELCONNECTSELEMENTS_H_INCLUDED
#define IFC2X3_IFCRELCONNECTSELEMENTS_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRelConnects.h"
#include "IfcConnectionGeometry.h"
#include "IfcElement.h"
#include "IfcElement.h"

namespace ifc2x3
{
   class IfcRelConnectsElements : public IfcRelConnects
   {
   public:
      virtual ~IfcRelConnectsElements(){}

      IfcRelConnectsElements() = default;

      IfcRelConnectsElements(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, IfcElement* _RelatingElement, IfcElement* _RelatedElement)
         : IfcRelConnects(_GlobalId, _OwnerHistory), RelatingElement(_RelatingElement), RelatedElement(_RelatedElement) {}

      virtual std::string name() const { return "IfcRelConnectsElements"; }

      IfcConnectionGeometry* ConnectionGeometry; // optional parameter
      IfcElement* RelatingElement; // required parameter
      IfcElement* RelatedElement; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeInstance(ConnectionGeometry);
         w.writeAttributeInstance(RelatingElement);
         w.writeAttributeInstance(RelatedElement);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif