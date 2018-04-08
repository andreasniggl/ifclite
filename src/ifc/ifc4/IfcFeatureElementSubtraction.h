// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFeatureElement.h"

namespace ifc4
{
   class IfcFeatureElementSubtraction : public IfcFeatureElement
   {
   public:
      virtual ~IfcFeatureElementSubtraction(){}

      explicit IfcFeatureElementSubtraction() = default;

      explicit IfcFeatureElementSubtraction(const IfcGloballyUniqueId& _GlobalId)
         : IfcFeatureElement(_GlobalId) {}

      virtual std::string className() const { return "IfcFeatureElementSubtraction"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValue(Tag);
         w.endEntity();
      }

   };

} // namespace ifc4

