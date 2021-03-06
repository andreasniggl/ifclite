// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcDraughtingCalloutElement.h"

namespace ifc2x3
{
   class IfcDraughtingCallout : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcDraughtingCallout(){}

      explicit IfcDraughtingCallout() = default;

      explicit IfcDraughtingCallout(const std::vector< boost::optional<IfcDraughtingCalloutElement> >& _Contents)
         : IfcGeometricRepresentationItem(), Contents(_Contents) {}

      virtual std::string className() const { return "IfcDraughtingCallout"; }

      std::vector< boost::optional<IfcDraughtingCalloutElement> > Contents; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcDraughtingCalloutElementWriterVisitor>(Contents);
         w.endEntity();
      }

   };

} // namespace ifc2x3

