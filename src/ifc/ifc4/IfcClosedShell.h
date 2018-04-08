// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcConnectedFaceSet.h"

namespace ifc4
{
   class IfcClosedShell : public IfcConnectedFaceSet
   {
   public:
      virtual ~IfcClosedShell(){}

      explicit IfcClosedShell() = default;

      explicit IfcClosedShell(const std::vector<IfcFace*>& _CfsFaces)
         : IfcConnectedFaceSet(_CfsFaces) {}

      virtual std::string className() const { return "IfcClosedShell"; }


   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(CfsFaces);
         w.endEntity();
      }

   };

} // namespace ifc4

