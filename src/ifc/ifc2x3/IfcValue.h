#ifndef IFC2X3_IFCVALUE_H_INCLUDED
#define IFC2X3_IFCVALUE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"


namespace ifc2x3
{
   typedef boost::variant<IfcMeasureValue, IfcSimpleValue, IfcDerivedMeasureValue> IfcValue;

   class IfcValueWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcValueWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcMeasureValue p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif