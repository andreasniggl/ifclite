// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcCoordinateReferenceSystemSelect.h"
#include "IfcCoordinateReferenceSystem.h"

namespace ifc4
{
   class IfcCoordinateOperation : public ifc::Entity
   {
   public:
      virtual ~IfcCoordinateOperation(){}

      explicit IfcCoordinateOperation() = default;

      explicit IfcCoordinateOperation(const IfcCoordinateReferenceSystemSelect& _SourceCRS, IfcCoordinateReferenceSystem* _TargetCRS)
         : ifc::Entity(), SourceCRS(_SourceCRS), TargetCRS(_TargetCRS) {}

      virtual std::string className() const { return "IfcCoordinateOperation"; }

      boost::optional<IfcCoordinateReferenceSystemSelect> SourceCRS; // required parameter
      IfcCoordinateReferenceSystem* TargetCRS; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeSelect<IfcCoordinateReferenceSystemSelectWriterVisitor>(SourceCRS);
         w.writeAttributeInstance(TargetCRS);
         w.endEntity();
      }

   };

} // namespace ifc4

