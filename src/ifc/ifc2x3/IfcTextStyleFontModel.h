#ifndef IFC2X3_IFCTEXTSTYLEFONTMODEL_H_INCLUDED
#define IFC2X3_IFCTEXTSTYLEFONTMODEL_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedTextFont.h"
#include "IfcSizeSelect.h"

namespace ifc2x3
{
   class IfcTextStyleFontModel : public IfcPreDefinedTextFont
   {
   public:
      virtual ~IfcTextStyleFontModel(){}

      IfcTextStyleFontModel() = default;

      IfcTextStyleFontModel(const IfcLabel& _Name, const IfcSizeSelect& _FontSize)
         : IfcPreDefinedTextFont(_Name), FontSize(_FontSize) {}

      virtual std::string name() const { return "IfcTextStyleFontModel"; }

      std::vector<IfcTextFontName> FontFamily; // optional parameter
      boost::optional<IfcFontStyle> FontStyle; // optional parameter
      boost::optional<IfcFontVariant> FontVariant; // optional parameter
      boost::optional<IfcFontWeight> FontWeight; // optional parameter
      boost::optional<IfcSizeSelect> FontSize; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueList(FontFamily);
         w.writeAttributeValueScalar(FontStyle);
         w.writeAttributeValueScalar(FontVariant);
         w.writeAttributeValueScalar(FontWeight);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(FontSize);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif