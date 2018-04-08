// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConnectionGeometry.h"
#include "IfcAxis2Placement.h"
#include "IfcAxis2Placement.h"
#include "IfcProfileDef.h"

namespace ifc2x3
{
   class IfcConnectionPortGeometry : public IfcConnectionGeometry
   {
   public:
      virtual ~IfcConnectionPortGeometry(){}

      explicit IfcConnectionPortGeometry() = default;

      explicit IfcConnectionPortGeometry(const IfcAxis2Placement& _LocationAtRelatingElement, IfcProfileDef* _ProfileOfPort)
         : IfcConnectionGeometry(), LocationAtRelatingElement(_LocationAtRelatingElement), ProfileOfPort(_ProfileOfPort) {}

      virtual std::string className() const { return "IfcConnectionPortGeometry"; }

      boost::optional<IfcAxis2Placement> LocationAtRelatingElement; // required parameter
      boost::optional<IfcAxis2Placement> LocationAtRelatedElement; // optional parameter
      IfcProfileDef* ProfileOfPort; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(LocationAtRelatingElement);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(LocationAtRelatedElement);
         w.writeAttributeInstance(ProfileOfPort);
         w.endEntity();
      }

   };

} // namespace ifc2x3

