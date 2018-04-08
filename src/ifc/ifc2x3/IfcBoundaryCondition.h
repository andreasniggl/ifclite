#ifndef IFC2X3_IFCBOUNDARYCONDITION_H_INCLUDED
#define IFC2X3_IFCBOUNDARYCONDITION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcBoundaryCondition : public ifc::Entity
   {
   public:
      virtual ~IfcBoundaryCondition(){}

      IfcBoundaryCondition() = default;

      virtual std::string name() const { return "IfcBoundaryCondition"; }

      boost::optional<IfcLabel> Name; // optional parameter

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