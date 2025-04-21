# Bit Manipulation in C

This directory contains exercises and implementations focused on bit manipulation in C, exploring bitwise operators, binary representation of data, and efficient algorithms that operate at the bit level.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand binary number representation and operations
- Apply bitwise operators (AND, OR, XOR, NOT, shifts) to solve problems
- Manipulate individual bits within integers
- Implement efficient bit-level algorithms
- Convert between decimal, binary, and hexadecimal representations
- Understand bit fields and bit masking techniques
- Use bit manipulation for optimization and space efficiency
- Develop skills for systems programming and embedded applications

## Bitwise Operators in C

C provides several operators for manipulating bits:

| Operator | Name | Description |
|----------|------|-------------|
| `&` | Bitwise AND | Sets each bit to 1 if both bits are 1 |
| `\|` | Bitwise OR | Sets each bit to 1 if at least one bit is 1 |
| `^` | Bitwise XOR | Sets each bit to 1 if only one bit is 1 |
| `~` | Bitwise NOT | Inverts all the bits |
| `<<` | Left Shift | Shifts bits left by specified number of positions |
| `>>` | Right Shift | Shifts bits right by specified number of positions |

## Project Files

- **[0-binary_to_uint.c](./0-binary_to_uint.c)**: Converts a binary number to an unsigned int
- **[1-print_binary.c](./1-print_binary.c)**: Prints the binary representation of a number
- **[2-get_bit.c](./2-get_bit.c)**: Returns the value of a bit at a given index
- **[3-set_bit.c](./3-set_bit.c)**: Sets the value of a bit to 1 at a given index
- **[4-clear_bit.c](./4-clear_bit.c)**: Sets the value of a bit to 0 at a given index
- **[5-flip_bits.c](./5-flip_bits.c)**: Returns the number of bits needed to flip to convert one number to another
- **[100-get_endianness.c](./100-get_endianness.c)**: Checks the endianness of the system
- **[101-password](./101-password)**: Contains the password for the crackme3 program

## Common Bit Manipulation Techniques

### Setting a Bit

To set the nth bit of a number to 1:

```c
unsigned int set_bit(unsigned int num, unsigned int position)
{
    return (num | (1 << position));
}
```

### Clearing a Bit

To clear (set to 0) the nth bit of a number:

```c
unsigned int clear_bit(unsigned int num, unsigned int position)
{
    return (num & ~(1 << position));
}
```

### Toggling a Bit

To toggle (invert) the nth bit of a number:

```c
unsigned int toggle_bit(unsigned int num, unsigned int position)
{
    return (num ^ (1 << position));
}
```

### Checking a Bit

To check if the nth bit of a number is set (1):

```c
int check_bit(unsigned int num, unsigned int position)
{
    return ((num >> position) & 1);
}
```

### Counting Set Bits (Hamming Weight)

To count the number of set (1) bits in a number:

```c
unsigned int count_set_bits(unsigned int num)
{
    unsigned int count = 0;
    while (num)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
```

A more efficient implementation (Brian Kernighan's Algorithm):

```c
unsigned int count_set_bits(unsigned int num)
{
    unsigned int count = 0;
    while (num)
    {
        num &= (num - 1); /* Clear the least significant set bit */
        count++;
    }
    return count;
}
```

### Finding the Least Significant Set Bit

To find the position of the least significant set bit:

```c
int find_lsb(unsigned int num)
{
    if (num == 0)
        return -1; /* No set bit */
        
    int position = 0;
    while (!(num & 1))
    {
        num >>= 1;
        position++;
    }
    return position;
}
```

## Practical Applications

### Bit Fields

Bit fields allow for space-efficient storage of multiple boolean or small integer values:

```c
struct Flags {
    unsigned int active : 1;     /* 1 bit for boolean */
    unsigned int ready : 1;      /* 1 bit for boolean */
    unsigned int priority : 3;   /* 3 bits for values 0-7 */
    unsigned int mode : 2;       /* 2 bits for values 0-3 */
};
```

### Bit Masking and Flags

Using bit flags for representing multiple options:

```c
#define FLAG_READ   (1 << 0)   /* 00000001 */
#define FLAG_WRITE  (1 << 1)   /* 00000010 */
#define FLAG_EXEC   (1 << 2)   /* 00000100 */

/* Setting flags */
unsigned int permissions = 0;
permissions |= FLAG_READ | FLAG_WRITE;

/* Checking flags */
if (permissions & FLAG_READ)
    printf("Read permission granted\n");

/* Clearing flags */
permissions &= ~FLAG_WRITE;
```

### Bitmaps

Using bits to represent a set of values efficiently:

```c
#define MAX_ELEMENTS 64

unsigned long long bitmap = 0;

/* Add element to set */
void add_element(int n)
{
    bitmap |= (1ULL << n);
}

/* Remove element from set */
void remove_element(int n)
{
    bitmap &= ~(1ULL << n);
}

/* Check if element is in set */
int has_element(int n)
{
    return (bitmap & (1ULL << n)) != 0;
}
```

### Power of 2 Checks

Efficiently checking if a number is a power of 2:

```c
int is_power_of_two(unsigned int n)
{
    return n && !(n & (n - 1));
}
```

### Endianness Check

Checking the endianness of the system:

```c
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;
    return (*c); /* Returns 1 for little endian, 0 for big endian */
}
```

## Converting Between Number Systems

### Decimal to Binary (String Representation)

```c
char *decimal_to_binary(unsigned int n)
{
    /* Allocate enough space for a 32-bit number plus null terminator */
    char *binary = malloc(33 * sizeof(char));
    if (binary == NULL)
        return NULL;
        
    binary[32] = '\0';
    
    int i;
    for (i = 31; i >= 0; i--)
    {
        binary[31 - i] = ((n >> i) & 1) + '0';
    }
    
    return binary;
}
```

### Binary (String) to Decimal

```c
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return 0;
        
    unsigned int decimal = 0;
    
    while (*b)
    {
        if (*b != '0' && *b != '1')
            return 0;
            
        decimal = (decimal << 1) | (*b - '0');
        b++;
    }
    
    return decimal;
}
```

## Bitwise Performance Optimizations

### Finding the Maximum of Two Numbers

```c
int max(int a, int b)
{
    /* a > b ? a : b */
    return b + ((a - b) & ((a - b) >> 31));
}
```

### Finding the Minimum of Two Numbers

```c
int min(int a, int b)
{
    /* a < b ? a : b */
    return a - ((a - b) & ((a - b) >> 31));
}
```

### Swapping Values Without a Temporary Variable

```c
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
```

> Note: This XOR-based swap can be less efficient than a traditional swap using a temporary variable on modern processors and can cause issues if `a` and `b` point to the same location.

## Bit Manipulation Limitations and Considerations

1. **Portability**: The behavior of bitwise operations, especially with signed integers, can vary across platforms
2. **Readability**: Bit manipulation code can be difficult to read and understand
3. **Maintenance**: Complex bit manipulations might be hard to maintain and update
4. **Sign Extension**: When shifting signed integers, sign extension behavior might vary
5. **Overflow/Underflow**: Bitwise operations don't trigger arithmetic overflow warnings

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [Bitwise Operators in C - GeeksforGeeks](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)
- [Bit Manipulation - HackerEarth](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/)
- [Bit Twiddling Hacks - Stanford Graphics](https://graphics.stanford.edu/~seander/bithacks.html)
- [The Art of Bit Manipulation - Medium](https://medium.com/swlh/the-art-of-bit-manipulation-with-javascript-28301cfdf6f5)
- [Endianness Explained - YouTube](https://www.youtube.com/watch?v=NcaiHcBvDR4)
