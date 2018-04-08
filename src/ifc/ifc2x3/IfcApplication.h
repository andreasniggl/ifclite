#ifndef IFC2X3_IFCAPPLICATION_H_INCLUDED
#define IFC2X3_IFCAPPLICATION_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcOrganization.h"

namespace ifc2x3
{
   class IfcApplication : public ifc::Entity
   {
   public:
      virtual ~IfcApplication(){}

      IfcApplication() = default;

      IfcApplication(IfcOrganization* _ApplicationDeveloper, const IfcLabel& _Version, const IfcLabel& _ApplicationFullName, const IfcIdentifier& _ApplicationIdentifier)
         : ifc::Entity(), ApplicationDeveloper(_ApplicationDeveloper), Version(_Version), ApplicationFullName(_ApplicationFullName), ApplicationIdentifier(_ApplicationIdentifier) {}

      virtual std::string name() const { return "IfcApplication"; }

      IfcOrganization* ApplicationDeveloper; // required parameter
      boost::optional<IfcLabel> Version; // required parameter
      boost::optional<IfcLabel> ApplicationFullName; // required parameter
      boost::optional<IfcIdentifier> ApplicationIdentifier; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ApplicationDeveloper);
         w.writeAttributeValueScalar(Version);
         w.writeAttributeValueScalar(ApplicationFullName);
         w.writeAttributeValueScalar(ApplicationIdentifier);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif