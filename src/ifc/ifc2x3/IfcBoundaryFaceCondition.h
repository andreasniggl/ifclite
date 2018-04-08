// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcBoundaryCondition.h"

namespace ifc2x3
{
   class IfcBoundaryFaceCondition : public IfcBoundaryCondition
   {
   public:
      virtual ~IfcBoundaryFaceCondition(){}

      explicit IfcBoundaryFaceCondition() = default;

      virtual std::string className() const { return "IfcBoundaryFaceCondition"; }

      boost::optional<IfcModulusOfSubgradeReactionMeasure> LinearStiffnessByAreaX; // optional parameter
      boost::optional<IfcModulusOfSubgradeReactionMeasure> LinearStiffnessByAreaY; // optional parameter
      boost::optional<IfcModulusOfSubgradeReactionMeasure> LinearStiffnessByAreaZ; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(LinearStiffnessByAreaX);
         w.writeAttributeValue(LinearStiffnessByAreaY);
         w.writeAttributeValue(LinearStiffnessByAreaZ);
         w.endEntity();
      }

   };

} // namespace ifc2x3

