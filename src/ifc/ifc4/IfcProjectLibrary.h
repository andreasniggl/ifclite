// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcContext.h"

namespace ifc4
{
   class IfcProjectLibrary : public IfcContext
   {
   public:
      virtual ~IfcProjectLibrary(){}

      explicit IfcProjectLibrary() = default;

      explicit IfcProjectLibrary(const IfcGloballyUniqueId& _GlobalId)
         : IfcContext(_GlobalId) {}

      virtual std::string className() const { return "IfcProjectLibrary"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(LongName);
         w.writeAttributeValue(Phase);
         w.writeAttributeInstance(RepresentationContexts);
         w.writeAttributeInstance(UnitsInContext);
         w.endEntity();
      }

   };

} // namespace ifc4

