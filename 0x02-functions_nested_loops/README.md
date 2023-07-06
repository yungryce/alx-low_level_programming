# Functions, Loops, and Nested Loops in C

This repository provides an introduction to functions, loops, and nested loops in the C programming language.

## Functions

In C, functions are reusable blocks of code that perform a specific task. They allow you to modularize your code and make it more organized. Here's an example of a function in C:

```c
#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() {
    int result = sum(5, 3);
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}
```

# Loops and Nested Loops in C

Loops are used in programming to repeatedly execute a block of code until a specific condition is met. In C, there are several types of loops available, including the `for`, `while`, and `do-while` loops. Additionally, you can use nested loops to create more complex looping structures.

## Nested Loops

Nested loops are loops within loops, allowing you to create more complex repetitive structures. By nesting loops, you can perform actions that require multiple levels of iteration. Here's an example of a nested loop:

```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        printf("%d, %d\n", i, j);
    }
}
```

## The `for` Loop

The `for` loop is used to execute a block of code for a specific number of times. Here's the syntax of the `for` loop:

```c
for (initialization; condition; increment/decrement) {
    // Code to execute
}

for (int i = 0; i < 5; i++) {
    printf("Iteration: %d\n", i);
}
```

## The while Loop

The `while` loop is used to repeatedly execute a block of code as long as a condition remains true. Here's the syntax of the while loop:

```c
while (condition) {
    // Code to execute
}

int count = 0;

while (count < 3) {
    printf("Count: %d\n", count);
    count++;
}
```

## The do-while Loop

The `do-while` loop is similar to the while loop but guarantees that the code inside the loop will be executed at least once before checking the condition. Here's the syntax of the do-while loop:

```c
do {
    // Code to execute
} while (condition);


int i = 0;

do {
    printf("Iteration: %d\n", i);
    i++;
} while (i < 5);
```

# Conclusion

Loops are powerful constructs in programming, enabling repetitive execution and efficient handling of repetitive tasks. The for, while, and do-while loops, along with nested loops, provide flexibility in controlling program flow and iterating over data structures.

Feel free to experiment with different loop structures and explore additional loop control statements like break and continue to enhance the functionality of your C programs.
