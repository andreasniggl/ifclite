// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcSystem.h"
#include "IfcAxis2Placement3D.h"
#include "IfcStructuralLoadGroup.h"
#include "IfcStructuralResultGroup.h"
#include "IfcObjectPlacement.h"

namespace ifc4
{
   class IfcStructuralAnalysisModel : public IfcSystem
   {
   public:
      virtual ~IfcStructuralAnalysisModel(){}

      explicit IfcStructuralAnalysisModel() = default;

      explicit IfcStructuralAnalysisModel(const IfcGloballyUniqueId& _GlobalId, const IfcAnalysisModelTypeEnum& _PredefinedType)
         : IfcSystem(_GlobalId), PredefinedType(_PredefinedType) {}

      virtual std::string className() const { return "IfcStructuralAnalysisModel"; }

      boost::optional<IfcAnalysisModelTypeEnum> PredefinedType; // required parameter
      IfcAxis2Placement3D* OrientationOf2DPlane; // optional parameter
      std::vector<IfcStructuralLoadGroup*> LoadedBy; // optional parameter
      std::vector<IfcStructuralResultGroup*> HasResults; // optional parameter
      IfcObjectPlacement* SharedPlacement; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeValue(GlobalId);
         w.writeAttributeInstance(OwnerHistory);
         w.writeAttributeValue(Name);
         w.writeAttributeValue(Description);
         w.writeAttributeValue(ObjectType);
         w.writeAttributeValue(IfcAnalysisModelTypeEnumStringMap, PredefinedType);
         w.writeAttributeInstance(OrientationOf2DPlane);
         w.writeAttributeInstance(LoadedBy);
         w.writeAttributeInstance(HasResults);
         w.writeAttributeInstance(SharedPlacement);
         w.endEntity();
      }

   };

} // namespace ifc4

