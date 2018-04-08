// Automatically generated by ifclite express parser from ifc4 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcTessellatedFaceSet.h"
#include "IfcIndexedPolygonalFace.h"

namespace ifc4
{
   class IfcPolygonalFaceSet : public IfcTessellatedFaceSet
   {
   public:
      virtual ~IfcPolygonalFaceSet(){}

      explicit IfcPolygonalFaceSet() = default;

      explicit IfcPolygonalFaceSet(IfcCartesianPointList3D* _Coordinates, const std::vector<IfcIndexedPolygonalFace*>& _Faces)
         : IfcTessellatedFaceSet(_Coordinates), Faces(_Faces) {}

      virtual std::string className() const { return "IfcPolygonalFaceSet"; }

      boost::optional<IfcBoolean> Closed; // optional parameter
      std::vector<IfcIndexedPolygonalFace*> Faces; // required parameter
      std::vector<IfcPositiveInteger> PnIndex; // optional parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(Coordinates);
         w.writeAttributeValue(Closed);
         w.writeAttributeInstance(Faces);
         w.writeAttributeValue(PnIndex);
         w.endEntity();
      }

   };

} // namespace ifc4
