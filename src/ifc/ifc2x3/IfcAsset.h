// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"
#include "IfcCostValue.h"
#include "IfcCostValue.h"
#include "IfcCostValue.h"
#include "IfcActorSelect.h"
#include "IfcActorSelect.h"
#include "IfcPerson.h"
#include "IfcCalendarDate.h"
#include "IfcCostValue.h"

namespace ifc2x3
{
   class IfcAsset : public IfcGroup
   {
   public:
      virtual ~IfcAsset(){}

      explicit IfcAsset() = default;

      explicit IfcAsset(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcIdentifier& _AssetID, IfcCostValue* _OriginalValue, IfcCostValue* _CurrentValue, IfcCostValue* _TotalReplacementCost, const IfcActorSelect& _Owner, const IfcActorSelect& _User, IfcPerson* _ResponsiblePerson, IfcCalendarDate* _IncorporationDate, IfcCostValue* _DepreciatedValue)
         : IfcGroup(_GlobalId, _OwnerHistory), AssetID(_AssetID), OriginalValue(_OriginalValue), CurrentValue(_CurrentValue), TotalReplacementCost(_TotalReplacementCost), Owner(_Owner), User(_User), ResponsiblePerson(_ResponsiblePerson), IncorporationDate(_IncorporationDate), DepreciatedValue(_DepreciatedValue) {}

      virtual std::string className() const { return "IfcAsset"; }

      boost::optional<IfcIdentifier> AssetID; // required parameter
      IfcCostValue* OriginalValue; // required parameter
      IfcCostValue* CurrentValue; // required parameter
      IfcCostValue* TotalReplacementCost; // required parameter
      boost::optional<IfcActorSelect> Owner; // required parameter
      boost::optional<IfcActorSelect> User; // required parameter
      IfcPerson* ResponsiblePerson; // required parameter
      IfcCalendarDate* IncorporationDate; // required parameter
      IfcCostValue* DepreciatedValue; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(AssetID);
         w.writeAttributeInstance(OriginalValue);
         w.writeAttributeInstance(CurrentValue);
         w.writeAttributeInstance(TotalReplacementCost);
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(Owner);
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(User);
         w.writeAttributeInstance(ResponsiblePerson);
         w.writeAttributeInstance(IncorporationDate);
         w.writeAttributeInstance(DepreciatedValue);
         w.endEntity();
      }

   };

} // namespace ifc2x3

