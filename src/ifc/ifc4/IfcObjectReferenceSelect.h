// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"

#include "IfcAddress.h"
#include "IfcAppliedValue.h"
#include "IfcExternalReference.h"
#include "IfcMaterialDefinition.h"
#include "IfcOrganization.h"
#include "IfcPerson.h"
#include "IfcPersonAndOrganization.h"
#include "IfcTable.h"
#include "IfcTimeSeries.h"

namespace ifc4
{
   typedef boost::variant<IfcAddress*, IfcAppliedValue*, IfcExternalReference*, IfcMaterialDefinition*, IfcOrganization*, IfcPerson*, IfcPersonAndOrganization*, IfcTable*, IfcTimeSeries*> IfcObjectReferenceSelect;

   class IfcObjectReferenceSelectWriterVisitor : public boost::static_visitor<>
   {
   public:
      class IfcObjectReferenceSelectWriterVisitor(ifc::StepWriter& w)
         : m_w(w) {}

      void operator() (IfcAddress* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcAppliedValue* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcExternalReference* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcMaterialDefinition* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcOrganization* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPerson* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcPersonAndOrganization* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTable* p) const
      {
         m_w.writeAttributeInstance(p);
      }
      void operator() (IfcTimeSeries* p) const
      {
         m_w.writeAttributeInstance(p);
      }
   private:
      ifc::StepWriter& m_w;
   };

}
