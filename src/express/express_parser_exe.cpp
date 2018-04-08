#include <iostream>
#include <fstream>

#include "boost\program_options.hpp"

#include "express_parse.h"


int main(int argc, char** argv)
{
   try 
   {
      namespace po = boost::program_options;

      // parse program options
      po::options_description desc("Create C++ Interface from EXPRESS file - allowed options:");
      desc.add_options()
         ("express", po::value<std::string>(), "Path to Express file")
         ("target", po::value<std::string>(), "Root of target path the headers will be created in");

      po::variables_map vm;
      po::store(po::parse_command_line(argc, argv, desc), vm);
      po::notify(vm);

      if (vm.count("express") == 0)
      {
         std::cout << "Warning: Express file not specified!";
         return 1;
      }
      if (vm.count("target") == 0)
      {
         std::cout << "Warning: Root of target directory not specified!";
         return 1;
      }

      // open express file
      std::ifstream fs;
      fs.open(vm.at("express").as<std::string>().c_str());
      if (!fs.is_open())
      {
         std::cout << "Warning: Failed to open EXPRESS file " << vm.at("express").as<std::string>();
         return 1;
      }

      // parse schema from express file
      sof::sdai::ExpressSchema schema;
      schema.parseSchema(fs);

      std::cout << "Parsed Express Schema " << schema.schema_name() << std::endl;
      std::cout << "Found " << schema.types().size() << " Types" << std::endl;
      std::cout << "Found " << schema.entities().size() << " Entities" << std::endl;

      fs.close();

      //// write schema to express file for comparison
      //std::ofstream ofs;
      //ofs.open("\\ifc4_out.exp");

      //if (ofs.is_open())
      //{
      //   schema.writeToExpress(ofs);
      //   ofs.close();
      //}

      // generate cpp interface
      sof::sdai::CppGenerator cpp_generator(schema);
      cpp_generator.setDirectoryRoot(vm.at("target").as<std::string>());
     
      cpp_generator.generateInterface();

      return 0;
   }
   catch (std::exception& ex)
   {
      std::cout << "Exception " << ex.what() << std::endl;
   }
   return 1;
}