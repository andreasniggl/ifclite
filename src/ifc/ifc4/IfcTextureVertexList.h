// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcPresentationItem.h"

namespace ifc4
{
   class IfcTextureVertexList : public IfcPresentationItem
   {
   public:
      virtual ~IfcTextureVertexList(){}

      explicit IfcTextureVertexList() = default;

      explicit IfcTextureVertexList(const std::vector< std::vector<IfcParameterValue> >& _TexCoordsList)
         : IfcPresentationItem(), TexCoordsList(_TexCoordsList) {}

      virtual std::string className() const { return "IfcTextureVertexList"; }

      std::vector< std::vector<IfcParameterValue> > TexCoordsList; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(TexCoordsList);
         w.endEntity();
      }

   };

} // namespace ifc4

