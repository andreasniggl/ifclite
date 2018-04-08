#ifndef IFC2X3_IFCPROJECTORDER_H_INCLUDED
#define IFC2X3_IFCPROJECTORDER_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"

namespace ifc2x3
{
   class IfcProjectOrder : public IfcControl
   {
   public:
      virtual ~IfcProjectOrder(){}

      IfcProjectOrder() = default;

      IfcProjectOrder(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcIdentifier& _ID, const IfcProjectOrderTypeEnum& _PredefinedType)
         : IfcControl(_GlobalId, _OwnerHistory), ID(_ID), PredefinedType(_PredefinedType) {}

      virtual std::string name() const { return "IfcProjectOrder"; }

      boost::optional<IfcIdentifier> ID; // required parameter
      boost::optional<IfcProjectOrderTypeEnum> PredefinedType; // required parameter
      boost::optional<IfcLabel> Status; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeValueScalar(ID);
         w.writeAttributeValueEnumeration(IfcProjectOrderTypeEnumStringMap, PredefinedType);
         w.writeAttributeValueScalar(Status);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif
