#ifndef IFC2X3_IFCBOOLEANCLIPPINGRESULT_H_INCLUDED
#define IFC2X3_IFCBOOLEANCLIPPINGRESULT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBooleanResult.h"

namespace ifc2x3
{
   class IfcBooleanClippingResult : public IfcBooleanResult
   {
   public:
      virtual ~IfcBooleanClippingResult(){}

      IfcBooleanClippingResult() = default;

      IfcBooleanClippingResult(const IfcBooleanOperator& _Operator, const IfcBooleanOperand& _FirstOperand, const IfcBooleanOperand& _SecondOperand)
         : IfcBooleanResult(_Operator, _FirstOperand, _SecondOperand) {}

      virtual std::string name() const { return "IfcBooleanClippingResult"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueEnumeration(IfcBooleanOperatorStringMap, Operator);
         w.writeAttributeSelect<IfcBooleanOperandWriterVisitor>(FirstOperand);
         w.writeAttributeSelect<IfcBooleanOperandWriterVisitor>(SecondOperand);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif