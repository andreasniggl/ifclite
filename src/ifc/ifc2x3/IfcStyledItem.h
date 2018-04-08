#ifndef IFC2X3_IFCSTYLEDITEM_H_INCLUDED
#define IFC2X3_IFCSTYLEDITEM_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcRepresentationItem.h"
#include "IfcRepresentationItem.h"
#include "IfcPresentationStyleAssignment.h"

namespace ifc2x3
{
   class IfcStyledItem : public IfcRepresentationItem
   {
   public:
      virtual ~IfcStyledItem(){}

      IfcStyledItem() = default;

      IfcStyledItem(const std::vector<IfcPresentationStyleAssignment*>& _Styles)
         : IfcRepresentationItem(), Styles(_Styles) {}

      virtual std::string name() const { return "IfcStyledItem"; }

      IfcRepresentationItem* Item; // optional parameter
      std::vector<IfcPresentationStyleAssignment*> Styles; // required parameter
      boost::optional<IfcLabel> Name; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Item);
         w.writeAttributeInstanceList(Styles);
         w.writeAttributeValueScalar(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif