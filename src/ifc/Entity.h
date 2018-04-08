#ifndef IFC_IFCENTITY_H_INCLUDED
#define IFC_IFCENTITY_H_INCLUDED

#include <string>

#include <boost/optional.hpp>
#include <boost/variant.hpp>

namespace ifc
{
   class Model;
   class StepWriter;
	
   class Entity
   {
   public:
      virtual ~Entity() {}
      //virtual size_t GetId() const { return Id; } // required for virtural "Select" classes

      size_t id() const { return m_id; }
      
      virtual std::string className() const = 0;

   protected:
      Entity() = default;

      virtual void serialize(StepWriter& w) const = 0;

      size_t m_id;

      friend class Model;
   };	
}
#endif