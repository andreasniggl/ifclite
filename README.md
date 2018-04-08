# ifclite
ifclite provides a library to create C++ interfaces from EXPRESS - ISO 10303-1 data files together with classes to write ISO-10303-21 STEP files from these interfaces. Main goal is to enable the generation of IFC (Industry Foundation Classes) files, though interfaces for other kind of definitions could easily also be generated.

A major architectural goal was to set up the interfaces as simple as possible with minium footprint. So, for example, the interfaces generated by the EXPRESS parser are header only interfaces, thus no object files are required to be linked against in application code. Just include the headers. This also holds for all the functionality writing STEP files. The classes utilize C++ templates with all functionality available in the headers.

The repository provides the following projects / classes as projects for Visual Studio 2015:

- express_parser_exe (subfolder /src/express): parses an ISO 10303-1 EXPRESS file and generates C++ interface classes. Bases on the kind of type given in the EXPRESS file it generates C++ typedefs, enums, classes or variants. The latter currently based on boost::variants, which will however be changed to std::variants from the C++17 as soon as these will be supported by the major compilers.

- already converted interfaces for IFC2x3 and IFC4 (subfolders /src/ifc/ifc2x3, /src/ifc/ifc4).

- test_create_cube_ifc2x3 (subfolder /src/test): test example showing the generation of a simple cube as IFC2x3 file. 

- test_create_cube_ifc4 (subfolder /src/test): test example showing the generation of a simple cube as IFC4 file.
