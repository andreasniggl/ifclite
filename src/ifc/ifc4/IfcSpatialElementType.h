// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTypeProduct.h"

namespace ifc4
{
   class IfcSpatialElementType : public IfcTypeProduct
   {
   public:
      virtual ~IfcSpatialElementType(){}

      explicit IfcSpatialElementType() = default;

      explicit IfcSpatialElementType(const IfcGloballyUniqueId& _GlobalId)
         : IfcTypeProduct(_GlobalId) {}

      virtual std::string className() const { return "IfcSpatialElementType"; }

      boost::optional<IfcLabel> ElementType; // optional parameter

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
