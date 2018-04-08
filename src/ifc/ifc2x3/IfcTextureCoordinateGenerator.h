#ifndef IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H_INCLUDED
#define IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcTextureCoordinate.h"
#include "IfcSimpleValue.h"

namespace ifc2x3
{
   class IfcTextureCoordinateGenerator : public IfcTextureCoordinate
   {
   public:
      virtual ~IfcTextureCoordinateGenerator(){}

      IfcTextureCoordinateGenerator() = default;

      IfcTextureCoordinateGenerator(const IfcLabel& _Mode, const std::vector<boost::optional<IfcSimpleValue>>& _Parameter)
         : IfcTextureCoordinate(), Mode(_Mode), Parameter(_Parameter) {}

      virtual std::string name() const { return "IfcTextureCoordinateGenerator"; }

      boost::optional<IfcLabel> Mode; // required parameter
      std::vector<boost::optional<IfcSimpleValue>> Parameter; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Mode);
         w.writeAttributeSelectList<IfcSimpleValueWriterVisitor>(Parameter);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif