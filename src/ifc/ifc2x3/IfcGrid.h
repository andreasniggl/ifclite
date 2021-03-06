// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProduct.h"
#include "IfcGridAxis.h"
#include "IfcGridAxis.h"
#include "IfcGridAxis.h"

namespace ifc2x3
{
   class IfcGrid : public IfcProduct
   {
   public:
      virtual ~IfcGrid(){}

      explicit IfcGrid() = default;

      explicit IfcGrid(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcGridAxis*>& _UAxes, const std::vector<IfcGridAxis*>& _VAxes)
         : IfcProduct(_GlobalId, _OwnerHistory), UAxes(_UAxes), VAxes(_VAxes) {}

      virtual std::string className() const { return "IfcGrid"; }

      std::vector<IfcGridAxis*> UAxes; // required parameter
      std::vector<IfcGridAxis*> VAxes; // required parameter
      std::vector<IfcGridAxis*> WAxes; // optional parameter

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
         w.writeAttributeInstance(UAxes);
         w.writeAttributeInstance(VAxes);
         w.writeAttributeInstance(WAxes);
         w.endEntity();
      }

   };

} // namespace ifc2x3

