#ifndef IFC2X3_IFCDISTRIBUTIONELEMENTTYPE_H_INCLUDED
#define IFC2X3_IFCDISTRIBUTIONELEMENTTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcElementType.h"

namespace ifc2x3
{
   class IfcDistributionElementType : public IfcElementType
   {
   public:
      virtual ~IfcDistributionElementType(){}

      IfcDistributionElementType() = default;

      IfcDistributionElementType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcElementType(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcDistributionElementType"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ApplicableOccurrence);
         w.writeAttributeInstanceList(HasPropertySets);
         w.writeAttributeInstanceList(RepresentationMaps);
         w.writeAttributeValueScalar(Tag);
         w.writeAttributeValueScalar(ElementType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
