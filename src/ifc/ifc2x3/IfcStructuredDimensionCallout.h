#ifndef IFC2X3_IFCSTRUCTUREDDIMENSIONCALLOUT_H_INCLUDED
#define IFC2X3_IFCSTRUCTUREDDIMENSIONCALLOUT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcDraughtingCallout.h"

namespace ifc2x3
{
   class IfcStructuredDimensionCallout : public IfcDraughtingCallout
   {
   public:
      virtual ~IfcStructuredDimensionCallout(){}

      IfcStructuredDimensionCallout() = default;

      IfcStructuredDimensionCallout(const std::vector<boost::optional<IfcDraughtingCalloutElement>>& _Contents)
         : IfcDraughtingCallout(_Contents) {}

      virtual std::string name() const { return "IfcStructuredDimensionCallout"; }


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