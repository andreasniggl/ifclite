// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelAssociates.h"
#include "IfcProfileProperties.h"
#include "IfcShapeAspect.h"
#include "IfcOrientationSelect.h"

namespace ifc2x3
{
   class IfcRelAssociatesProfileProperties : public IfcRelAssociates
   {
   public:
      virtual ~IfcRelAssociatesProfileProperties(){}

      explicit IfcRelAssociatesProfileProperties() = default;

      explicit IfcRelAssociatesProfileProperties(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const std::vector<IfcRoot*>& _RelatedObjects, IfcProfileProperties* _RelatingProfileProperties)
         : IfcRelAssociates(_GlobalId, _OwnerHistory, _RelatedObjects), RelatingProfileProperties(_RelatingProfileProperties) {}

      virtual std::string className() const { return "IfcRelAssociatesProfileProperties"; }

      IfcProfileProperties* RelatingProfileProperties; // required parameter
      IfcShapeAspect* ProfileSectionLocation; // optional parameter
      boost::optional<IfcOrientationSelect> ProfileOrientation; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatedObjects);
         w.writeAttributeInstance(RelatingProfileProperties);
         w.writeAttributeInstance(ProfileSectionLocation);
         w.writeAttributeSelect<IfcOrientationSelectWriterVisitor>(ProfileOrientation);
         w.endEntity();
      }

   };

} // namespace ifc2x3

