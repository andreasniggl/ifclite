#ifndef IFC2X3_IFCEXTERNALLYDEFINEDTEXTFONT_H_INCLUDED
#define IFC2X3_IFCEXTERNALLYDEFINEDTEXTFONT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcExternalReference.h"

namespace ifc2x3
{
   class IfcExternallyDefinedTextFont : public IfcExternalReference
   {
   public:
      virtual ~IfcExternallyDefinedTextFont(){}

      IfcExternallyDefinedTextFont() = default;

      virtual std::string name() const { return "IfcExternallyDefinedTextFont"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Location);
         w.writeAttributeValueScalar(ItemReference);
         w.writeAttributeValueScalar(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
