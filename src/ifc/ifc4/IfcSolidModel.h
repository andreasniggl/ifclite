// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"

namespace ifc4
{
   class IfcSolidModel : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcSolidModel(){}

      explicit IfcSolidModel() = default;

      virtual std::string className() const { return "IfcSolidModel"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.endEntity();
      }

   };

} // namespace ifc4
