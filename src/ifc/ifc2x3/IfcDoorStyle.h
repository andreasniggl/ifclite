#ifndef IFC2X3_IFCDOORSTYLE_H_INCLUDED
#define IFC2X3_IFCDOORSTYLE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcTypeProduct.h"

namespace ifc2x3
{
   class IfcDoorStyle : public IfcTypeProduct
   {
   public:
      virtual ~IfcDoorStyle(){}

      IfcDoorStyle() = default;

      IfcDoorStyle(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcDoorStyleOperationEnum& _OperationType, const IfcDoorStyleConstructionEnum& _ConstructionType, const bool& _ParameterTakesPrecedence, const bool& _Sizeable)
         : IfcTypeProduct(_GlobalId, _OwnerHistory), OperationType(_OperationType), ConstructionType(_ConstructionType), ParameterTakesPrecedence(_ParameterTakesPrecedence), Sizeable(_Sizeable) {}

      virtual std::string name() const { return "IfcDoorStyle"; }

      boost::optional<IfcDoorStyleOperationEnum> OperationType; // required parameter
      boost::optional<IfcDoorStyleConstructionEnum> ConstructionType; // required parameter
      boost::optional<bool> ParameterTakesPrecedence; // required parameter
      boost::optional<bool> Sizeable; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ApplicableOccurrence);
         w.writeAttributeInstanceList(HasPropertySets);
         w.writeAttributeInstanceList(RepresentationMaps);
         w.writeAttributeValueScalar(Tag);
         w.writeAttributeValueEnumeration(IfcDoorStyleOperationEnumStringMap, OperationType);
         w.writeAttributeValueEnumeration(IfcDoorStyleConstructionEnumStringMap, ConstructionType);
         w.writeAttributeValueScalar(ParameterTakesPrecedence);
         w.writeAttributeValueScalar(Sizeable);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif