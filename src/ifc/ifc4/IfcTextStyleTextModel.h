// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"
#include "IfcSizeSelect.h"
#include "IfcSizeSelect.h"
#include "IfcSizeSelect.h"
#include "IfcSizeSelect.h"

namespace ifc4
{
   class IfcTextStyleTextModel : public IfcPresentationItem
   {
   public:
      virtual ~IfcTextStyleTextModel(){}

      explicit IfcTextStyleTextModel() = default;

      virtual std::string className() const { return "IfcTextStyleTextModel"; }

      boost::optional<IfcSizeSelect> TextIndent; // optional parameter
      boost::optional<IfcTextAlignment> TextAlign; // optional parameter
      boost::optional<IfcTextDecoration> TextDecoration; // optional parameter
      boost::optional<IfcSizeSelect> LetterSpacing; // optional parameter
      boost::optional<IfcSizeSelect> WordSpacing; // optional parameter
      boost::optional<IfcTextTransformation> TextTransform; // optional parameter
      boost::optional<IfcSizeSelect> LineHeight; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(TextIndent);
         w.writeAttributeValue(TextAlign);
         w.writeAttributeValue(TextDecoration);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(LetterSpacing);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(WordSpacing);
         w.writeAttributeValue(TextTransform);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(LineHeight);
         w.endEntity();
      }

   };

} // namespace ifc4

