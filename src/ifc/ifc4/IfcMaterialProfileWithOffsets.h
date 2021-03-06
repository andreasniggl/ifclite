// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcMaterialProfile.h"

namespace ifc4
{
   class IfcMaterialProfileWithOffsets : public IfcMaterialProfile
   {
   public:
      virtual ~IfcMaterialProfileWithOffsets(){}

      explicit IfcMaterialProfileWithOffsets() = default;

      explicit IfcMaterialProfileWithOffsets(IfcProfileDef* _Profile, const std::vector<IfcLengthMeasure>& _OffsetValues)
         : IfcMaterialProfile(_Profile), OffsetValues(_OffsetValues) {}

      virtual std::string className() const { return "IfcMaterialProfileWithOffsets"; }

      std::vector<IfcLengthMeasure> OffsetValues; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(Material);
         w.writeAttributeInstance(Profile);
         w.writeAttributeValue(Priority);
         w.writeAttributeValue(Category);
         w.writeAttributeValue(OffsetValues);
         w.endEntity();
      }

   };

} // namespace ifc4

