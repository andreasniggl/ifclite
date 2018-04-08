#ifndef IFC2X3_IFCDIMENSIONCURVEDIRECTEDCALLOUT_H_INCLUDED
#define IFC2X3_IFCDIMENSIONCURVEDIRECTEDCALLOUT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcDraughtingCallout.h"

namespace ifc2x3
{
   class IfcDimensionCurveDirectedCallout : public IfcDraughtingCallout
   {
   public:
      virtual ~IfcDimensionCurveDirectedCallout(){}

      IfcDimensionCurveDirectedCallout() = default;

      IfcDimensionCurveDirectedCallout(const std::vector<boost::optional<IfcDraughtingCalloutElement>>& _Contents)
         : IfcDraughtingCallout(_Contents) {}

      virtual std::string name() const { return "IfcDimensionCurveDirectedCallout"; }


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