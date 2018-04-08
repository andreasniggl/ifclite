// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedItem.h"

namespace ifc4
{
   class IfcPreDefinedColour : public IfcPreDefinedItem
   {
   public:
      virtual ~IfcPreDefinedColour(){}

      explicit IfcPreDefinedColour() = default;

      explicit IfcPreDefinedColour(const IfcLabel& _Name)
         : IfcPreDefinedItem(_Name) {}

      virtual std::string className() const { return "IfcPreDefinedColour"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc4
