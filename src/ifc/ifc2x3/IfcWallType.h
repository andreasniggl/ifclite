#ifndef IFC2X3_IFCWALLTYPE_H_INCLUDED
#define IFC2X3_IFCWALLTYPE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElementType.h"

namespace ifc2x3
{
   class IfcWallType : public IfcBuildingElementType
   {
   public:
      virtual ~IfcWallType(){}

      IfcWallType() = default;

      IfcWallType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcWallTypeEnum& _PredefinedType)
         : IfcBuildingElementType(_GlobalId, _OwnerHistory), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcWallType"; }

      boost::optional<IfcWallTypeEnum> PredefinedType; // required parameter

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
         w.writeAttributeValueEnumeration(IfcWallTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif