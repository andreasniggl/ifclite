#ifndef IFC2X3_IFCPREDEFINEDTEXTFONT_H_INCLUDED
#define IFC2X3_IFCPREDEFINEDTEXTFONT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedItem.h"

namespace ifc2x3
{
   class IfcPreDefinedTextFont : public IfcPreDefinedItem
   {
   public:
      virtual ~IfcPreDefinedTextFont(){}

      IfcPreDefinedTextFont() = default;

      IfcPreDefinedTextFont(const IfcLabel& _Name)
         : IfcPreDefinedItem(_Name) {}

      virtual std::string name() const { return "IfcPreDefinedTextFont"; }


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
