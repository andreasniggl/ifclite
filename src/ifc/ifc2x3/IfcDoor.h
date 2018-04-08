#ifndef IFC2X3_IFCDOOR_H_INCLUDED
#define IFC2X3_IFCDOOR_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcDoor : public IfcBuildingElement
   {
   public:
      virtual ~IfcDoor(){}

      IfcDoor() = default;

      IfcDoor(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcBuildingElement(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcDoor"; }

      boost::optional<IfcPositiveLengthMeasure> OverallHeight; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> OverallWidth; // optional parameter

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
         w.writeAttributeValueScalar(OverallHeight);
         w.writeAttributeValueScalar(OverallWidth);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif