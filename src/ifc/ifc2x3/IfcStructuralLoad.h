// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcStructuralLoad : public ifc::Entity
   {
   public:
      virtual ~IfcStructuralLoad(){}

      explicit IfcStructuralLoad() = default;

      virtual std::string className() const { return "IfcStructuralLoad"; }

      boost::optional<IfcLabel> Name; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

