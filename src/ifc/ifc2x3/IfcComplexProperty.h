#ifndef IFC2X3_IFCCOMPLEXPROPERTY_H_INCLUDED
#define IFC2X3_IFCCOMPLEXPROPERTY_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcProperty.h"
#include "IfcProperty.h"

namespace ifc2x3
{
   class IfcComplexProperty : public IfcProperty
   {
   public:
      virtual ~IfcComplexProperty(){}

      IfcComplexProperty() = default;

      IfcComplexProperty(const IfcIdentifier& _Name, const IfcIdentifier& _UsageName, const std::vector<IfcProperty*>& _HasProperties)
         : IfcProperty(_Name), UsageName(_UsageName), HasProperties(_HasProperties) {}

      virtual std::string name() const { return "IfcComplexProperty"; }

      boost::optional<IfcIdentifier> UsageName; // required parameter
      std::vector<IfcProperty*> HasProperties; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(UsageName);
         w.writeAttributeInstanceList(HasProperties);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif