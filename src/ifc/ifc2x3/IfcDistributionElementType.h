// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementType.h"

namespace ifc2x3
{
   class IfcDistributionElementType : public IfcElementType
   {
   public:
      virtual ~IfcDistributionElementType(){}

      explicit IfcDistributionElementType() = default;

      explicit IfcDistributionElementType(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcElementType(_GlobalId, _OwnerHistory) {}

      virtual std::string className() const { return "IfcDistributionElementType"; }


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

} // namespace ifc2x3

