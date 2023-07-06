# Variables, Types, and Conditionals in C

This repository provides an introduction to variables, types, and conditionals in the C programming language.

# Variables

In C, variables are used to store and manipulate data. Before using a variable, it needs to be declared with a specific type. Some common types in C include:

- `int`: Used to store integers (whole numbers).
- `float` or `double`: Used to store floating-point numbers (decimal numbers).
- `char`: Used to store individual characters.
- `bool`: Used to store boolean values (`true` or `false`).

To declare a variable, specify its type followed by the variable name. For example:

```c
int age; // Declaring an integer variable named "age"
float price; // Declaring a floating-point variable named "price"
char grade; // Declaring a character variable named "grade"
bool isReady; // Declaring a boolean variable named "isReady"


# Types and Type Modifiers

C provides several type modifiers to further specify the behavior of variables. Some common type modifiers include:

- `signed and unsigned`: Used to specify the sign (positive or negative) of integers.
- `short and long`: Used to specify the size of integers or floating-point numbers.

# The `if` Statement

The `if` statement allows you to execute a block of code if a certain condition is true. Here's the basic syntax of the `if` statement:

```c
if (condition) {
    // Code to execute if the condition is true
}

# The else if Statement

The else if statement allows you to test multiple conditions and execute different code blocks depending on the conditions. Here's the syntax of the else if statement:

```c
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition1 is false and condition2 is true
} else {
    // Code to execute if both condition1 and condition2 are false
}

# The else Statement

The else statement allows you to specify a code block to execute if the condition in the preceding if or else if statement is false. Here's the syntax of the else statement:

```c
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}

