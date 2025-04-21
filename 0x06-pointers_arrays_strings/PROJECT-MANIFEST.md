# Project Manifest: More Pointers, Arrays, and Strings in C

## Project Identity
- **Name**: More Pointers, Arrays, and Strings
- **Type**: Educational
- **Scope**: Advanced String Manipulation and Memory Operations
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Style Guide**: Betty

## Demonstrated Competencies
- Advanced string manipulation
- Buffer concatenation and copying
- String comparison operations
- Array transformation techniques
- Character encoding and decoding
- Pointer arithmetic
- Memory manipulation with constraints
- In-place array modification
- String case conversion
- Custom string manipulation functions

## System Context
This module builds upon the previous pointers, arrays, and strings concepts to explore more advanced memory operations and string manipulation techniques. These skills are essential for implementing efficient data processing, text handling, and custom data structure operations in C.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Advanced understanding of memory concepts

## Development Workflow
1. Analyze memory and string operation requirements
2. Implement custom versions of standard library functions
3. Apply buffer management and boundary checking
4. Test functions with various inputs and edge cases
5. Optimize algorithms for efficiency
6. Ensure proper memory access and modification
7. Validate against standard library behavior

## Implementation Specifics

### String Concatenation and Copying
- **String Concatenation**: [0-strcat.c](./0-strcat.c) - Concatenates two strings
- **Limited Concatenation**: [1-strncat.c](./1-strncat.c) - Concatenates with byte limit
- **String Copying**: [2-strncpy.c](./2-strncpy.c) - Copies a string with byte limit

### String Comparison and Searching
- **String Comparison**: [3-strcmp.c](./3-strcmp.c) - Compares two strings
- **Array Reversal**: [4-rev_array.c](./4-rev_array.c) - Reverses the content of an integer array
- **String Capitalization**: [5-string_toupper.c](./5-string_toupper.c) - Changes lowercase letters to uppercase

### Advanced String Manipulation
- **Title Capitalization**: [6-cap_string.c](./6-cap_string.c) - Capitalizes words after separators
- **Leet Encoding**: [7-leet.c](./7-leet.c) - Encodes a string into 1337 (leet speak)

### Complex String Operations
- **ROT13 Cipher**: [100-rot13.c](./100-rot13.c) - Encodes a string using the ROT13 cipher
- **Number Printing**: [101-print_number.c](./101-print_number.c) - Prints an integer
- **Buffer Addition**: [103-infinite_add.c](./103-infinite_add.c) - Adds two numbers stored as strings
- **Buffer Printing**: [104-print_buffer.c](./104-print_buffer.c) - Prints a buffer with special formatting

### Hardware Manipulation
- **Magic Numbers**: [102-magic.c](./102-magic.c) - Demonstrates pointer arithmetic to modify a value

## Learning Outcomes
- Implementing standard string library functions from scratch
- Understanding buffer management and sizing constraints
- Applying transformations to strings and arrays
- Creating encoding and encryption algorithms
- Manipulating memory with careful boundary checking
- Performing in-place array modifications
- Handling string operations with size constraints
- Applying pointer arithmetic for complex operations