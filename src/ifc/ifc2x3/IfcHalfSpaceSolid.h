// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcSurface.h"

namespace ifc2x3
{
   class IfcHalfSpaceSolid : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcHalfSpaceSolid(){}

      explicit IfcHalfSpaceSolid() = default;

      explicit IfcHalfSpaceSolid(IfcSurface* _BaseSurface, const bool& _AgreementFlag)
         : IfcGeometricRepresentationItem(), BaseSurface(_BaseSurface), AgreementFlag(_AgreementFlag) {}

      virtual std::string className() const { return "IfcHalfSpaceSolid"; }

      IfcSurface* BaseSurface; // required parameter
      boost::optional<bool> AgreementFlag; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(BaseSurface);
         w.writeAttributeValue(AgreementFlag);
         w.endEntity();
      }

   };

} // namespace ifc2x3

