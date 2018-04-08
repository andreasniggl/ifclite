// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcGeometricSetSelect.h"

namespace ifc4
{
   class IfcGeometricSet : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcGeometricSet(){}

      explicit IfcGeometricSet() = default;

      explicit IfcGeometricSet(const std::vector< boost::optional<IfcGeometricSetSelect> >& _Elements)
         : IfcGeometricRepresentationItem(), Elements(_Elements) {}

      virtual std::string className() const { return "IfcGeometricSet"; }

      std::vector< boost::optional<IfcGeometricSetSelect> > Elements; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcGeometricSetSelectWriterVisitor>(Elements);
         w.endEntity();
      }

   };

} // namespace ifc4

