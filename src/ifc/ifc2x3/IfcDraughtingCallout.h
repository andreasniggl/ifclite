#ifndef IFC2X3_IFCDRAUGHTINGCALLOUT_H_INCLUDED
#define IFC2X3_IFCDRAUGHTINGCALLOUT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcDraughtingCalloutElement.h"

namespace ifc2x3
{
   class IfcDraughtingCallout : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcDraughtingCallout(){}

      IfcDraughtingCallout() = default;

      IfcDraughtingCallout(const std::vector<boost::optional<IfcDraughtingCalloutElement>>& _Contents)
         : IfcGeometricRepresentationItem(), Contents(_Contents) {}

      virtual std::string name() const { return "IfcDraughtingCallout"; }

      std::vector<boost::optional<IfcDraughtingCalloutElement>> Contents; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelectList<IfcDraughtingCalloutElementWriterVisitor>(Contents);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
