// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcProduct.h"
#include "IfcTypeProduct.h"

namespace ifc4
{
   typedef boost::variant<IfcProduct*, IfcTypeProduct*> IfcProductSelect;

   class IfcProductSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcProductSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcProduct* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTypeProduct* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
