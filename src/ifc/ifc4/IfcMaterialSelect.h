// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcMaterialDefinition.h"
#include "IfcMaterialList.h"
#include "IfcMaterialUsageDefinition.h"

namespace ifc4
{
   typedef boost::variant<IfcMaterialDefinition*, IfcMaterialList*, IfcMaterialUsageDefinition*> IfcMaterialSelect;

   class IfcMaterialSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcMaterialSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcMaterialDefinition* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcMaterialList* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcMaterialUsageDefinition* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
