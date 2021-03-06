// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"
#include "IfcActorSelect.h"
#include "IfcPerson.h"
#include "IfcCalendarDate.h"
#include "IfcCostValue.h"
#include "IfcCostValue.h"

namespace ifc2x3
{
   class IfcInventory : public IfcGroup
   {
   public:
      virtual ~IfcInventory(){}

      explicit IfcInventory() = default;

      explicit IfcInventory(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcInventoryTypeEnum& _InventoryType, const IfcActorSelect& _Jurisdiction, const std::vector<IfcPerson*>& _ResponsiblePersons, IfcCalendarDate* _LastUpdateDate)
         : IfcGroup(_GlobalId, _OwnerHistory), InventoryType(_InventoryType), Jurisdiction(_Jurisdiction), ResponsiblePersons(_ResponsiblePersons), LastUpdateDate(_LastUpdateDate) {}

      virtual std::string className() const { return "IfcInventory"; }

      boost::optional<IfcInventoryTypeEnum> InventoryType; // required parameter
      boost::optional<IfcActorSelect> Jurisdiction; // required parameter
      std::vector<IfcPerson*> ResponsiblePersons; // required parameter
      IfcCalendarDate* LastUpdateDate; // required parameter
      IfcCostValue* CurrentValue; // optional parameter
      IfcCostValue* OriginalValue; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(IfcInventoryTypeEnumStringMap, InventoryType);
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(Jurisdiction);
         w.writeAttributeInstance(ResponsiblePersons);
         w.writeAttributeInstance(LastUpdateDate);
         w.writeAttributeInstance(CurrentValue);
         w.writeAttributeInstance(OriginalValue);
         w.endEntity();
      }

   };

} // namespace ifc2x3

