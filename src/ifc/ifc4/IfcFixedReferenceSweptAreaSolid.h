// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSweptAreaSolid.h"
#include "IfcCurve.h"
#include "IfcDirection.h"

namespace ifc4
{
   class IfcFixedReferenceSweptAreaSolid : public IfcSweptAreaSolid
   {
   public:
      virtual ~IfcFixedReferenceSweptAreaSolid(){}

      explicit IfcFixedReferenceSweptAreaSolid() = default;

      explicit IfcFixedReferenceSweptAreaSolid(IfcProfileDef* _SweptArea, IfcCurve* _Directrix, IfcDirection* _FixedReference)
         : IfcSweptAreaSolid(_SweptArea), Directrix(_Directrix), FixedReference(_FixedReference) {}

      virtual std::string className() const { return "IfcFixedReferenceSweptAreaSolid"; }

      IfcCurve* Directrix; // required parameter
      boost::optional<IfcParameterValue> StartParam; // optional parameter
      boost::optional<IfcParameterValue> EndParam; // optional parameter
      IfcDirection* FixedReference; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(SweptArea);
         w.writeAttributeInstance(Position);
         w.writeAttributeInstance(Directrix);
         w.writeAttributeValue(StartParam);
         w.writeAttributeValue(EndParam);
         w.writeAttributeInstance(FixedReference);
         w.endEntity();
      }

   };

} // namespace ifc4

