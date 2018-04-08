#ifndef IFC2X3_IFCDEFINEDSYMBOL_H_INCLUDED
#define IFC2X3_IFCDEFINEDSYMBOL_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcDefinedSymbolSelect.h"
#include "IfcCartesianTransformationOperator2D.h"

namespace ifc2x3
{
   class IfcDefinedSymbol : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcDefinedSymbol(){}

      IfcDefinedSymbol() = default;

      IfcDefinedSymbol(const IfcDefinedSymbolSelect& _Definition, IfcCartesianTransformationOperator2D* _Target)
         : IfcGeometricRepresentationItem(), Definition(_Definition), Target(_Target) {}

      virtual std::string name() const { return "IfcDefinedSymbol"; }

      boost::optional<IfcDefinedSymbolSelect> Definition; // required parameter
      IfcCartesianTransformationOperator2D* Target; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcDefinedSymbolSelectWriterVisitor>(Definition);
         w.writeAttributeInstance(Target);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
