# File I/O in C

This directory explores file input/output operations in C using system calls, focusing on file descriptors, permissions, and proper resource management.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Create, open, close, read, and write files using system calls
- Understand and properly manage file descriptors
- Use the open, close, read, and write system calls correctly
- Use flags like O_RDONLY, O_WRONLY, O_RDWR appropriately
- Set file permissions when creating files
- Understand the difference between functions and system calls
- Implement proper error handling for I/O operations
- Parse ELF headers for binary file analysis

## System Calls vs. Standard Library Functions

When working with files in C, you can use either:

1. **Standard Library Functions** (`fopen`, `fclose`, `fread`, `fwrite`):
   - Higher-level, buffered I/O
   - Defined in `<stdio.h>`
   - Portable across different operating systems
   - Handle buffering automatically

2. **System Calls** (`open`, `close`, `read`, `write`):
   - Lower-level, direct OS interface
   - Defined in `<unistd.h>` and `<fcntl.h>`
   - Can be more efficient for certain operations
   - Require manual buffer management
   - Provide more direct control over file operations

This module focuses on using system calls for file operations.

## File Descriptors

File descriptors are small non-negative integers that the operating system uses to identify open files. By convention:
- 0: Standard input (STDIN)
- 1: Standard output (STDOUT)
- 2: Standard error (STDERR)

File descriptors 3 and above are assigned to other open files.

## Key System Calls

### `open`
```c
int open(const char *pathname, int flags, mode_t mode);
```
- Opens a file and returns a file descriptor
- **Flags** control how the file is opened (e.g., O_RDONLY, O_WRONLY, O_RDWR, O_CREAT)
- **Mode** sets permissions when creating a file (only used with O_CREAT)

### `close`
```c
int close(int fd);
```
- Closes a file descriptor, freeing the resource
- Returns 0 on success, -1 on error

### `read`
```c
ssize_t read(int fd, void *buf, size_t count);
```
- Reads up to `count` bytes from file descriptor `fd` into `buf`
- Returns the number of bytes read, 0 at EOF, or -1 on error

### `write`
```c
ssize_t write(int fd, const void *buf, size_t count);
```
- Writes up to `count` bytes from `buf` to file descriptor `fd`
- Returns the number of bytes written or -1 on error

### `dprintf`
```c
int dprintf(int fd, const char *format, ...);
```
- Prints formatted output to a file descriptor
- Similar to `printf` but writes to a file descriptor instead of stdout

## Project Files

### Basic File Operations
- **[0-read_textfile.c](./0-read_textfile.c)**: Reads and prints a text file to POSIX standard output
- **[1-create_file.c](./1-create_file.c)**: Creates a file with specified permissions and content
- **[2-append_text_to_file.c](./2-append_text_to_file.c)**: Appends text to the end of a file

### File Copy Program
- **[3-cp.c](./3-cp.c)**: Copies the content of one file to another with proper error handling

### ELF Header Analysis
- **[100-elf_header.c](./100-elf_header.c)**: Displays information contained in the ELF header of an ELF file

## File Permissions

When creating files with `open()` and the O_CREAT flag, you need to specify permissions using octal values:

```c
int fd = open("file.txt", O_CREAT | O_WRONLY, 0644);
```

Common permission modes:
- **0644**: Owner can read/write, group and others can read
- **0755**: Owner can read/write/execute, group and others can read/execute
- **0600**: Owner can read/write, no permissions for group or others

These permissions can also be specified using symbolic constants:
```c
int fd = open("file.txt", O_CREAT | O_WRONLY, 
              S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
```

## Error Handling

Proper error handling is crucial for I/O operations. Always check return values and use `errno` for detailed error information:

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main() {
    int fd = open("nonexistent.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return errno;
    }
    
    /* ... */
    
    if (close(fd) == -1) {
        perror("Error closing file");
        return errno;
    }
    
    return 0;
}
```

## Resource Management

Always close file descriptors when you're done with them. File descriptors are limited resources:

```c
int fd = open("file.txt", O_RDONLY);
if (fd == -1) {
    perror("Error opening file");
    return 1;
}

/* Use the file descriptor... */

/* Then close it */
if (close(fd) == -1) {
    perror("Error closing file");
    return 1;
}
```

## ELF Files

ELF (Executable and Linkable Format) is a common standard file format for executables, object code, shared libraries, and core dumps. The ELF header contains metadata about the file, including:

- Magic number (identification)
- File class (32-bit or 64-bit)
- Data encoding (endianness)
- Version
- OS ABI
- Type (executable, shared object, etc.)
- Entry point address
- Program header table information
- Section header table information

The `100-elf_header.c` program demonstrates how to parse and display this information.

## Usage Examples

### Reading a Text File

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;
    ssize_t rd, wr;
    char *buffer;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        free(buffer);
        return (0);
    }

    rd = read(fd, buffer, letters);
    if (rd == -1) {
        free(buffer);
        close(fd);
        return (0);
    }

    wr = write(STDOUT_FILENO, buffer, rd);
    
    free(buffer);
    close(fd);
    
    if (wr != rd)
        return (0);
        
    return (wr);
}
```

### Creating a File

```c
int create_file(const char *filename, char *text_content) {
    int fd, wr, len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL) {
        while (text_content[len])
            len++;
    }

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (len > 0) {
        wr = write(fd, text_content, len);
        if (wr == -1 || wr != len) {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
```

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [File Descriptors - Wikipedia](https://en.wikipedia.org/wiki/File_descriptor)
- [POSIX I/O System Calls - IBM Documentation](https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-posix-io)
- [ELF Format - Oracle Documentation](https://docs.oracle.com/cd/E19683-01/816-1386/6m7qcoblk/index.html)
- [Low-Level I/O in C - GeeksforGeeks](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)
