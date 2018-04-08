#ifndef IFC2X3_IFCTIMESERIESREFERENCERELATIONSHIP_H_INCLUDED
#define IFC2X3_IFCTIMESERIESREFERENCERELATIONSHIP_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcTimeSeries.h"
#include "IfcDocumentSelect.h"

namespace ifc2x3
{
   class IfcTimeSeriesReferenceRelationship : public ifc::Entity
   {
   public:
      virtual ~IfcTimeSeriesReferenceRelationship(){}

      IfcTimeSeriesReferenceRelationship() = default;

      IfcTimeSeriesReferenceRelationship(IfcTimeSeries* _ReferencedTimeSeries, const std::vector<boost::optional<IfcDocumentSelect>>& _TimeSeriesReferences)
         : ifc::Entity(), ReferencedTimeSeries(_ReferencedTimeSeries), TimeSeriesReferences(_TimeSeriesReferences) {}

      virtual std::string name() const { return "IfcTimeSeriesReferenceRelationship"; }

      IfcTimeSeries* ReferencedTimeSeries; // required parameter
      std::vector<boost::optional<IfcDocumentSelect>> TimeSeriesReferences; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ReferencedTimeSeries);
         w.writeAttributeSelectList<IfcDocumentSelectWriterVisitor>(TimeSeriesReferences);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif