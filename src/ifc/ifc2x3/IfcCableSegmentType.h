#ifndef IFC2X3_IFCCABLESEGMENTTYPE_H_INCLUDED
#define IFC2X3_IFCCABLESEGMENTTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcFlowSegmentType.h"

namespace ifc2x3
{
   class IfcCableSegmentType : public IfcFlowSegmentType
   {
   public:
      virtual ~IfcCableSegmentType(){}

      IfcCableSegmentType() = default;

      IfcCableSegmentType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcCableSegmentTypeEnum& _PredefinedType)
         : IfcFlowSegmentType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcCableSegmentType"; }

      boost::optional<IfcCableSegmentTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValueEnumeration(IfcCableSegmentTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif