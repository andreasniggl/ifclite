#ifndef IFC2X3_IFCOBJECTREFERENCESELECT_H_INCLUDED
#define IFC2X3_IFCOBJECTREFERENCESELECT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"

#include "IfcMaterial.h"
#include "IfcPerson.h"
#include "IfcDateAndTime.h"
#include "IfcMaterialList.h"
#include "IfcOrganization.h"
#include "IfcCalendarDate.h"
#include "IfcLocalTime.h"
#include "IfcPersonAndOrganization.h"
#include "IfcMaterialLayer.h"
#include "IfcExternalReference.h"
#include "IfcTimeSeries.h"
#include "IfcAddress.h"
#include "IfcAppliedValue.h"

namespace ifc2x3
{
   typedef boost::variant<IfcMaterial*, IfcPerson*, IfcDateAndTime*, IfcMaterialList*, IfcOrganization*, IfcCalendarDate*, IfcLocalTime*, IfcPersonAndOrganization*, IfcMaterialLayer*, IfcExternalReference*, IfcTimeSeries*, IfcAddress*, IfcAppliedValue*> IfcObjectReferenceSelect;

   class IfcObjectReferenceSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcObjectReferenceSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcMaterial* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPerson* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcDateAndTime* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcMaterialList* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcOrganization* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcCalendarDate* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcLocalTime* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPersonAndOrganization* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcMaterialLayer* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcExternalReference* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTimeSeries* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcAddress* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcAppliedValue* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
#endif