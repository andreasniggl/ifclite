// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcLayeredItem.h"

namespace ifc2x3
{
   class IfcPresentationLayerAssignment : public ifc::Entity
   {
   public:
      virtual ~IfcPresentationLayerAssignment(){}

      explicit IfcPresentationLayerAssignment() = default;

      explicit IfcPresentationLayerAssignment(const IfcLabel& _Name, const std::vector< boost::optional<IfcLayeredItem> >& _AssignedItems)
         : ifc::Entity(), Name(_Name), AssignedItems(_AssignedItems) {}

      virtual std::string className() const { return "IfcPresentationLayerAssignment"; }

      boost::optional<IfcLabel> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter
      std::vector< boost::optional<IfcLayeredItem> > AssignedItems; // required parameter
      boost::optional<IfcIdentifier> Identifier; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeSelect<IfcLayeredItemWriterVisitor>(AssignedItems);
         w.writeAttributeValue(Identifier);
         w.endEntity();
      }

   };

} // namespace ifc2x3

