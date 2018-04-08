#ifndef IFC2X3_IFCSURFACESTYLE_H_INCLUDED
#define IFC2X3_IFCSURFACESTYLE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPresentationStyle.h"
#include "IfcSurfaceStyleElementSelect.h"

namespace ifc2x3
{
   class IfcSurfaceStyle : public IfcPresentationStyle
   {
   public:
      virtual ~IfcSurfaceStyle(){}

      IfcSurfaceStyle() = default;

      IfcSurfaceStyle(const IfcSurfaceSide& _Side, const std::vector<boost::optional<IfcSurfaceStyleElementSelect>>& _Styles)
         : IfcPresentationStyle(), Side(_Side), Styles(_Styles) {}

      virtual std::string name() const { return "IfcSurfaceStyle"; }

      boost::optional<IfcSurfaceSide> Side; // required parameter
      std::vector<boost::optional<IfcSurfaceStyleElementSelect>> Styles; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueEnumeration(IfcSurfaceSideStringMap, Side);
         w.writeAttributeSelectList<IfcSurfaceStyleElementSelectWriterVisitor>(Styles);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
