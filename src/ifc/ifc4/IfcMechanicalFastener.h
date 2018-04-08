// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcElementComponent.h"

namespace ifc4
{
   class IfcMechanicalFastener : public IfcElementComponent
   {
   public:
      virtual ~IfcMechanicalFastener(){}

      explicit IfcMechanicalFastener() = default;

      explicit IfcMechanicalFastener(const IfcGloballyUniqueId& _GlobalId)
         : IfcElementComponent(_GlobalId) {}

      virtual std::string className() const { return "IfcMechanicalFastener"; }

      boost::optional<IfcPositiveLengthMeasure> NominalDiameter; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> NominalLength; // optional parameter
      boost::optional<IfcMechanicalFastenerTypeEnum> PredefinedType; // optional parameter

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
         w.writeAttributeValue(NominalDiameter);
         w.writeAttributeValue(NominalLength);
         w.writeAttributeValue(IfcMechanicalFastenerTypeEnumStringMap, PredefinedType);
         w.endEntity();
      }

   };

} // namespace ifc4

