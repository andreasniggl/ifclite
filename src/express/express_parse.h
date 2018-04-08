#pragma once

#include <string>
#include <vector>
#include <map>
#include <iostream>

#include <boost/variant.hpp>
#include <boost/optional.hpp>

namespace sof {
   namespace sdai {

      //enum SdaiType
      //{
      //   BOOLEAN,
      //   LOGICAL,
      //   BINARY,
      //   INTEGER,
      //   NUMBER,
      //   REAL,
      //   STRING,
      //   ENUM,
      //   GLOBALID,
      //   INSTANCE,
      //   ARRAY,
      //   LIST,
      //   UNDEFINED
      //};

      //typedef std::pair<int, int> Range;
      //typedef typename std::string Identifier;

      struct Range
      {
         const static size_t UNLIMITED = 1000000;
         
         bool undefined() const { return upper_bound < lower_bound; }
         bool limited() const { return upper_bound < UNLIMITED; }
         

         size_t lower_bound = 1;
         size_t upper_bound = 0;
      };

      class Identifier : public std::string
      {
      public:
         operator bool() const {
            return size() > 0;
         }
      };

      typedef std::vector<std::string> IdentifierList;


      class TypeDefinition
      {
      public:
         static TypeDefinition parse(std::istream& is);

         Identifier name;
         Identifier mapped_name;

         enum StorageTypeEnum { Scalar, Array, Matrix, Enumeration, Select };

         StorageTypeEnum type = StorageTypeEnum::Scalar;

         Range bounds[2];
         IdentifierList items;
      };


      class Attribute
      {
      public:
         static Attribute parse(std::istream& is, const Identifier& name);

         // enum DataType { BasicType, DefinedType, Instance };

         enum StorageTypeEnum { 
            Undefined,
            InstanceScalar,
            InstanceList,
            InstanceMatrix,
            ValueScalar, 
            ValueList,
            ValueMatrix,
            Enumeration,
            Select,
            SelectList
         };

         size_t dimension() const;
         //bool is_array() const { return bounds[0].empty()==false; } // TODO: obsolete
         //bool is_scalar() const { return bounds[0].empty(); }

         Identifier name;  // identifier of attribute
         Identifier type_name; // identifier of datatype as read from express file
         StorageTypeEnum  storage_type = StorageTypeEnum::Undefined;

         Identifier inverse_target; // FOR statement in inverse attribute

         // DataType data_type;

         bool is_optional = false; 
         bool is_derivable = false; // attribute can be derived and must not be set explicitly

         Range bounds[2]; // = { Range() };
      };


      class Entity
      {
      public:
         static Entity parse(std::istream& is);

         Identifier name;
         Identifier parent;
         bool is_abstract = false;

         std::vector<Attribute> attributes;
         std::vector<Attribute> inverse_attributes;

         const Attribute* getAttributeByName(const std::string& name) const;
      };


      class ExpressSchema
      {
      public:
         void parseSchema(std::istream&);

         void writeToExpress(std::ostream&);

         const std::string& schema_name() const { return m_schema_name; }
         const std::vector<TypeDefinition>& types() const { return m_types; }
         const std::vector<Entity>& entities() const { return m_entities; }

         const TypeDefinition* getTypeByName(const std::string& name) const;
         const Entity* getEntityByName(const std::string& name) const;

         bool isEntity(const std::string& name) const {
            return m_entities_by_name.find(name) != m_entities_by_name.end();
         }

         std::vector<const Attribute*> getAllAttributesOfEntity(const std::string& entity_name, bool include_optionals=true) const;
         std::string getRootType(const std::string& type_name) const;

      private:
         std::string m_schema_name;
         std::vector<TypeDefinition> m_types;
         std::vector<Entity> m_entities;

         std::map<std::string, size_t> m_types_by_name;
         std::map<std::string, size_t> m_entities_by_name;

      };


      class CppGenerator
      {
      public:
         CppGenerator(const ExpressSchema& schema)
            : m_schema(schema) {}

         void setDirectoryRoot(const std::string& dir) {
            m_directory_root = dir;
         }

         void generateInterface() const;

      private:
         std::string m_directory_root;
         const ExpressSchema& m_schema;

         void generateTypeDefinitions(const std::string& include_directory) const;
         void generateSelectHeader(const TypeDefinition& type, const std::string& include_directory) const;
         void generateEntityHeader(const Entity& e, const std::string& include_directory) const;
      };
   }
}
