// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTextLiteral.h"
#include "IfcPlanarExtent.h"

namespace ifc4
{
   class IfcTextLiteralWithExtent : public IfcTextLiteral
   {
   public:
      virtual ~IfcTextLiteralWithExtent(){}

      explicit IfcTextLiteralWithExtent() = default;

      explicit IfcTextLiteralWithExtent(const IfcPresentableText& _Literal, const IfcAxis2Placement& _Placement, const IfcTextPath& _Path, IfcPlanarExtent* _Extent, const IfcBoxAlignment& _BoxAlignment)
         : IfcTextLiteral(_Literal, _Placement, _Path), Extent(_Extent), BoxAlignment(_BoxAlignment) {}

      virtual std::string className() const { return "IfcTextLiteralWithExtent"; }

      IfcPlanarExtent* Extent; // required parameter
      boost::optional<IfcBoxAlignment> BoxAlignment; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Literal);
         w.writeAttributeSelect<IfcAxis2PlacementWriterVisitor>(Placement);
         w.writeAttributeValue(IfcTextPathStringMap, Path);
         w.writeAttributeInstance(Extent);
         w.writeAttributeValue(BoxAlignment);
         w.endEntity();
      }

   };

} // namespace ifc4

