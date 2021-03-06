// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"


namespace ifc4
{
   typedef boost::variant<IfcBoolean, IfcModulusOfLinearSubgradeReactionMeasure> IfcModulusOfTranslationalSubgradeReactionSelect;

   class IfcModulusOfTranslationalSubgradeReactionSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcModulusOfTranslationalSubgradeReactionSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcBoolean p) const
      {
         m_w.writeAttributeValue(p);
      }
      void operator() (IfcModulusOfLinearSubgradeReactionMeasure p) const
      {
         m_w.writeAttributeValue(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
