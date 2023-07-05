# Recursion in C

This repository contains examples and explanations of recursion in the C programming language. Recursion is a powerful technique that allows a function to call itself, enabling the solution of complex problems by breaking them down into smaller, more manageable subproblems.

## Table of Contents

- [What is Recursion?](#what-is-recursion)
- [How Recursion Works](#how-recursion-works)
- [Base Case](#base-case)
- [Recursive Case](#recursive-case)
- [Example: Calculating Factorial](#example-calculating-factorial)
- [Example: Fibonacci Sequence](#example-fibonacci-sequence)
- [Advantages of Recursion](#advantages-of-recursion)
- [Disadvantages of Recursion](#disadvantages-of-recursion)
- [Conclusion](#conclusion)

## What is Recursion?

Recursion is a programming technique where a function calls itself during its execution. It allows for the solving of complex problems by dividing them into smaller, similar subproblems. Each subproblem is solved in the same way, and the solutions are combined to obtain the final result.

## How Recursion Works

Recursion follows a specific pattern:

1. The function checks for a **base case** where the problem can be solved directly without further recursion.
2. If the base case is not met, the function makes one or more **recursive calls** to itself with modified parameters. These recursive calls solve smaller subproblems.
3. The function combines the results of the recursive calls to obtain the final result.

## Base Case

The base case is the simplest form of the problem that can be solved directly without further recursion. It acts as the stopping condition for the recursive calls. Without a base case, the recursion would continue indefinitely, resulting in stack overflow or infinite loops.

## Recursive Case

The recursive case represents the general case where the function makes one or more recursive calls to itself with modified parameters. These modified parameters usually move the function closer to the base case with each recursive call. The recursive case helps break down the original problem into smaller subproblems.

## Example: Calculating Factorial

The factorial of a non-negative integer `n`, denoted as `n!`, is the product of all positive integers from `1` to `n`. Here's an example of a recursive function to calculate the factorial of a number in C:

```c
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
