*This project has been created as part of the 42 curriculum by motolbix.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate a set of standard C library functions and implement additional utility functions that can be reused in future C projects.

By completing this project, I developed a better understanding of pointers, memory management, strings, data structures, and compilation in C.

The library is compiled into a static library named `libft.a`, which can be linked to other C programs.

## Instructions

### Compilation

To compile the library, clone the repository and navigate to the project directory:

```bash
git clone https://github.com/mohamedtolbix/libft.git
cd libft
```

Build the library using:

```bash
make
```

This command compiles the source files and creates `libft.a`.

### Makefile Rules

The Makefile provides the following rules:

- `make`: Compiles the source files and creates the library.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the compiled library.
- `make re`: Removes the previous build and recompiles the library.

### Using the Library

To use Libft in another C project, include the header file:

```c
#include "libft.h"
```

Compile your source file and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the resulting executable:

```bash
./program
```

Make sure that `libft.a` and `libft.h` are available in the appropriate locations.

## Library Contents

The library contains utility functions organized into the following categories.

### 1. Character Functions

These functions check whether a character belongs to a specific category.

- `ft_isalpha`: Checks whether a character is an alphabetic letter.
- `ft_isdigit`: Checks whether a character is a decimal digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a value belongs to the ASCII range.
- `ft_isprint`: Checks whether a character is printable.

### 2. String Functions

These functions perform operations on null-terminated strings.

- `ft_strlen`: Calculates the length of a string.
- `ft_strlcpy`: Copies a string into a destination buffer with a specified size.
- `ft_strlcat`: Appends a string to a destination buffer with a specified size.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.

### 3. Memory Functions

These functions operate directly on memory areas, byte by byte.

- `ft_memset`: Fills a memory area with a specified byte value.
- `ft_bzero`: Sets a specified number of bytes to zero.
- `ft_memcpy`: Copies bytes between non-overlapping memory areas.
- `ft_memmove`: Copies bytes between memory areas, including overlapping regions.

### 4. Linked List Functions

These functions provide operations for creating and managing singly linked lists using the `t_list` structure.

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node at the beginning of a list.
- `ft_lstsize`: Counts the nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a node at the end of a list.
- `ft_lstdelone`: Deletes one node using a specified deletion function.
- `ft_lstclear`: Deletes and frees an entire list.
- `ft_lstiter`: Applies a function to the content of each node.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

### Additional Functions

[Add the other functions implemented in your project, such as conversion, allocation, string manipulation, and output functions, if they are included in your Libft subject.]

## Resources

The following resources can be used to understand the C language, standard library functions, and memory management:

- The `man` pages for standard C functions, including `strlen`, `memset`, `memcpy`, and `calloc`.
- The C programming language documentation.
- The 42 Libft project subject.
- Compiler documentation and debugging tools.

### AI Usage

AI tools were used to help understand C programming concepts, including pointers, memory management, byte-level operations, linked lists, and Makefile rules. They were also used to clarify compiler errors and support the learning process.

The implementation and testing of the project should reflect the work actually completed by the author. Any additional AI assistance used for writing, debugging, reviewing, or documenting code should be described accurately.

## Author

**Login:** motolbix

**School:** 1337