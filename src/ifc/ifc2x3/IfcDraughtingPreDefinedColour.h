#ifndef IFC2X3_IFCDRAUGHTINGPREDEFINEDCOLOUR_H_INCLUDED
#define IFC2X3_IFCDRAUGHTINGPREDEFINEDCOLOUR_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcPreDefinedColour.h"

namespace ifc2x3
{
   class IfcDraughtingPreDefinedColour : public IfcPreDefinedColour
   {
   public:
      virtual ~IfcDraughtingPreDefinedColour(){}

      IfcDraughtingPreDefinedColour() = default;

      IfcDraughtingPreDefinedColour(const IfcLabel& _Name)
         : IfcPreDefinedColour(_Name) {}

      virtual std::string name() const { return "IfcDraughtingPreDefinedColour"; }


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