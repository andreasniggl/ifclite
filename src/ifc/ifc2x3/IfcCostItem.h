#ifndef IFC2X3_IFCCOSTITEM_H_INCLUDED
#define IFC2X3_IFCCOSTITEM_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"

namespace ifc2x3
{
   class IfcCostItem : public IfcControl
   {
   public:
      virtual ~IfcCostItem(){}

      IfcCostItem() = default;

      IfcCostItem(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcControl(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcCostItem"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
