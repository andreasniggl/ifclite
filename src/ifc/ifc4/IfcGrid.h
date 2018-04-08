// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcProduct.h"
#include "IfcGridAxis.h"
#include "IfcGridAxis.h"
#include "IfcGridAxis.h"

namespace ifc4
{
   class IfcGrid : public IfcProduct
   {
   public:
      virtual ~IfcGrid(){}

      explicit IfcGrid() = default;

      explicit IfcGrid(const IfcGloballyUniqueId& _GlobalId, const std::vector<IfcGridAxis*>& _UAxes, const std::vector<IfcGridAxis*>& _VAxes)
         : IfcProduct(_GlobalId), UAxes(_UAxes), VAxes(_VAxes) {}

      virtual std::string className() const { return "IfcGrid"; }

      std::vector<IfcGridAxis*> UAxes; // required parameter
      std::vector<IfcGridAxis*> VAxes; // required parameter
      std::vector<IfcGridAxis*> WAxes; // optional parameter
      boost::optional<IfcGridTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(IfcGridTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4
