// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedSymbol.h"

namespace ifc2x3
{
   class IfcPreDefinedTerminatorSymbol : public IfcPreDefinedSymbol
   {
   public:
      virtual ~IfcPreDefinedTerminatorSymbol(){}

      explicit IfcPreDefinedTerminatorSymbol() = default;

      explicit IfcPreDefinedTerminatorSymbol(const IfcLabel& _Name)
         : IfcPreDefinedSymbol(_Name) {}

      virtual std::string className() const { return "IfcPreDefinedTerminatorSymbol"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

