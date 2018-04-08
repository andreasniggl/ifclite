#ifndef IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H_INCLUDED
#define IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcSizeSelect.h"

namespace ifc2x3
{
   class IfcTextStyleWithBoxCharacteristics : public ifc::Entity
   {
   public:
      virtual ~IfcTextStyleWithBoxCharacteristics(){}

      IfcTextStyleWithBoxCharacteristics() = default;

      virtual std::string name() const { return "IfcTextStyleWithBoxCharacteristics"; }

      boost::optional<IfcPositiveLengthMeasure> BoxHeight; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> BoxWidth; // optional parameter
      boost::optional<IfcPlaneAngleMeasure> BoxSlantAngle; // optional parameter
      boost::optional<IfcPlaneAngleMeasure> BoxRotateAngle; // optional parameter
      boost::optional<IfcSizeSelect> CharacterSpacing; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(BoxHeight);
         w.writeAttributeValueScalar(BoxWidth);
         w.writeAttributeValueScalar(BoxSlantAngle);
         w.writeAttributeValueScalar(BoxRotateAngle);
         w.writeAttributeSelect<IfcSizeSelectWriterVisitor>(CharacterSpacing);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
