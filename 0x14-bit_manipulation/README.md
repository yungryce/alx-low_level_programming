# Bitwise Operators (Bit Manipulation)

Bitwise operators are special operators in programming languages that allow you to manipulate individual bits of binary numbers. These operators work at the binary level, enabling efficient and compact handling of data, particularly in low-level programming, hardware interactions, and optimization tasks.

## List of Bitwise Operators

1. AND (`&`):
   - Performs a bitwise AND operation between corresponding bits of two numbers.
   - The result has a 1 at a position only if both bits are 1; otherwise, it has a 0.

2. OR (`|`):
   - Performs a bitwise OR operation between corresponding bits of two numbers.
   - The result has a 1 at a position if either of the bits is 1.

3. XOR (`^`):
   - Performs a bitwise XOR (exclusive OR) operation between corresponding bits of two numbers.
   - The result has a 1 at a position if the bits are different (one is 0 and the other is 1); otherwise, it has a 0.

4. NOT (`~`):
   - Performs a bitwise NOT operation on a single number.
   - Flips all the bits, changing 0s to 1s and 1s to 0s.

5. Left Shift (`<<`):
   - Shifts the bits of a number to the left by a specified number of positions.
   - It effectively multiplies the number by 2 raised to the power of the shift amount.

6. Right Shift (`>>`):
   - Shifts the bits of a number to the right by a specified number of positions.
   - It effectively divides the number by 2 raised to the power of the shift amount.

## Common Use Cases

1. **Masking**: Using bitwise AND (`&`) to extract specific bits from an integer value by applying a mask.

2. **Setting Bits**: Using bitwise OR (`|`) to set specific bits in an integer to 1 while leaving other bits unchanged.

3. **Toggling Bits**: Using bitwise XOR (`^`) to toggle specific bits in an integer, changing 1s to 0s and vice versa.

4. **Inverting Bits**: Using bitwise NOT (`~`) to invert all bits in an integer.

5. **Bit Shifting**: Using left shift (`<<`) and right shift (`>>`) for efficient multiplication and division by powers of 2, respectively.

## Endianness

Bitwise operations are essential when dealing with endianness, which refers to the byte order of multi-byte data types. Understanding endianness is crucial when working with data shared across systems with different byte orders.

## Examples

```c
int a = 5;        // Binary: 00000101
int b = 3;        // Binary: 00000011

int result_and = a & b;   // Binary: 00000001 (Decimal: 1)
int result_or = a | b;    // Binary: 00000111 (Decimal: 7)
int result_xor = a ^ b;   // Binary: 00000110 (Decimal: 6)
int result_not = ~a;      // Binary: 11111010 (Decimal: -6)

int left_shift_result = a << 2; // Binary: 00010100 (Decimal: 20)
int right_shift_result = a >> 1; // Binary: 00000010 (Decimal: 2)
```

## Important Notes

- Be cautious when working with bitwise operators, as they can lead to complex code that may be difficult to understand and maintain.
- Bitwise operations are primarily used in low-level programming, hardware interactions, and optimization tasks.
- Ensure you consider the endianness of your system when working with multi-byte data across different platforms.

By understanding and utilizing bitwise operators, you can efficiently manipulate individual bits and perform various operations on binary data, making your code more versatile and optimized.
