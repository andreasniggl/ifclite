#ifndef IFC_IFCMODEL_H_INCLUDED
#define IFC_IFCMODEL_H_INCLUDED

#include <memory>
#include <map>

#include "Entity.h"

namespace ifc
{
   class Model
   {
   public:
      Model(const std::string& schema_name)
         : m_schema_name(schema_name) {}
      
      template<class T>
      inline T* createEntity()
      {
         auto e = std::unique_ptr<T>(new T());
         //std::unique_ptr<T> e = std::make_unique<T>();
         T* pe = e.get();

         e->m_id = m_entities.size()+1;
         m_entities[e->m_id] = std::move(e);

         return pe;
      }

      template<class T, class..._Types>
      inline T* createEntity(_Types&&... _Args)
      {
         auto e = std::unique_ptr<T>(new T(std::forward<_Types>(_Args)...) );
         //auto e = std::make_unique<T>(std::forward<_Types>(_Args)...);
         T* pe = e.get();

         e->m_id = m_entities.size() + 1;
         m_entities[e->m_id] = std::move(e);

         return pe;
      }

      Entity* entityById(size_t id)
      {
         auto it = m_entities.find(id);
         if (it != m_entities.end())
            return it->second.get();
         else
            return nullptr;
      }

      template <class Writer>
      void serialize(Writer& w)
      {
         w.startSerialization(m_schema_name);

         for (const auto& e : m_entities)
         {
            e.second->serialize(w);
         }

         w.endSerialization();
      }

   private:
      std::string m_schema_name;

      std::map<size_t, std::unique_ptr<Entity>> m_entities;
   };
}

#endif