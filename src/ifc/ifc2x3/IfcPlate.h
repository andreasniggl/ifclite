#ifndef IFC2X3_IFCPLATE_H_INCLUDED
#define IFC2X3_IFCPLATE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcPlate : public IfcBuildingElement
   {
   public:
      virtual ~IfcPlate(){}

      IfcPlate() = default;

      IfcPlate(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcBuildingElement(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcPlate"; }


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
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
