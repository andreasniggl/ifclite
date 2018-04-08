#ifndef IFC2X3_IFCSTAIR_H_INCLUDED
#define IFC2X3_IFCSTAIR_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcStair : public IfcBuildingElement
   {
   public:
      virtual ~IfcStair(){}

      IfcStair() = default;

      IfcStair(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcStairTypeEnum& _ShapeType)
         : IfcBuildingElement(_GlobalId, _OwnerHistory), ShapeType(_ShapeType) {}

      virtual std::string name() const { return "IfcStair"; }

      boost::optional<IfcStairTypeEnum> ShapeType; // required parameter

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
         w.writeAttributeValueScalar(Tag);
         w.writeAttributeValueEnumeration(IfcStairTypeEnumStringMap, ShapeType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
