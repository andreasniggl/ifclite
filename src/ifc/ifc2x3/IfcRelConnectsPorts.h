// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcRelConnects.h"
#include "IfcPort.h"
#include "IfcPort.h"
#include "IfcElement.h"

namespace ifc2x3
{
   class IfcRelConnectsPorts : public IfcRelConnects
   {
   public:
      virtual ~IfcRelConnectsPorts(){}

      explicit IfcRelConnectsPorts() = default;

      explicit IfcRelConnectsPorts(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, IfcPort* _RelatingPort, IfcPort* _RelatedPort)
         : IfcRelConnects(_GlobalId, _OwnerHistory), RelatingPort(_RelatingPort), RelatedPort(_RelatedPort) {}

      virtual std::string className() const { return "IfcRelConnectsPorts"; }

      IfcPort* RelatingPort; // required parameter
      IfcPort* RelatedPort; // required parameter
      IfcElement* RealizingElement; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeInstance(RelatingPort);
         w.writeAttributeInstance(RelatedPort);
         w.writeAttributeInstance(RealizingElement);
         w.endEntity();
      }

   };

} // namespace ifc2x3

