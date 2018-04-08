// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRepresentationItem.h"
#include "IfcRepresentationMap.h"
#include "IfcCartesianTransformationOperator.h"

namespace ifc2x3
{
   class IfcMappedItem : public IfcRepresentationItem
   {
   public:
      virtual ~IfcMappedItem(){}

      explicit IfcMappedItem() = default;

      explicit IfcMappedItem(IfcRepresentationMap* _MappingSource, IfcCartesianTransformationOperator* _MappingTarget)
         : IfcRepresentationItem(), MappingSource(_MappingSource), MappingTarget(_MappingTarget) {}

      virtual std::string className() const { return "IfcMappedItem"; }

      IfcRepresentationMap* MappingSource; // required parameter
      IfcCartesianTransformationOperator* MappingTarget; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(MappingSource);
         w.writeAttributeInstance(MappingTarget);
         w.endEntity();
      }

   };

} // namespace ifc2x3

