# Static Libraries - README

## Overview

Static libraries are collections of precompiled object files that are linked with a program during the compilation process. They contain compiled code from multiple source files combined into a single library file. Static libraries provide a convenient way to distribute and reuse code across different projects.

There are two types of libraries commonly used in software development:

1. Static Libraries: Static libraries, also known as archive libraries, have the file extension `.a` (on Unix-like systems) or `.lib` (on Windows systems). They are linked directly into an executable at compile time. The code from the library is physically copied into the final executable, resulting in a standalone binary.

2. Shared Libraries: Shared libraries, also known as dynamic link libraries (DLLs) on Windows or shared objects (SOs) on Unix-like systems, have the file extension `.so` (on Unix-like systems) or `.dll` (on Windows systems). Shared libraries are loaded at runtime by the executable and can be shared by multiple processes, reducing the overall memory footprint.

In this example, we'll focus on creating a static library.

## Creating a Static Library

To create a static library, follow these steps:

1. Compile the source files: Use a compiler to compile the source files into object files. Object files have the extension `.o` and contain the compiled machine code for each individual source file. 

   ```bash
   gcc -c file1.c -o file1.o
   gcc -c file2.c -o file2.o
   gcc -c file3.c -o file3.o
   ```


This will produce three object files: `file1.o`, `file2.o`, and `file3.o`.

2. Create the static library: Use the archiver tool (usually `ar`) to create the static library from the object files.

   ```bash
   ar rcs libyourlibrary.a file1.o file2.o file3.o
   ```

This command creates a static library named `libyourlibrary.a` and includes the object files `file1.o`, `file2.o`, and `file3.o` in it.

3. Optional: Clean up intermediate files: If desired, remove the object files after creating the static library.

   ```bash
   rm file1.o file2.o file3.o
   ```

The resulting static library (`libyourlibrary.a` in this example) can be linked with other programs during the compilation process by specifying the library name with the `-l` flag and the library path with the `-L` flag.

```bash
gcc -o myprogram main.c -L/path/to/library -lyourlibrary
```

In this example, `main.c` is the source file for the main program, and `/path/to/library` is the directory containing the static library `libyourlibrary.a`. The `-lyourlibrary` flag specifies to link against the library during the compilation.

That's it! You have successfully created a static library and linked it with a program.

Note: The specific commands and tools may vary depending on your operating system and development environment. The examples provided assume a Unix-like environment.

