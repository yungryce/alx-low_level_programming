# Dynamic Libraries

This directory explores the creation and usage of dynamic libraries (shared objects) in C, focusing on runtime linking, symbol management, and cross-language interoperability.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand the differences between static and dynamic libraries
- Create dynamic libraries for C programs
- Use the `nm`, `ldd`, and `ldconfig` tools to work with shared libraries
- Configure environment variables for library discovery
- Implement runtime loading of libraries
- Create C functions that can be called from other languages
- Apply advanced techniques like library preloading

## What is a Dynamic Library?

A dynamic library (shared object in Linux, DLL in Windows) is a compiled collection of functions that can be loaded into memory at runtime rather than being compiled directly into programs. This allows multiple programs to share the same library code, saving memory and disk space.

## Dynamic Libraries vs Static Libraries

| Feature | Static Libraries | Dynamic Libraries |
|---------|-----------------|-------------------|
| **Linking Time** | Compile-time | Runtime |
| **File Extension** | `.a` (Unix), `.lib` (Windows) | `.so` (Unix), `.dll` (Windows) |
| **Size of Executable** | Larger (contains library code) | Smaller (references library) |
| **Memory Usage** | Higher (each program has its own copy) | Lower (shared between programs) |
| **Updates** | Require recompilation of programs | Library can be updated independently |
| **Loading Speed** | Faster initial load | Slightly slower initial load |
| **Dependency Management** | Self-contained | Requires library to be available at runtime |

## Creating a Dynamic Library

### 1. Compile with Position Independent Code

First, compile source files with the `-fPIC` (Position Independent Code) flag:

```bash
gcc -fPIC -c *.c
```

### 2. Create the Shared Library

Use `gcc` with the `-shared` flag to create the dynamic library:

```bash
gcc -shared -o libdynamic.so *.o
```

### 3. Verify the Library Content

Use `nm` to view the symbols in the library:

```bash
nm -D libdynamic.so
```

## Using a Dynamic Library

### 1. Compile with Library

Compile your program and link with the dynamic library:

```bash
gcc -L. -ldynamic -o program main.c
```

### 2. Set the Library Path

Tell the dynamic linker where to find the library:

```bash
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```

### 3. Run the Program

```bash
./program
```

### 4. Check Library Dependencies

Verify which shared libraries a program uses:

```bash
ldd program
```

## Project Files

### Basic Library Creation
- **[libdynamic.so](./libdynamic.so)**: A dynamic library containing various utility functions
- **[main.h](./main.h)**: Header file with function prototypes
- **[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh)**: Shell script to create a dynamic library from all `.c` files

### Cross-Language Integration
- **[100-operations.so](./100-operations.so)**: A dynamic library with math operations callable from Python
- **[100-tests.py](./100-tests.py)**: Python script demonstrating C function calls

### Advanced Techniques
- **[101-make_me_win.sh](./101-make_me_win.sh)**: Script demonstrating library preloading to alter program behavior

## Library Preloading

Library preloading allows you to override functions in other libraries, which is useful for testing, debugging, or modifying program behavior without changing source code:

```bash
LD_PRELOAD=./mylib.so ./program
```

## Cross-Language Function Calls

Dynamic libraries facilitate calling C functions from other programming languages:

### Python Example

```python
from ctypes import CDLL
lib = CDLL('./100-operations.so')
print(lib.add(5, 3))  # Calls the C 'add' function
```

## Useful Commands for Dynamic Libraries

| Command | Description |
|---------|-------------|
| `ldd` | Lists dynamic dependencies |
| `nm -D` | Lists symbols in dynamic libraries |
| `ldconfig` | Updates the system's library cache |
| `objdump -T` | Displays the library's symbol table |
| `LD_LIBRARY_PATH` | Environment variable for library search paths |
| `LD_PRELOAD` | Environment variable for library preloading |

## Common Issues and Solutions

### Library Not Found

If you get an error like `error while loading shared libraries`:
1. Verify the library exists in the expected location
2. Set the `LD_LIBRARY_PATH` environment variable
3. Run `ldconfig` if you've installed the library system-wide

### Undefined Symbols

If you get undefined symbol errors:
1. Use `nm -D` to check if the symbol exists in the library
2. Ensure you're not mixing incompatible library versions
3. Check that function prototypes match between declaration and definition

## Best Practices

1. **Versioning**: Include version information in library names for compatibility
2. **Symbol Visibility**: Control which symbols are exported from your library
3. **Error Handling**: Provide comprehensive error reporting in library functions
4. **Documentation**: Document the API for users of your library
5. **Backward Compatibility**: Maintain backward compatibility when updating libraries

## Compilation

All files should be compiled on Ubuntu 20.04 LTS using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
```

## Additional Resources

- [Dynamic Linking in Linux and Windows](https://www.symantec.com/connect/articles/dynamic-linking-linux-and-windows-part-one)
- [Creating and Using Dynamic Libraries - YouTube](https://www.youtube.com/watch?v=Slfwk28vhws)
- [Dynamic Linking and Libraries - GeeksforGeeks](https://www.geeksforgeeks.org/static-and-dynamic-linking-in-operating-systems/)
- [Dynamic Loading and the Linux Dynamic Linker](https://www.bottomupcs.com/dynamic_loading_and_the_dynamic_linker.xhtml)

