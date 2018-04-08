#ifndef IFC2X3_IFCSOLIDMODEL_H_INCLUDED
#define IFC2X3_IFCSOLIDMODEL_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"

namespace ifc2x3
{
   class IfcSolidModel : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcSolidModel(){}

      IfcSolidModel() = default;

      virtual std::string name() const { return "IfcSolidModel"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif