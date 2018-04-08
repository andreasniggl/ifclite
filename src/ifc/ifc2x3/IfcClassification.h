#ifndef IFC2X3_IFCCLASSIFICATION_H_INCLUDED
#define IFC2X3_IFCCLASSIFICATION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcCalendarDate.h"

namespace ifc2x3
{
   class IfcClassification : public ifc::Entity
   {
   public:
      virtual ~IfcClassification(){}

      IfcClassification() = default;

      IfcClassification(const IfcLabel& _Source, const IfcLabel& _Edition, const IfcLabel& _Name)
         : ifc::Entity(), Source(_Source), Edition(_Edition), Name(_Name) {}

      virtual std::string name() const { return "IfcClassification"; }

      boost::optional<IfcLabel> Source; // required parameter
      boost::optional<IfcLabel> Edition; // required parameter
      IfcCalendarDate* EditionDate; // optional parameter
      boost::optional<IfcLabel> Name; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Source);
         w.writeAttributeValueScalar(Edition);
         w.writeAttributeInstance(EditionDate);
         w.writeAttributeValueScalar(Name);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif