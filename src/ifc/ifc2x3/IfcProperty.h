#ifndef IFC2X3_IFCPROPERTY_H_INCLUDED
#define IFC2X3_IFCPROPERTY_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc2x3
{
   class IfcProperty : public ifc::Entity
   {
   public:
      virtual ~IfcProperty(){}

      IfcProperty() = default;

      IfcProperty(const IfcIdentifier& _Name)
         : ifc::Entity(), Name(_Name) {}

      virtual std::string name() const { return "IfcProperty"; }

      boost::optional<IfcIdentifier> Name; // required parameter
      boost::optional<IfcText> Description; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
