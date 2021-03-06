// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGroup.h"
#include "IfcCostValue.h"
#include "IfcCostValue.h"
#include "IfcCostValue.h"
#include "IfcActorSelect.h"
#include "IfcActorSelect.h"
#include "IfcPerson.h"
#include "IfcCostValue.h"

namespace ifc4
{
   class IfcAsset : public IfcGroup
   {
   public:
      virtual ~IfcAsset(){}

      explicit IfcAsset() = default;

      explicit IfcAsset(const IfcGloballyUniqueId& _GlobalId)
         : IfcGroup(_GlobalId) {}

      virtual std::string className() const { return "IfcAsset"; }

      boost::optional<IfcIdentifier> Identification; // optional parameter
      IfcCostValue* OriginalValue; // optional parameter
      IfcCostValue* CurrentValue; // optional parameter
      IfcCostValue* TotalReplacementCost; // optional parameter
      boost::optional<IfcActorSelect> Owner; // optional parameter
      boost::optional<IfcActorSelect> User; // optional parameter
      IfcPerson* ResponsiblePerson; // optional parameter
      boost::optional<IfcDate> IncorporationDate; // optional parameter
      IfcCostValue* DepreciatedValue; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(Identification);
         w.writeAttributeInstance(OriginalValue);
         w.writeAttributeInstance(CurrentValue);
         w.writeAttributeInstance(TotalReplacementCost);
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(Owner);
         w.writeAttributeSelect<IfcActorSelectWriterVisitor>(User);
         w.writeAttributeInstance(ResponsiblePerson);
         w.writeAttributeValue(IncorporationDate);
         w.writeAttributeInstance(DepreciatedValue);
         w.endEntity();
      }

   };

} // namespace ifc4

