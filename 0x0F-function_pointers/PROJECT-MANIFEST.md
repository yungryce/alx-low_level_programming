# Project Manifest: Function Pointers in C

## Project Identity
- **Name**: Function Pointers
- **Type**: Educational
- **Scope**: Function Pointers and Callbacks
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Style Guide**: Betty

## Demonstrated Competencies
- Function pointer declaration and usage
- Callback function implementation
- Function address retrieval
- Indirect function calls
- Array of function pointers
- Runtime function selection
- Opcode interpretation
- Function pointer type definitions

## System Context
This module explores function pointers in C, which enable dynamic function selection at runtime, implementation of callbacks, and advanced programming techniques like event handling. Function pointers are essential for creating flexible and extensible code.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)

## Development Workflow
1. Define function pointer types and prototypes
2. Implement functions that can be referenced by pointers
3. Create functions that accept function pointers as parameters
4. Apply callback patterns for event handling
5. Test dynamic function selection at runtime
6. Ensure proper dereferencing and function calling

## Implementation Specifics

### Basic Function Pointer Operations
- **Function Printing**: [0-print_name.c](./0-print_name.c) - Prints a name using a function pointer
- **Array Iteration**: [1-array_iterator.c](./1-array_iterator.c) - Executes a function on each element of an array
- **Element Search**: [2-int_index.c](./2-int_index.c) - Searches for an integer using a comparison function

### Advanced Function Pointer Applications
- **Calculator Program**: [3-calc.h](./3-calc.h), [3-op_functions.c](./3-op_functions.c), [3-get_op_func.c](./3-get_op_func.c), [3-main.c](./3-main.c) - Implements a simple calculator with function pointers
- **Opcode Interpreter**: [100-main_opcodes.c](./100-main_opcodes.c) - Prints the opcodes of its own main function

## Learning Outcomes
- Understanding the concept and purpose of function pointers
- Implementing callback mechanisms using function pointers
- Creating flexible code with runtime function selection
- Managing function pointer arrays for related operations
- Applying function pointers in practical scenarios
- Understanding the relationship between functions and memory addresses
- Creating robust interfaces with function pointer parameters