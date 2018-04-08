#ifndef IFC2X3_IFCSTYLEDREPRESENTATION_H_INCLUDED
#define IFC2X3_IFCSTYLEDREPRESENTATION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcStyleModel.h"

namespace ifc2x3
{
   class IfcStyledRepresentation : public IfcStyleModel
   {
   public:
      virtual ~IfcStyledRepresentation(){}

      IfcStyledRepresentation() = default;

      IfcStyledRepresentation(IfcRepresentationContext* _ContextOfItems, const std::vector<IfcRepresentationItem*>& _Items)
         : IfcStyleModel(_ContextOfItems, _Items) {}

      virtual std::string name() const { return "IfcStyledRepresentation"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ContextOfItems);
         w.writeAttributeValueScalar(RepresentationIdentifier);
         w.writeAttributeValueScalar(RepresentationType);
         w.writeAttributeInstanceList(Items);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif