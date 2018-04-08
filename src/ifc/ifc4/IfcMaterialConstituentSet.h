// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcMaterialDefinition.h"
#include "IfcMaterialConstituent.h"

namespace ifc4
{
   class IfcMaterialConstituentSet : public IfcMaterialDefinition
   {
   public:
      virtual ~IfcMaterialConstituentSet(){}

      explicit IfcMaterialConstituentSet() = default;

      virtual std::string className() const { return "IfcMaterialConstituentSet"; }

      boost::optional<IfcLabel> Name; // optional parameter
      boost::optional<IfcText> Description; // optional parameter
      std::vector<IfcMaterialConstituent*> MaterialConstituents; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(MaterialConstituents);
         w.endEntity();
      }

   };

} // namespace ifc4
