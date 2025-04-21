# Variables, Conditionals, and Loops in C

This directory contains exercises and implementations focused on variables, data types, operators, conditionals, and loops in the C programming language.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand and use arithmetic, logical, and relational operators in C
- Implement conditional statements (if, if-else) to control program flow
- Create and manage loops using while, do-while, and for constructs
- Work with variables of different data types (int, char, etc.)
- Use ASCII values to manipulate characters
- Generate various output patterns using loops and conditionals
- Apply proper formatting and syntax for control structures
- Understand the difference between declaration and initialization
- Use nested conditional and loop structures effectively

## C Data Types and Variables

### Basic Data Types

| Type | Description | Example | Format Specifier | Typical Size |
|------|-------------|---------|------------------|--------------|
| `int` | Integer values | `int age = 25;` | `%d` or `%i` | 4 bytes |
| `float` | Single-precision floating point | `float price = 10.5f;` | `%f` | 4 bytes |
| `double` | Double-precision floating point | `double pi = 3.14159;` | `%lf` | 8 bytes |
| `char` | Single character | `char grade = 'A';` | `%c` | 1 byte |
| `_Bool` | Boolean value (C99) | `_Bool isValid = 1;` | `%d` | 1 byte |

### Type Modifiers

| Modifier | Description | Example |
|----------|-------------|---------|
| `signed` | Value can be positive or negative (default) | `signed int count = -10;` |
| `unsigned` | Value can only be positive | `unsigned int count = 10;` |
| `short` | Reduced-size integer | `short int small = 200;` |
| `long` | Extended-size integer | `long int big = 2000000L;` |
| `long long` | Even larger integers (C99) | `long long int huge = 9000000000LL;` |

### Variable Declaration and Initialization

```c
/* Declaration only */
int number;

/* Declaration with initialization */
int number = 42;

/* Multiple variables of the same type */
int x, y, z;

/* Multiple initializations */
int a = 1, b = 2, c = 3;

/* Constants (cannot be changed later) */
const double PI = 3.14159;
```

## Operators in C

### Arithmetic Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `+` | Addition | `int sum = a + b;` |
| `-` | Subtraction | `int diff = a - b;` |
| `*` | Multiplication | `int product = a * b;` |
| `/` | Division | `int quotient = a / b;` |
| `%` | Modulo (remainder) | `int remainder = a % b;` |
| `++` | Increment | `a++; /* a = a + 1 */` |
| `--` | Decrement | `b--; /* b = b - 1 */` |

### Relational Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `==` | Equal to | `if (a == b) {...}` |
| `!=` | Not equal to | `if (a != b) {...}` |
| `>` | Greater than | `if (a > b) {...}` |
| `<` | Less than | `if (a < b) {...}` |
| `>=` | Greater than or equal to | `if (a >= b) {...}` |
| `<=` | Less than or equal to | `if (a <= b) {...}` |

### Logical Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `&&` | Logical AND | `if (a > 0 && b > 0) {...}` |
| `\|\|` | Logical OR | `if (a > 0 \|\| b > 0) {...}` |
| `!` | Logical NOT | `if (!isDone) {...}` |

### Assignment Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `=` | Simple assignment | `x = 5;` |
| `+=` | Add and assign | `x += 2; /* x = x + 2 */` |
| `-=` | Subtract and assign | `x -= 2; /* x = x - 2 */` |
| `*=` | Multiply and assign | `x *= 2; /* x = x * 2 */` |
| `/=` | Divide and assign | `x /= 2; /* x = x / 2 */` |
| `%=` | Modulo and assign | `x %= 2; /* x = x % 2 */` |

## Conditional Statements

### The `if` Statement

```c
if (condition) {
    /* Code to execute if condition is true */
}
```

### The `if-else` Statement

```c
if (condition) {
    /* Code to execute if condition is true */
} else {
    /* Code to execute if condition is false */
}
```

### The `if-else if-else` Statement

```c
if (condition1) {
    /* Code to execute if condition1 is true */
} else if (condition2) {
    /* Code to execute if condition1 is false and condition2 is true */
} else {
    /* Code to execute if both condition1 and condition2 are false */
}
```

### Nested `if` Statements

```c
if (condition1) {
    if (condition2) {
        /* Code to execute if both condition1 and condition2 are true */
    } else {
        /* Code to execute if condition1 is true but condition2 is false */
    }
} else {
    /* Code to execute if condition1 is false */
}
```

### The Ternary Operator (Conditional Operator)

```c
result = (condition) ? value_if_true : value_if_false;
```

Example:
```c
int max = (a > b) ? a : b;  /* Assigns the larger of a and b to max */
```

## Loop Structures

### `while` Loop

```c
while (condition) {
    /* Code to execute repeatedly as long as condition is true */
}
```

Example:
```c
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}
/* Output: 0 1 2 3 4 */
```

### `do-while` Loop

```c
do {
    /* Code to execute at least once and repeatedly as long as condition is true */
} while (condition);
```

Example:
```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 5);
/* Output: 0 1 2 3 4 */
```

### `for` Loop

```c
for (initialization; condition; update) {
    /* Code to execute repeatedly as long as condition is true */
}
```

Example:
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
/* Output: 0 1 2 3 4 */
```

### Loop Control Statements

| Statement | Description |
|-----------|-------------|
| `break` | Exits the current loop immediately |
| `continue` | Skips the rest of the current iteration and continues with the next iteration |

## Project Files

- **[0-positive_or_negative.c](./0-positive_or_negative.c)**: Determines if a random number is positive, negative, or zero
- **[1-last_digit.c](./1-last_digit.c)**: Prints the last digit of a random number with specific conditions
- **[2-print_alphabet.c](./2-print_alphabet.c)**: Prints the lowercase alphabet using putchar
- **[3-print_alphabets.c](./3-print_alphabets.c)**: Prints the lowercase and uppercase alphabet
- **[4-print_alphabt.c](./4-print_alphabt.c)**: Prints the lowercase alphabet excluding 'q' and 'e'
- **[5-print_numbers.c](./5-print_numbers.c)**: Prints single digit numbers in base 10
- **[6-print_numberz.c](./6-print_numberz.c)**: Prints single digit numbers using putchar
- **[7-print_tebahpla.c](./7-print_tebahpla.c)**: Prints the lowercase alphabet in reverse
- **[8-print_base16.c](./8-print_base16.c)**: Prints all numbers of base 16 (hexadecimal)
- **[9-print_comb.c](./9-print_comb.c)**: Prints all possible combinations of single-digit numbers
- **[100-print_comb3.c](./100-print_comb3.c)**: Prints all possible combinations of two different digits
- **[101-print_comb4.c](./101-print_comb4.c)**: Prints all possible combinations of three different digits
- **[102-print_comb5.c](./102-print_comb5.c)**: Prints all possible combinations of two two-digit numbers

## Common Patterns and Techniques

### Character Manipulation with ASCII Values

```c
/* Print lowercase alphabet using ASCII values */
for (char c = 'a'; c <= 'z'; c++) {
    putchar(c);
}

/* Convert digit to character */
int num = 5;
putchar(num + '0');  /* Converts 5 to '5' */

/* Check if character is uppercase */
if (c >= 'A' && c <= 'Z') {
    /* Character is uppercase */
}
```

### Generating Combinations

```c
/* Print all combinations of two digits without repetition */
for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j <= 9; j++) {
        putchar(i + '0');
        putchar(j + '0');
        /* Add separator unless it's the last combination */
        if (i != 8 || j != 9) {
            putchar(',');
            putchar(' ');
        }
    }
}
```

### Using `srand()` and `rand()`

```c
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));  /* Initialize random number generator with current time */
    int n = rand();  /* Generate random number */
    
    /* Use modulo to limit range, e.g., 0-99 */
    int limited = rand() % 100;
    
    return (0);
}
```

## Best Practices

1. **Initialization**: Always initialize variables before using them
2. **Consistent Bracing**: Use consistent bracing style for all control structures
3. **Indentation**: Maintain consistent indentation for readability
4. **Loop Bounds**: Be careful with loop bounds to avoid off-by-one errors
5. **Compound Conditions**: Ensure compound conditions are correctly formed
6. **Variable Naming**: Use descriptive variable names for clarity
7. **Comments**: Add comments to explain complex logic or algorithms

## Common Pitfalls

1. **Assignment vs. Comparison**: Using `=` (assignment) instead of `==` (comparison) in conditions
2. **Infinite Loops**: Forgetting to update the loop control variable
3. **Off-by-One Errors**: Incorrect loop bounds (too many or too few iterations)
4. **Uninitialized Variables**: Using variables before assigning values
5. **Operator Precedence**: Not understanding operator order of evaluation
6. **Type Mismatch**: Mixing different data types in operations

## Compilation

All programs should be compiled using:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 filename.c -o program_name
```

## Additional Resources

- [C Operators (Microsoft Documentation)](https://learn.microsoft.com/en-us/cpp/c-language/c-operators)
- [Control Flow in C (Programiz)](https://www.programiz.com/c-programming/c-if-else-statement)
- [C Data Types (GeeksforGeeks)](https://www.geeksforgeeks.org/data-types-in-c/)
- [ASCII Table Reference](https://www.asciitable.com/)
