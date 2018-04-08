// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"
#include "IfcColour.h"
#include "IfcColour.h"

namespace ifc4
{
   class IfcTextStyleForDefinedFont : public IfcPresentationItem
   {
   public:
      virtual ~IfcTextStyleForDefinedFont(){}

      explicit IfcTextStyleForDefinedFont() = default;

      explicit IfcTextStyleForDefinedFont(const IfcColour& _Colour)
         : IfcPresentationItem(), Colour(_Colour) {}

      virtual std::string className() const { return "IfcTextStyleForDefinedFont"; }

      boost::optional<IfcColour> Colour; // required parameter
      boost::optional<IfcColour> BackgroundColour; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcColourWriterVisitor>(Colour);
         w.writeAttributeSelect<IfcColourWriterVisitor>(BackgroundColour);
         w.endEntity();
      }

   };

} // namespace ifc4

