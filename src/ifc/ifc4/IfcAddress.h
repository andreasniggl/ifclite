// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"

namespace ifc4
{
   class IfcAddress : public ifc::Entity
   {
   public:
      virtual ~IfcAddress(){}

      explicit IfcAddress() = default;

      virtual std::string className() const { return "IfcAddress"; }

      boost::optional<IfcAddressTypeEnum> Purpose; // optional parameter
      boost::optional<IfcText> Description; // optional parameter
      boost::optional<IfcLabel> UserDefinedPurpose; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(IfcAddressTypeEnumStringMap, Purpose);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(UserDefinedPurpose);
         w.endEntity();
      }

   };

} // namespace ifc4

