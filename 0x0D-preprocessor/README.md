# C Preprocessor Directives and Macros

This directory contains exercises and implementations focused on C preprocessor directives and macro usage, exploring how to extend and customize the C language through preprocessing techniques.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand the role of the preprocessor in the C compilation process
- Use common preprocessor directives (`#define`, `#include`, `#ifdef`, etc.)
- Create and use object-like and function-like macros
- Implement conditional compilation techniques
- Guard header files against multiple inclusion
- Apply predefined macros for debugging and compilation information
- Optimize code using macro-based abstractions
- Understand the limitations and potential pitfalls of macro usage

## The C Preprocessing Phase

The preprocessor is the first phase in the C compilation process, occurring before actual compilation begins. It performs text manipulation on the source code, following directives that begin with `#`. The preprocessing phase:

1. Removes comments
2. Includes header files
3. Expands macros
4. Handles conditional compilation
5. Processes other preprocessor directives

The result is a modified source code that is then passed to the compiler.

## Common Preprocessor Directives

| Directive | Purpose | Example |
|-----------|---------|---------|
| `#define` | Define a macro | `#define PI 3.14159` |
| `#include` | Include a header file | `#include <stdio.h>` |
| `#ifdef` | Conditional compilation if defined | `#ifdef DEBUG` |
| `#ifndef` | Conditional compilation if not defined | `#ifndef HEADER_H` |
| `#if` | Conditional compilation based on expression | `#if SIZE > 10` |
| `#else` | Alternative for conditional compilation | `#else` |
| `#elif` | Else if for conditional compilation | `#elif SYSTEM == LINUX` |
| `#endif` | End conditional compilation block | `#endif` |
| `#undef` | Undefine a macro | `#undef PI` |
| `#pragma` | Implementation-specific instructions | `#pragma once` |
| `#error` | Forces compilation error with message | `#error "Unsupported platform"` |

## Project Files

- **[0-object_like_macro.h](./0-object_like_macro.h)**: Defines a macro named `SIZE` as an abbreviation for the token `1024`
- **[1-pi.h](./1-pi.h)**: Defines a macro named `PI` as an abbreviation for the token `3.14159265359`
- **[2-main.c](./2-main.c)**: Prints the name of the file it was compiled from
- **[3-function_like_macro.h](./3-function_like_macro.h)**: Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`
- **[4-sum.h](./4-sum.h)**: Defines a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`

## Types of Macros

### Object-like Macros

Object-like macros are simple text substitutions. They are commonly used for constants:

```c
#define PI 3.14159
#define MAX_ELEMENTS 100
#define DEBUG_MODE
```

Usage:
```c
double area = PI * radius * radius;
int buffer[MAX_ELEMENTS];

#ifdef DEBUG_MODE
printf("Debug info\n");
#endif
```

### Function-like Macros

Function-like macros behave similar to functions but are expanded at preprocessing time:

```c
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
```

Usage:
```c
int absoluteValue = ABS(-10);  // Expands to: (((-10)) < 0 ? -(-10) : (-10))
int maximum = MAX(5, 7);       // Expands to: ((5) > (7) ? (5) : (7))
int squared = SQUARE(4);       // Expands to: ((4) * (4))
```

## Macro Best Practices

### 1. Use Parentheses for Arguments

Always wrap macro parameters in parentheses to avoid unexpected operator precedence issues:

```c
/* Bad */
#define SQUARE(x) x * x

/* Good */
#define SQUARE(x) ((x) * (x))
```

The bad version can cause problems:
```c
int result = SQUARE(2 + 3);  // Expands to: 2 + 3 * 2 + 3 = 11 (not 25)
```

### 2. Use Parentheses for the Entire Expression

Wrap the entire macro expression in parentheses:

```c
/* Better */
#define SQUARE(x) ((x) * (x))
```

### 3. Use Capital Letters for Macro Names

By convention, macro names are typically written in uppercase to distinguish them from variables and functions:

```c
#define MAX_BUFFER_SIZE 1024
#define PI 3.14159
```

### 4. Be Cautious with Side Effects

Macros can cause unexpected behavior with expressions that have side effects:

```c
#define SQUARE(x) ((x) * (x))

int i = 5;
int result = SQUARE(i++);  // Expands to: ((i++) * (i++))
// i is incremented twice and result is undefined
```

## Header Guard Pattern

Header guards prevent multiple inclusion of the same header file, avoiding redefinition errors:

```c
#ifndef HEADER_NAME_H
#define HEADER_NAME_H

/* Header file contents */

#endif /* HEADER_NAME_H */
```

Alternative using `#pragma once` (non-standard but widely supported):

```c
#pragma once

/* Header file contents */
```

## Conditional Compilation

Conditional compilation allows you to include or exclude code based on conditions:

```c
#define DEBUG 1

#if DEBUG
    printf("Debug mode is on\n");
    /* Debug-only code */
#else
    /* Release-only code */
#endif
```

Platform-specific code:

```c
#ifdef _WIN32
    /* Windows-specific code */
#elif defined(__APPLE__)
    /* macOS-specific code */
#elif defined(__linux__)
    /* Linux-specific code */
#else
    /* Default code */
#endif
```

## Predefined Macros

The C standard defines several predefined macros that can be useful:

| Macro | Description |
|-------|-------------|
| `__FILE__` | Current file name as a string literal |
| `__LINE__` | Current line number as a decimal constant |
| `__DATE__` | Compilation date in "Mmm dd yyyy" format |
| `__TIME__` | Compilation time in "hh:mm:ss" format |
| `__STDC__` | Defined as 1 when compiling with a standard-conforming compiler |
| `__func__` | Current function name (C99, not a macro but similar usage) |

Example usage:
```c
void debugPrint(const char *message) {
    printf("[%s:%d] %s: %s\n", __FILE__, __LINE__, __func__, message);
}
```

## Advanced Techniques

### Stringification Operator (#)

The `#` operator converts a macro parameter to a string literal:

```c
#define STRINGIFY(x) #x

printf("%s\n", STRINGIFY(Hello));  // Prints: Hello
```

### Token Concatenation Operator (##)

The `##` operator concatenates two tokens:

```c
#define CONCAT(a, b) a##b

int xy = 10;
printf("%d\n", CONCAT(x, y));  // Prints: 10 (accesses variable xy)
```

### Variadic Macros (C99 and later)

Macros can accept a variable number of arguments using `...` and `__VA_ARGS__`:

```c
#define DEBUG_PRINT(fmt, ...) printf("[DEBUG] " fmt, __VA_ARGS__)

DEBUG_PRINT("Value: %d\n", 42);  // Prints: [DEBUG] Value: 42
```

## Common Pitfalls and Limitations

1. **Macros are textual substitutions**, not type-checked like functions
2. **Debugging can be difficult** as the debugger sees the expanded code, not the original macro
3. **Error messages** refer to the expanded code, which can be confusing
4. **Side effects** can be duplicated when the argument appears multiple times in the macro
5. **Scope rules** don't apply to macros; they're globally visible once defined

## Alternatives to Macros

In modern C programming, there are often better alternatives to macros:

- **Inline functions** for function-like macros (type-safe, better debugging)
- **Const variables** for object-like macros
- **Enumerations** for related constants

## Compilation

All programs that use these macros should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o output_file source_file.c
```

## Additional Resources

- [The C Preprocessor - GNU Documentation](https://gcc.gnu.org/onlinedocs/cpp/)
- [C Preprocessor - GeeksforGeeks](https://www.geeksforgeeks.org/cc-preprocessors/)
- [Advanced C: Macros and the Preprocessor - Embedded](https://www.embedded.com/advanced-c-macros-and-the-c-preprocessor/)
- [Macro Pitfalls and Techniques - C FAQ](http://c-faq.com/cpp/index.html)
