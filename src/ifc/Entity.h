#pragma once

#include <string>

#include <boost/optional.hpp>
#include <boost/variant.hpp>

namespace ifc
{
   class Model;
   class StepWriter;
   class StepParser;
	
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
      virtual void parse(std::istream& is, StepParser& p) {}; // TODO: make abstract

      size_t m_id;

      friend class Model;
      friend class StepParser;
   };	
}
