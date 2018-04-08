#ifndef IFC2X3_IFCLAYEREDITEM_H_INCLUDED
#define IFC2X3_IFCLAYEREDITEM_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcRepresentationItem.h"
#include "IfcRepresentation.h"

namespace ifc2x3
{
   typedef boost::variant<IfcRepresentationItem*, IfcRepresentation*> IfcLayeredItem;

   class IfcLayeredItemWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcLayeredItemWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcRepresentationItem* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcRepresentation* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif
