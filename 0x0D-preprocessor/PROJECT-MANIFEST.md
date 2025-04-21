# Project Manifest: C Preprocessor

## Project Identity
- **Name**: C Preprocessor
- **Type**: Educational
- **Scope**: Preprocessor Directives and Macros
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Tools**: cpp (C Preprocessor)
- **Style Guide**: Betty

## Demonstrated Competencies
- Macro definition and usage
- Header file creation and organization
- Object-like macros for constants
- Function-like macros for operations
- Conditional compilation with #ifdef/#ifndef
- Include guards for header files
- Predefined macros for debugging
- Advanced preprocessing techniques

## System Context
This module explores the C preprocessor, which operates before the compilation stage to perform text substitution in the source code. Understanding preprocessor directives is essential for creating maintainable, configurable, and portable C programs.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler with preprocessor support
- Text Editor (vi/vim/emacs)

## Development Workflow
1. Define macros for constants and expressions
2. Create header files with appropriate include guards
3. Implement function-like macros for common operations
4. Test macro expansion and substitution
5. Apply conditional compilation techniques
6. Observe preprocessing output using gcc -E

## Implementation Specifics

### Macro Fundamentals
- **Size Constant**: [0-object_like_macro.h](./0-object_like_macro.h) - Defines a macro for the token SIZE
- **PI Constant**: [1-pi.h](./1-pi.h) - Defines a macro for the token PI

### Function-like Macros
- **File Name Access**: [2-main.c](./2-main.c) - Prints the name of the source file using __FILE__
- **Absolute Value**: [3-function_like_macro.h](./3-function_like_macro.h) - Computes the absolute value of a number
- **Sum Operation**: [4-sum.h](./4-sum.h) - Computes the sum of two numbers

## Learning Outcomes
- Understanding the role of the preprocessor in the compilation process
- Creating and using macros for constants and expressions
- Implementing function-like macros with appropriate parentheses
- Applying include guards to prevent multiple inclusions
- Using predefined macros for debugging and information
- Managing header file organization and dependencies
- Avoiding common preprocessor pitfalls