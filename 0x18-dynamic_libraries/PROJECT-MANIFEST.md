# Project Manifest: Dynamic Libraries in C

## Project Identity
- **Name**: Dynamic Libraries
- **Type**: Educational
- **Scope**: Shared Library Creation and Usage
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Build Tools**: gcc, ld, ldd, nm, ldconfig
- **Style Guide**: Betty

## Demonstrated Competencies
- Dynamic library creation and management
- Position-independent code compilation
- Shared object linking
- Symbol management in shared libraries
- Library versioning concepts
- Run-time linking
- Symbol resolution
- Path configuration for libraries
- Foreign function interfaces
- Cross-language interoperability

## System Context
This module explores dynamic libraries (shared objects) in C, which are linked at run-time rather than compile-time. Dynamic libraries enable code reuse across multiple programs, reduce executable size, allow updates without recompilation, and support plugin architectures. Understanding dynamic libraries is essential for building modular and maintainable software systems.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Dynamic linker (ld)
- Library tools (ldd, nm, ldconfig)
- Text Editor (vi/vim/emacs)
- Shell scripting knowledge

## Development Workflow
1. Create or gather related C functions
2. Compile with position-independent code flags
3. Create shared objects with appropriate naming
4. Verify symbol exports with nm tool
5. Set up library paths for runtime discovery
6. Test library loading and symbol resolution
7. Create scripts for library management
8. Develop applications that use the dynamic libraries

## Implementation Specifics

### Library Components
- **Dynamic Library**: [libdynamic.so](./libdynamic.so) - Contains compiled functions for various operations
- **Header File**: [main.h](./main.h) - Declares all function prototypes for the library

### Utility Scripts
- **Library Creation**: [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) - Script to create a dynamic library from C files

### Advanced Applications
- **Python Integration**: [100-operations.so](./100-operations.so) - Dynamic library for calling C functions from Python
- **Code Injection**: [101-make_me_win.sh](./101-make_me_win.sh) - Script that demonstrates library preloading for a lottery game

## Learning Outcomes
- Understanding the purpose and structure of dynamic libraries
- Creating shared objects using appropriate compiler flags
- Managing symbol exports and visibility
- Configuring runtime library paths
- Applying dynamic library concepts for code modularization
- Implementing cross-language function calls
- Exploring dynamic loading and linking mechanisms
- Applying library versioning concepts
- Understanding security implications of dynamic loading