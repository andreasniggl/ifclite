#ifndef IFC2X3_IFCPROPERTYREFERENCEVALUE_H_INCLUDED
#define IFC2X3_IFCPROPERTYREFERENCEVALUE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcSimpleProperty.h"
#include "IfcObjectReferenceSelect.h"

namespace ifc2x3
{
   class IfcPropertyReferenceValue : public IfcSimpleProperty
   {
   public:
      virtual ~IfcPropertyReferenceValue(){}

      IfcPropertyReferenceValue() = default;

      IfcPropertyReferenceValue(const IfcIdentifier& _Name, const IfcObjectReferenceSelect& _PropertyReference)
         : IfcSimpleProperty(_Name), PropertyReference(_PropertyReference) {}

      virtual std::string name() const { return "IfcPropertyReferenceValue"; }

      boost::optional<IfcLabel> UsageName; // optional parameter
      boost::optional<IfcObjectReferenceSelect> PropertyReference; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(UsageName);
         w.writeAttributeSelect<IfcObjectReferenceSelectWriterVisitor>(PropertyReference);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif