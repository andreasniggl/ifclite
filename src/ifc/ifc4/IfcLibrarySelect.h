// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcLibraryInformation.h"
#include "IfcLibraryReference.h"

namespace ifc4
{
   typedef boost::variant<IfcLibraryInformation*, IfcLibraryReference*> IfcLibrarySelect;

   class IfcLibrarySelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcLibrarySelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcLibraryInformation* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcLibraryReference* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}