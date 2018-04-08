// Automatically generated by ifclite express parser from ifc2x3 express file - do not modify

#pragma once

#include "IfcTypeDefinitions.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcOneDirectionRepeatFactor.h"
#include "IfcFillAreaStyleTileShapeSelect.h"

namespace ifc2x3
{
   class IfcFillAreaStyleTiles : public IfcGeometricRepresentationItem
   {
   public:
      virtual ~IfcFillAreaStyleTiles(){}

      explicit IfcFillAreaStyleTiles() = default;

      explicit IfcFillAreaStyleTiles(IfcOneDirectionRepeatFactor* _TilingPattern, const std::vector< boost::optional<IfcFillAreaStyleTileShapeSelect> >& _Tiles, const IfcPositiveRatioMeasure& _TilingScale)
         : IfcGeometricRepresentationItem(), TilingPattern(_TilingPattern), Tiles(_Tiles), TilingScale(_TilingScale) {}

      virtual std::string className() const { return "IfcFillAreaStyleTiles"; }

      IfcOneDirectionRepeatFactor* TilingPattern; // required parameter
      std::vector< boost::optional<IfcFillAreaStyleTileShapeSelect> > Tiles; // required parameter
      boost::optional<IfcPositiveRatioMeasure> TilingScale; // required parameter

   protected:
      virtual void serialize(ifc::StepWriter& w) const
      {
         w.beginEntity(this);
         w.writeAttributeInstance(TilingPattern);
         w.writeAttributeSelect<IfcFillAreaStyleTileShapeSelectWriterVisitor>(Tiles);
         w.writeAttributeValue(TilingScale);
         w.endEntity();
      }

   };

} // namespace ifc2x3

