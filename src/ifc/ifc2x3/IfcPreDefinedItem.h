// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcPreDefinedItem : public ifc::Entity
   {
   public:
      virtual ~IfcPreDefinedItem(){}

      explicit IfcPreDefinedItem() = default;

      explicit IfcPreDefinedItem(const IfcLabel& _Name)
         : ifc::Entity(), Name(_Name) {}

      virtual std::string className() const { return "IfcPreDefinedItem"; }

      boost::optional<IfcLabel> Name; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

