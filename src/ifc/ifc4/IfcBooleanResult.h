// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcBooleanOperand.h"
#include "IfcBooleanOperand.h"

namespace ifc4
{
   class IfcBooleanResult : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcBooleanResult(){}

      explicit IfcBooleanResult() = default;

      explicit IfcBooleanResult(const IfcBooleanOperator& _Operator, const IfcBooleanOperand& _FirstOperand, const IfcBooleanOperand& _SecondOperand)
         : IfcGeometricRepresentationItem(), Operator(_Operator), FirstOperand(_FirstOperand), SecondOperand(_SecondOperand) {}

      virtual std::string className() const { return "IfcBooleanResult"; }

      boost::optional<IfcBooleanOperator> Operator; // required parameter
      boost::optional<IfcBooleanOperand> FirstOperand; // required parameter
      boost::optional<IfcBooleanOperand> SecondOperand; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcBooleanOperatorStringMap, Operator);
         w.writeAttributeSelect<IfcBooleanOperandWriterVisitor>(FirstOperand);
         w.writeAttributeSelect<IfcBooleanOperandWriterVisitor>(SecondOperand);
         w.endEntity();
      }

   };

} // namespace ifc4

