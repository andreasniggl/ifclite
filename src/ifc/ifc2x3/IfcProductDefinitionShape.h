// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProductRepresentation.h"

namespace ifc2x3
{
   class IfcProductDefinitionShape : public IfcProductRepresentation
   {
   public:
      virtual ~IfcProductDefinitionShape(){}

      explicit IfcProductDefinitionShape() = default;

      explicit IfcProductDefinitionShape(const std::vector<IfcRepresentation*>& _Representations)
         : IfcProductRepresentation(_Representations) {}

      virtual std::string className() const { return "IfcProductDefinitionShape"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(Representations);
         w.endEntity();
      }

   };

} // namespace ifc2x3

