#ifndef IFC2X3_IFCPRESENTATIONLAYERASSIGNMENT_H_INCLUDED
#define IFC2X3_IFCPRESENTATIONLAYERASSIGNMENT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcLayeredItem.h"

namespace ifc2x3
{
   class IfcPresentationLayerAssignment : public ifc::Entity
   {
   public:
      virtual ~IfcPresentationLayerAssignment(){}

      IfcPresentationLayerAssignment() = default;

      IfcPresentationLayerAssignment(const IfcLabel& _Name, const std::vector<boost::optional<IfcLayeredItem>>& _AssignedItems)
         : ifc::Entity(), Name(_Name), AssignedItems(_AssignedItems) {}

      virtual std::string name() const { return "IfcPresentationLayerAssignment"; }

      boost::optional<IfcLabel> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter
      std::vector<boost::optional<IfcLayeredItem>> AssignedItems; // required parameter
      boost::optional<IfcIdentifier> Identifier; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeSelectList<IfcLayeredItemWriterVisitor>(AssignedItems);
         w.writeAttributeValueScalar(Identifier);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
