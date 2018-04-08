#ifndef IFC2X3_IFCDRAUGHTINGPREDEFINEDTEXTFONT_H_INCLUDED
#define IFC2X3_IFCDRAUGHTINGPREDEFINEDTEXTFONT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedTextFont.h"

namespace ifc2x3
{
   class IfcDraughtingPreDefinedTextFont : public IfcPreDefinedTextFont
   {
   public:
      virtual ~IfcDraughtingPreDefinedTextFont(){}

      IfcDraughtingPreDefinedTextFont() = default;

      IfcDraughtingPreDefinedTextFont(const IfcLabel& _Name)
         : IfcPreDefinedTextFont(_Name) {}

      virtual std::string name() const { return "IfcDraughtingPreDefinedTextFont"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
