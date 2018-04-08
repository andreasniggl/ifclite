// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationStyle.h"
#include "IfcSurfaceStyleElementSelect.h"

namespace ifc4
{
   class IfcSurfaceStyle : public IfcPresentationStyle
   {
   public:
      virtual ~IfcSurfaceStyle(){}

      explicit IfcSurfaceStyle() = default;

      explicit IfcSurfaceStyle(const IfcSurfaceSide& _Side, const std::vector< boost::optional<IfcSurfaceStyleElementSelect> >& _Styles)
         : IfcPresentationStyle(), Side(_Side), Styles(_Styles) {}

      virtual std::string className() const { return "IfcSurfaceStyle"; }

      boost::optional<IfcSurfaceSide> Side; // required parameter
      std::vector< boost::optional<IfcSurfaceStyleElementSelect> > Styles; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(IfcSurfaceSideStringMap, Side);
         w.writeAttributeSelect<IfcSurfaceStyleElementSelectWriterVisitor>(Styles);
         w.endEntity();
      }

   };

} // namespace ifc4
