// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSpatialStructureElement.h"
#include "IfcPostalAddress.h"

namespace ifc4
{
   class IfcSite : public IfcSpatialStructureElement
   {
   public:
      virtual ~IfcSite(){}

      explicit IfcSite() = default;

      explicit IfcSite(const IfcGloballyUniqueId& _GlobalId)
         : IfcSpatialStructureElement(_GlobalId) {}

      virtual std::string className() const { return "IfcSite"; }

      std::vector<IfcCompoundPlaneAngleMeasure> RefLatitude; // optional parameter
      std::vector<IfcCompoundPlaneAngleMeasure> RefLongitude; // optional parameter
      boost::optional<IfcLengthMeasure> RefElevation; // optional parameter
      boost::optional<IfcLabel> LandTitleNumber; // optional parameter
      IfcPostalAddress* SiteAddress; // optional parameter

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
         w.writeAttributeValue(LongName);
         w.writeAttributeValue(IfcElementCompositionEnumStringMap, CompositionType);
         w.writeAttributeValue(RefLatitude);
         w.writeAttributeValue(RefLongitude);
         w.writeAttributeValue(RefElevation);
         w.writeAttributeValue(LandTitleNumber);
         w.writeAttributeInstance(SiteAddress);
         w.endEntity();
      }

   };

} // namespace ifc4

