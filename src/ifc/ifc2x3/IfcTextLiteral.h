// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcAxis2Placement.h"

namespace ifc2x3
{
   class IfcTextLiteral : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcTextLiteral(){}

      explicit IfcTextLiteral() = default;

      explicit IfcTextLiteral(const IfcPresentableText& _Literal, const IfcAxis2Placement& _Placement, const IfcTextPath& _Path)
         : IfcGeometricRepresentationItem(), Literal(_Literal), Placement(_Placement), Path(_Path) {}

      virtual std::string className() const { return "IfcTextLiteral"; }

      boost::optional<IfcPresentableText> Literal; // required parameter
      boost::optional<IfcAxis2Placement> Placement; // required parameter
      boost::optional<IfcTextPath> Path; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Literal);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(Placement);
         w.writeAttributeValue(IfcTextPathStringMap, Path);
         w.endEntity();
      }

   };

} // namespace ifc2x3

