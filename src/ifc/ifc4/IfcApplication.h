// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcOrganization.h"

namespace ifc4
{
   class IfcApplication : public ifc::Entity
   {
   public:
      virtual ~IfcApplication(){}

      explicit IfcApplication() = default;

      explicit IfcApplication(IfcOrganization* _ApplicationDeveloper, const IfcLabel& _Version, const IfcLabel& _ApplicationFullName, const IfcIdentifier& _ApplicationIdentifier)
         : ifc::Entity(), ApplicationDeveloper(_ApplicationDeveloper), Version(_Version), ApplicationFullName(_ApplicationFullName), ApplicationIdentifier(_ApplicationIdentifier) {}

      virtual std::string className() const { return "IfcApplication"; }

      IfcOrganization* ApplicationDeveloper; // required parameter
      boost::optional<IfcLabel> Version; // required parameter
      boost::optional<IfcLabel> ApplicationFullName; // required parameter
      boost::optional<IfcIdentifier> ApplicationIdentifier; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ApplicationDeveloper);
         w.writeAttributeValue(Version);
         w.writeAttributeValue(ApplicationFullName);
         w.writeAttributeValue(ApplicationIdentifier);
         w.endEntity();
      }

   };

} // namespace ifc4

