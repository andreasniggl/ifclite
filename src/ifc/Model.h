#pragma once

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
      
      inline Entity* createEntityByName(const std::string& type_name, int id)
      {
         auto it = m_constructor_map.find(type_name);
         if (it != m_constructor_map.end())
         {
            Entity* e = it->second();
            e->m_id = id;

            if (m_entities.find(id) != m_entities.end())
               throw new std::runtime_error("Entity already stored at id = " + std::to_string(id));
            else 
               m_entities[id] = std::unique_ptr<Entity>(e);

            return e;
         }
         return nullptr;
      }

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

      static std::map<std::string, std::function<ifc::Entity*()>> m_constructor_map;

   };
}
