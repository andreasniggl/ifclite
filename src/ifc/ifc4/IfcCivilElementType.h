// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementType.h"

namespace ifc4
{
   class IfcCivilElementType : public IfcElementType
   {
   public:
      virtual ~IfcCivilElementType(){}

      explicit IfcCivilElementType() = default;

      explicit IfcCivilElementType(const IfcGloballyUniqueId& _GlobalId)
         : IfcElementType(_GlobalId) {}

      virtual std::string className() const { return "IfcCivilElementType"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ApplicableOccurrence);
         w.writeAttributeInstance(HasPropertySets);
         w.writeAttributeInstance(RepresentationMaps);
         w.writeAttributeValue(Tag);
         w.writeAttributeValue(ElementType);
         w.endEntity();
      }

   };

} // namespace ifc4

