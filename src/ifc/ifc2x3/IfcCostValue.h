#ifndef IFC2X3_IFCCOSTVALUE_H_INCLUDED
#define IFC2X3_IFCCOSTVALUE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcAppliedValue.h"

namespace ifc2x3
{
   class IfcCostValue : public IfcAppliedValue
   {
   public:
      virtual ~IfcCostValue(){}

      IfcCostValue() = default;

      IfcCostValue(const IfcLabel& _CostType)
         : IfcAppliedValue(), CostType(_CostType) {}

      virtual std::string name() const { return "IfcCostValue"; }

      boost::optional<IfcLabel> CostType; // required parameter
      boost::optional<IfcText> Condition; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeSelect<IfcAppliedValueSelectWriterVisitor>(AppliedValue);
         w.writeAttributeInstance(UnitBasis);
         w.writeAttributeSelect<IfcDateTimeSelectWriterVisitor>(ApplicableDate);
         w.writeAttributeSelect<IfcDateTimeSelectWriterVisitor>(FixedUntilDate);
         w.writeAttributeValueScalar(CostType);
         w.writeAttributeValueScalar(Condition);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif