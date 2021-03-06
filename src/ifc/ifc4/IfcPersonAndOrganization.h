// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcPerson.h"
#include "IfcOrganization.h"
#include "IfcActorRole.h"

namespace ifc4
{
   class IfcPersonAndOrganization : public ifc::Entity
   {
   public:
      virtual ~IfcPersonAndOrganization(){}

      explicit IfcPersonAndOrganization() = default;

      explicit IfcPersonAndOrganization(IfcPerson* _ThePerson, IfcOrganization* _TheOrganization)
         : ifc::Entity(), ThePerson(_ThePerson), TheOrganization(_TheOrganization) {}

      virtual std::string className() const { return "IfcPersonAndOrganization"; }

      IfcPerson* ThePerson; // required parameter
      IfcOrganization* TheOrganization; // required parameter
      std::vector<IfcActorRole*> Roles; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(ThePerson);
         w.writeAttributeInstance(TheOrganization);
         w.writeAttributeInstance(Roles);
         w.endEntity();
      }

   };

} // namespace ifc4

