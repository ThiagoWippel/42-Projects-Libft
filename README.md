*This project was created as part of the 42 curriculum by twippel-.*

# Libft - Your Very First Own Library

[![Language](https://img.shields.io/badge/language-C-blue)](https://github.com/ThiagoWippel/42-Projects-Libft)
[![Status](https://img.shields.io/badge/status-completed-brightgreen)](https://github.com/ThiagoWippel/42-Projects-Libft)
[![School](https://img.shields.io/badge/42-SP-963D97)](https://www.42sp.org.br/)

## Description

Libft is a foundational C library project that involves recoding a set of standard C library functions, as well as additional utility functions that will be useful throughout the 42 curriculum. The library includes reimplementations of libc functions (with the `ft_` prefix), extra string/memory manipulation functions, and a complete linked list API.

This project serves as the building block for all future 42 projects, reinforcing understanding of memory management, pointer arithmetic, string manipulation, and data structures in C.

## Library Overview

### Part 1 — Libc Functions

Reimplementations of standard C library functions, behaving identically to their originals as defined in the man pages.

**Character classification & conversion:**
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

**String manipulation:**
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`

**Memory manipulation:**
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

**Conversion:**
`ft_atoi`

### Part 2 — Additional Functions

Utility functions not included in the standard libc or present in a different form.

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from the beginning and end of a string |
| `ft_split` | Splits a string into an array of substrings using a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string, creating a new string |
| `ft_striteri` | Applies a function to each character of a string (in-place) |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 — Bonus: Linked List

A set of functions to manipulate a singly linked list using the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a single node using a deletion function |
| `ft_lstclear` | Frees an entire list and sets the pointer to NULL |
| `ft_lstiter` | Iterates and applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Instructions

### Compilation

```bash
make
```

This generates the `libft.a` static library.

Other available rules:

- `make clean` — Removes object files
- `make fclean` — Removes object files and the library
- `make re` — Recompiles the project from scratch
- `make bonus` — Compiles with the bonus linked list functions

### Usage

To use libft in another project, include the header and link the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror my_program.c -L. -lft -o my_program
```

## Project Structure

```
42-Projects-Libft/
├── includes/
│   └── libft.h              # Header with prototypes, includes, and t_list struct
├── src/
│   ├── ft_isalpha.c         # Character classification functions
│   ├── ft_isdigit.c
│   ├── ft_isalnum.c
│   ├── ft_isascii.c
│   ├── ft_isprint.c
│   ├── ft_strlen.c          # String functions
│   ├── ft_strlcpy.c
│   ├── ft_strlcat.c
│   ├── ft_strchr.c
│   ├── ft_strrchr.c
│   ├── ft_strncmp.c
│   ├── ft_strnstr.c
│   ├── ft_strdup.c
│   ├── ft_substr.c
│   ├── ft_strjoin.c
│   ├── ft_strtrim.c
│   ├── ft_split.c
│   ├── ft_strmapi.c
│   ├── ft_striteri.c
│   ├── ft_memset.c          # Memory functions
│   ├── ft_bzero.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_calloc.c
│   ├── ft_toupper.c         # Conversion functions
│   ├── ft_tolower.c
│   ├── ft_atoi.c
│   ├── ft_itoa.c
│   ├── ft_putchar_fd.c      # File descriptor output functions
│   ├── ft_putstr_fd.c
│   ├── ft_putendl_fd.c
│   ├── ft_putnbr_fd.c
│   ├── ft_lstnew_bonus.c    # Bonus: linked list functions
│   ├── ft_lstadd_front_bonus.c
│   ├── ft_lstsize_bonus.c
│   ├── ft_lstlast_bonus.c
│   ├── ft_lstadd_back_bonus.c
│   ├── ft_lstdelone_bonus.c
│   ├── ft_lstclear_bonus.c
│   ├── ft_lstiter_bonus.c
│   └── ft_lstmap_bonus.c
├── docs/
│   └── ft_*.md              # Individual function documentation
├── Makefile
└── README.md
```

## Resources

### References

- **C Standard Library (man pages)**: `man 3 <function_name>` — Official documentation for the original libc functions
- **BSD String Functions**: Functions like `strlcpy`, `strlcat`, and `bzero` come from BSD libc. On glibc systems, test with `#include <bsd/string.h>` and `-lbsd` flag
- **The C Programming Language (K&R)**: Classic reference for understanding C fundamentals and standard library design

### AI Usage

During the development of this project, I used AI assistance (Claude) for:

- **Concept clarification**: Understanding edge cases in functions like `memmove` (overlapping memory regions) and `strlcat` (behavior when `size` is less than `dest` length)
- **Debugging**: Identifying issues with boundary conditions and memory allocation errors
- **Norminette compliance**: Reviewing code style to ensure it conforms to the 42 coding standard

All code was written, tested, and validated by me. AI was used as a learning tool to understand the concepts behind the implementations, not to generate ready-made code.
