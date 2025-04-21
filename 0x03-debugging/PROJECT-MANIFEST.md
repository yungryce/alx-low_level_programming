# Project Manifest: Debugging in C

## Project Identity
- **Name**: Debugging
- **Type**: Educational
- **Scope**: Debugging Techniques and Practices
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Debugging Tools**: GDB, printf debugging
- **Style Guide**: Betty

## Demonstrated Competencies
- Manual code tracing
- Identifying logic errors
- Fixing infinite loops
- Correcting function implementations
- Conditional statement debugging
- Systematic problem-solving
- Test case development
- Code analysis and understanding
- Bug documentation and resolution

## System Context
This module focuses on debugging, a critical skill for all programmers. It teaches methodical approaches to finding and fixing errors in C programs, emphasizing both manual techniques and tool-assisted debugging. The skills acquired are applicable to all software development activities.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- GDB Debugger
- Text Editor (vi/vim/emacs)

## Development Workflow
1. Identify problems in existing code
2. Analyze code to understand the intended behavior
3. Add debugging statements or use debugging tools
4. Trace program execution to find errors
5. Fix identified bugs with minimal code changes
6. Test solutions with various inputs
7. Document the bugs found and fixes applied

## Implementation Specifics

### Logic Error Correction
- **Main Test File**: [0-main.c](./0-main.c) - Test file to validate function behavior
- **Infinite Loop Fix**: [1-main.c](./1-main.c) - Fixing an infinite loop situation

### Function Debugging
- **Largest Number**: [2-largest_number.c](./2-largest_number.c) - Fixing a function to correctly identify the largest of three numbers
- **Print Remaining Days**: [3-print_remaining_days.c](./3-print_remaining_days.c) - Debugging a function that calculates remaining days in a year, including leap year handling

### Debugging Header
- **Main Header**: [main.h](./main.h) - Header file with function prototypes for debugging

## Learning Outcomes
- Applying methodical approaches to debugging
- Reading code to understand its intention
- Identifying common bug types (logic errors, infinite loops)
- Using appropriate debugging techniques
- Implementing fixes for identified bugs
- Testing solutions thoroughly
- Documenting debugging processes
- Understanding the importance of code review
- Applying systematic problem-solving to programming errors