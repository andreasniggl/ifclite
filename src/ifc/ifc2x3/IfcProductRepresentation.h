// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcRepresentation.h"

namespace ifc2x3
{
   class IfcProductRepresentation : public ifc::Entity
   {
   public:
      virtual ~IfcProductRepresentation(){}

      explicit IfcProductRepresentation() = default;

      explicit IfcProductRepresentation(const std::vector<IfcRepresentation*>& _Representations)
         : ifc::Entity(), Representations(_Representations) {}

      virtual std::string className() const { return "IfcProductRepresentation"; }

      boost::optional<IfcLabel> Name; // optional parameter
      boost::optional<IfcText> Description; // optional parameter
      std::vector<IfcRepresentation*> Representations; // required parameter

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

