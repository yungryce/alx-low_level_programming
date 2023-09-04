# File Input/Output (I/O) in C

File Input/Output (I/O) in C allows you to read from and write to files. This README provides an introduction to performing file I/O operations using C programming language.

## Table of Contents

1. [Introduction](#introduction)
2. [Opening a File](#opening-a-file)
3. [Reading from a File](#reading-from-a-file)
4. [Writing to a File](#writing-to-a-file)
5. [Closing a File](#closing-a-file)
6. [Error Handling](#error-handling)
7. [Conclusion](#conclusion)

## Introduction

File I/O is essential for interacting with external data sources and persisting information between program executions. In C, the `<stdio.h>` (standard input/output) library provides functions and macros for file I/O operations. The basic steps involved in file I/O are opening a file, reading from or writing to the file, and then closing the file.

## Opening a File

To open a file, you use the `fopen()` function. It takes two arguments: the filename and the mode. Modes include `"r"` for reading, `"w"` for writing (and creating if the file doesn't exist), `"a"` for appending, and more.

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Perform file operations here

    fclose(file); // Don't forget to close the file
    return 0;
}
```

## Reading from a File

To read from a file, you can use functions like `fgetc()`, `fgets()`, or `fread()`.

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}
```

## Writing to a File

To write to a file, you can use functions like `fputc()`, `fputs()`, or `fwrite()`.

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputs("Hello, world!\n", file);

    fclose(file);
    return 0;
}
```

## Closing a File

Always close the file using the `fclose()` function when you are done with it to release resources and ensure data is properly written.

## Error Handling

Check for errors after opening a file using the `fopen()` function. If `fopen()` returns `NULL`, it means an error occurred.

## Conclusion

File I/O is a fundamental concept in C programming, allowing you to read and write data to files. Understanding file I/O is crucial for developing applications that interact with external data sources and perform persistent storage.

For more advanced operations and error handling, refer to the documentation for the `<stdio.h>` library and other related functions.
