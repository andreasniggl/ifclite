// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"


namespace ifc4
{
   typedef boost::variant<IfcBinary, IfcBoolean, IfcDate, IfcDateTime, IfcDuration, IfcIdentifier, IfcInteger, IfcLabel, IfcLogical, IfcPositiveInteger, IfcReal, IfcText, IfcTime, IfcTimeStamp> IfcSimpleValue;

   class IfcSimpleValueWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcSimpleValueWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcBinary p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcBoolean p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcDate p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcInteger p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcLogical p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcReal p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
