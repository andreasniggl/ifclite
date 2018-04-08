#ifndef IFC2X3_IFCSERVICELIFE_H_INCLUDED
#define IFC2X3_IFCSERVICELIFE_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcControl.h"

namespace ifc2x3
{
   class IfcServiceLife : public IfcControl
   {
   public:
      virtual ~IfcServiceLife(){}

      IfcServiceLife() = default;

      IfcServiceLife(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory, const IfcServiceLifeTypeEnum& _ServiceLifeType, const IfcTimeMeasure& _ServiceLifeDuration)
         : IfcControl(_GlobalId, _OwnerHistory), ServiceLifeType(_ServiceLifeType), ServiceLifeDuration(_ServiceLifeDuration) {}

      virtual std::string name() const { return "IfcServiceLife"; }

      boost::optional<IfcServiceLifeTypeEnum> ServiceLifeType; // required parameter
      boost::optional<IfcTimeMeasure> ServiceLifeDuration; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeValueEnumeration(IfcServiceLifeTypeEnumStringMap, ServiceLifeType);
         w.writeAttributeValueScalar(ServiceLifeDuration);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif