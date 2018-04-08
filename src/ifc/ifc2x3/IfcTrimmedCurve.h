#ifndef IFC2X3_IFCTRIMMEDCURVE_H_INCLUDED
#define IFC2X3_IFCTRIMMEDCURVE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBoundedCurve.h"
#include "IfcCurve.h"
#include "IfcTrimmingSelect.h"
#include "IfcTrimmingSelect.h"

namespace ifc2x3
{
   class IfcTrimmedCurve : public IfcBoundedCurve
   {
   public:
      virtual ~IfcTrimmedCurve(){}

      IfcTrimmedCurve() = default;

      IfcTrimmedCurve(IfcCurve* _BasisCurve, const std::vector<boost::optional<IfcTrimmingSelect>>& _Trim1, const std::vector<boost::optional<IfcTrimmingSelect>>& _Trim2, const bool& _SenseAgreement, const IfcTrimmingPreference& _MasterRepresentation)
         : IfcBoundedCurve(), BasisCurve(_BasisCurve), Trim1(_Trim1), Trim2(_Trim2), SenseAgreement(_SenseAgreement), MasterRepresentation(_MasterRepresentation) {}

      virtual std::string name() const { return "IfcTrimmedCurve"; }

      IfcCurve* BasisCurve; // required parameter
      std::vector<boost::optional<IfcTrimmingSelect>> Trim1; // required parameter
      std::vector<boost::optional<IfcTrimmingSelect>> Trim2; // required parameter
      boost::optional<bool> SenseAgreement; // required parameter
      boost::optional<IfcTrimmingPreference> MasterRepresentation; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(BasisCurve);
         w.writeAttributeSelectList<IfcTrimmingSelectWriterVisitor>(Trim1);
         w.writeAttributeSelectList<IfcTrimmingSelectWriterVisitor>(Trim2);
         w.writeAttributeValueScalar(SenseAgreement);
         w.writeAttributeValueEnumeration(IfcTrimmingPreferenceStringMap, MasterRepresentation);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif