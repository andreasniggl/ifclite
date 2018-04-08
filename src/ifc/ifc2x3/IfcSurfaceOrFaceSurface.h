// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcSurface.h"
#include "IfcFaceSurface.h"
#include "IfcFaceBasedSurfaceModel.h"

namespace ifc2x3
{
   typedef boost::variant<IfcSurface*, IfcFaceSurface*, IfcFaceBasedSurfaceModel*> IfcSurfaceOrFaceSurface;

   class IfcSurfaceOrFaceSurfaceWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcSurfaceOrFaceSurfaceWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcSurface* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcFaceSurface* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcFaceBasedSurfaceModel* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
