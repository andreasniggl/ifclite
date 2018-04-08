// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"
#include "IfcSpatialStructureElement.h"

namespace ifc2x3
{
   class IfcSpaceProgram : public IfcControl
   {
   public:
      virtual ~IfcSpaceProgram(){}

      explicit IfcSpaceProgram() = default;

      explicit IfcSpaceProgram(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcIdentifier& _SpaceProgramIdentifier, const IfcAreaMeasure& _StandardRequiredArea)
         : IfcControl(_GlobalId, _OwnerHistory), SpaceProgramIdentifier(_SpaceProgramIdentifier), StandardRequiredArea(_StandardRequiredArea) {}

      virtual std::string className() const { return "IfcSpaceProgram"; }

      boost::optional<IfcIdentifier> SpaceProgramIdentifier; // required parameter
      boost::optional<IfcAreaMeasure> MaxRequiredArea; // optional parameter
      boost::optional<IfcAreaMeasure> MinRequiredArea; // optional parameter
      IfcSpatialStructureElement* RequestedLocation; // optional parameter
      boost::optional<IfcAreaMeasure> StandardRequiredArea; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(SpaceProgramIdentifier);
         w.writeAttributeValue(MaxRequiredArea);
         w.writeAttributeValue(MinRequiredArea);
         w.writeAttributeInstance(RequestedLocation);
         w.writeAttributeValue(StandardRequiredArea);
         w.endEntity();
      }

   };

} // namespace ifc2x3

