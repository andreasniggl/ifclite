#ifndef IFC2X3_IFCTEXTSTYLESELECT_H_INCLUDED
#define IFC2X3_IFCTEXTSTYLESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcTextStyleWithBoxCharacteristics.h"
#include "IfcTextStyleTextModel.h"

namespace ifc2x3
{
   typedef boost::variant<IfcTextStyleWithBoxCharacteristics*, IfcTextStyleTextModel*> IfcTextStyleSelect;

   class IfcTextStyleSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcTextStyleSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcTextStyleWithBoxCharacteristics* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTextStyleTextModel* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
