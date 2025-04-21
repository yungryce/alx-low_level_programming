# Project Manifest: Bit Manipulation in C

## Project Identity
- **Name**: Bit Manipulation
- **Type**: Educational
- **Scope**: Binary Operations and Bitwise Operators
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Style Guide**: Betty

## Demonstrated Competencies
- Bitwise operators application (AND, OR, XOR, NOT, shifts)
- Binary to decimal conversion
- Decimal to binary conversion
- Bit setting, clearing, and toggling
- Bit value extraction
- Endianness handling
- Binary string parsing
- Efficient power of two calculations
- Bit counting algorithms
- Secure password validation through bits

## System Context
This module explores bit manipulation in C, a powerful technique for performing operations at the binary level. Bit manipulation is essential for low-level programming, embedded systems, optimization, data compression, and cryptography, providing efficient solutions to problems that would be complex or inefficient with standard arithmetic operations.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Understanding of binary number system

## Development Workflow
1. Analyze problems suitable for bitwise solutions
2. Design algorithms using appropriate bitwise operators
3. Implement efficient bit manipulation functions
4. Test with various inputs and edge cases
5. Verify correct binary-level operations
6. Optimize for performance and readability
7. Document bit-level operations and constraints

## Implementation Specifics

### Binary Conversion
- **Binary to Unsigned Int**: [0-binary_to_uint.c](./0-binary_to_uint.c) - Converts a binary string to an unsigned int

### Binary Printing
- **Print Binary**: [1-print_binary.c](./1-print_binary.c) - Prints the binary representation of a number

### Bit Operations
- **Get Bit**: [2-get_bit.c](./2-get_bit.c) - Returns the value of a bit at a given index
- **Set Bit**: [3-set_bit.c](./3-set_bit.c) - Sets the value of a bit to 1 at a given index
- **Clear Bit**: [4-clear_bit.c](./4-clear_bit.c) - Sets the value of a bit to 0 at a given index
- **Flip Bits**: [5-flip_bits.c](./5-flip_bits.c) - Returns the number of bits needed to flip to get from one number to another

### Advanced Applications
- **Endianness Check**: [100-get_endianness.c](./100-get_endianness.c) - Checks the endianness of the system
- **Password Cracking**: [101-password](./101-password) - Contains the password for a crackme2 executable

### Header File
- **Function Prototypes**: [main.h](./main.h) - Contains all function prototypes for the project

## Learning Outcomes
- Understanding binary representation of data
- Applying bitwise operators for efficient operations
- Manipulating individual bits within integers
- Converting between binary and decimal representations
- Creating algorithms that operate at the bit level
- Identifying scenarios where bit manipulation is optimal
- Implementing space and time-efficient solutions
- Understanding hardware-level considerations like endianness