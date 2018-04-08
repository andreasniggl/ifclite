#ifndef IFC2X3_IFCSTAIRFLIGHT_H_INCLUDED
#define IFC2X3_IFCSTAIRFLIGHT_H_INCLUDED

// Automatically generated by sof_sdai_toolkit from ifc2x3 express file - do not modify

#include "IfcTypeDefinitions.h"
#include "IfcBuildingElement.h"

namespace ifc2x3
{
   class IfcStairFlight : public IfcBuildingElement
   {
   public:
      virtual ~IfcStairFlight(){}

      IfcStairFlight() = default;

      IfcStairFlight(const IfcGloballyUniqueId& _GlobalId, IfcOwnerHistory* _OwnerHistory)
         : IfcBuildingElement(_GlobalId, _OwnerHistory) {}

      virtual std::string name() const { return "IfcStairFlight"; }

      boost::optional<int> NumberOfRiser; // optional parameter
      boost::optional<int> NumberOfTreads; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> RiserHeight; // optional parameter
      boost::optional<IfcPositiveLengthMeasure> TreadLength; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValueScalar(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValueScalar(Name);
         w.writeAttributeValueScalar(Description);
         w.writeAttributeValueScalar(ObjectType);
         w.writeAttributeInstance(ObjectPlacement);
         w.writeAttributeInstance(Representation);
         w.writeAttributeValueScalar(Tag);
         w.writeAttributeValueScalar(NumberOfRiser);
         w.writeAttributeValueScalar(NumberOfTreads);
         w.writeAttributeValueScalar(RiserHeight);
         w.writeAttributeValueScalar(TreadLength);
         w.endEntity();
      }

   };

} // namespace ifc2x3

#endif