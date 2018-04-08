// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "Entity.h"
#include "IfcTableRow.h"
#include "IfcTableColumn.h"

namespace ifc4
{
   class IfcTable : public ifc::Entity
   {
   public:
      virtual ~IfcTable(){}

      explicit IfcTable() = default;

      virtual std::string className() const { return "IfcTable"; }

      boost::optional<IfcLabel> Name; // optional parameter
      std::vector<IfcTableRow*> Rows; // optional parameter
      std::vector<IfcTableColumn*> Columns; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(Name);
         w.writeAttributeInstance(Rows);
         w.writeAttributeInstance(Columns);
         w.endEntity();
      }

   };

} // namespace ifc4

