// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcCartesianPoint.h"

namespace ifc4
{
   typedef boost::variant<IfcCartesianPoint*, IfcParameterValue> IfcTrimmingSelect;

   class IfcTrimmingSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcTrimmingSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcCartesianPoint* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcParameterValue p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
