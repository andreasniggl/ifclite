// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcFeatureElement.h"

namespace ifc4
{
   class IfcSurfaceFeature : public IfcFeatureElement
   {
   public:
      virtual ~IfcSurfaceFeature(){}

      explicit IfcSurfaceFeature() = default;

      explicit IfcSurfaceFeature(const IfcGloballyUniqueId& _GlobalId)
         : IfcFeatureElement(_GlobalId) {}

      virtual std::string className() const { return "IfcSurfaceFeature"; }

      boost::optional<IfcSurfaceFeatureTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcSurfaceFeatureTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
