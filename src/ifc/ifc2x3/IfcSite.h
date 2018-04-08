#ifndef IFC2X3_IFCSITE_H_INCLUDED
#define IFC2X3_IFCSITE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcSpatialStructureElement.h"
#include "IfcPostalAddress.h"

namespace ifc2x3
{
   class IfcSite : public IfcSpatialStructureElement
   {
   public:
      virtual ~IfcSite(){}

      IfcSite() = default;

      IfcSite(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcElementCompositionEnum& _CompositionType)
         : IfcSpatialStructureElement(_GlobalId, _OwnerHistory, _CompositionType) {}

      virtual std::string name() const { return "IfcSite"; }

      std::vector<IfcCompoundPlaneAngleMeasure> RefLatitude; // optional parameter
      std::vector<IfcCompoundPlaneAngleMeasure> RefLongitude; // optional parameter
      boost::optional<IfcLengthMeasure> RefElevation; // optional parameter
      boost::optional<IfcLabel> LandTitleNumber; // optional parameter
      IfcPostalAddress* SiteAddress; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValueScalar(LongName);
         w.writeAttributeValueEnumeration(IfcElementCompositionEnumStringMap, CompositionType);
         w.writeAttributeValueList(RefLatitude);
         w.writeAttributeValueList(RefLongitude);
         w.writeAttributeValueScalar(RefElevation);
         w.writeAttributeValueScalar(LandTitleNumber);
         w.writeAttributeInstance(SiteAddress);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
