# Structures in C

This project aims to explain the concept of structures in the C programming language. Structures allow you to create user-defined data types that can hold multiple pieces of related data.

## Table of Contents

- [What are Structures?](#what-are-structures)
- [Declaration and Initialization](#declaration-and-initialization)
- [Accessing Structure Members](#accessing-structure-members)
- [Nested Structures](#nested-structures)
- [Arrays of Structures](#arrays-of-structures)
- [Pointers to Structures](#pointers-to-structures)
- [Common Use Cases](#common-use-cases)
- [Contributing](#contributing)
- [License](#license)

## What are Structures?

Structures, also known as structs, are user-defined data types in C that allow you to group different data types together under a single name. This enables you to create more complex data structures to organize and manipulate related data efficiently.

```c
struct Student {
    char name[50];
    int age;
    float gpa;
};
```

## Declaration and Initialization

To declare a structure variable, use the `struct` keyword followed by the structure name and the variable name:

```c
struct Student s1;
```

You can also initialize the structure at the time of declaration:

```c
struct Student s2 = {"John Doe", 20, 3.8};
```

## Accessing Structure Members

You can access structure members using the dot `.` operator:

```c
printf("Name: %s\n", s2.name);
printf("Age: %d\n", s2.age);
printf("GPA: %.2f\n", s2.gpa);
```

## Nested Structures

Structures can be nested inside other structures:

```c
struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char title[100];
    struct Date eventDate;
};
```

## Arrays of Structures

You can create arrays of structures to store multiple records:

```c
struct Student students[3] = {
    {"Alice", 19, 3.5},
    {"Bob", 21, 3.2},
    {"Eve", 20, 3.9}
};
```

## Pointers to Structures

You can use pointers to access and manipulate structure members:

```c
struct Student *ptrStudent = &s1;
printf("Name: %s\n", ptrStudent->name);
printf("Age: %d\n", ptrStudent->age);
```

## Common Use Cases

Structures are commonly used for various purposes, such as representing records in databases, defining complex data structures, and passing multiple parameters to functions.

## Contributing

Contributions are welcome! If you find any issues or want to enhance the content, feel free to submit a pull request.
