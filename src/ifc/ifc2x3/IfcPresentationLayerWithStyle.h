#ifndef IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H_INCLUDED
#define IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPresentationLayerAssignment.h"
#include "IfcPresentationStyleSelect.h"

namespace ifc2x3
{
   class IfcPresentationLayerWithStyle : public IfcPresentationLayerAssignment
   {
   public:
      virtual ~IfcPresentationLayerWithStyle(){}

      IfcPresentationLayerWithStyle() = default;

      IfcPresentationLayerWithStyle(const IfcLabel& _Name, const std::vector<boost::optional<IfcLayeredItem>>& _AssignedItems, const bool& _LayerOn, const bool& _LayerFrozen, const bool& _LayerBlocked, const std::vector<boost::optional<IfcPresentationStyleSelect>>& _LayerStyles)
         : IfcPresentationLayerAssignment(_Name, _AssignedItems), LayerOn(_LayerOn), LayerFrozen(_LayerFrozen), LayerBlocked(_LayerBlocked), LayerStyles(_LayerStyles) {}

      virtual std::string name() const { return "IfcPresentationLayerWithStyle"; }

      boost::optional<bool> LayerOn; // required parameter
      boost::optional<bool> LayerFrozen; // required parameter
      boost::optional<bool> LayerBlocked; // required parameter
      std::vector<boost::optional<IfcPresentationStyleSelect>> LayerStyles; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeSelectList<IfcLayeredItemWriterVisitor>(AssignedItems);
         w.writeAttributeValueScalar(Identifier);
         w.writeAttributeValueScalar(LayerOn);
         w.writeAttributeValueScalar(LayerFrozen);
         w.writeAttributeValueScalar(LayerBlocked);
         w.writeAttributeSelectList<IfcPresentationStyleSelectWriterVisitor>(LayerStyles);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif