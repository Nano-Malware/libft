*This project has been created as part of the 42 curriculum by **rbourjal**.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate a collection of standard C library functions and develop additional utility functions from scratch.

The project helps develop a deeper understanding of C programming, memory management, pointers, strings, data structures, and compilation.

The library is organized into three main parts:

- **Part 1 — Libc functions:** Reimplement standard C library functions for character checking, memory manipulation, string operations, and conversions.
- **Part 2 — Additional functions:** Implement useful functions for string manipulation, character processing, and writing data to file descriptors.
- **Part 3 — Linked lists:** Implement functions to create, manipulate, traverse, and free singly linked lists.

The compiled library is named `libft.a` and can be reused in future C projects.

## Instructions

### Requirements

- A C compiler (`cc`).
- `make`.
- `ar`, to create the static library.
- A Unix-like environment.

### Compilation

Clone the repository and enter the project directory:

```bash
git clone YOUR_REPOSITORY_URL
cd YOUR_REPOSITORY_DIRECTORY
```

Compile the library:

```bash
make
```

This generates `libft.a` at the root of the repository.

Other available Makefile commands:

```bash
make clean
make fclean
make re
```

- `make clean`: Removes the object files.
- `make fclean`: Removes the object files and the compiled library.
- `make re`: Performs a clean rebuild.

### Using the library

Include `libft.h` in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

Replace `main.c` with your own source file if necessary.

## Library Contents

### Part 1 — Libc Functions

These functions reproduce the behavior of selected standard C library functions.

| Category | Functions |
|---|---|
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Memory manipulation | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| String operations | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup` |
| Conversion and allocation | `ft_atoi`, `ft_calloc` |

### Part 2 — Additional Functions

These functions provide additional utilities for working with strings, characters, and file descriptors.

| Category | Functions |
|---|---|
| String manipulation | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split` |
| Conversion and transformation | `ft_itoa`, `ft_strmapi`, `ft_striteri` |
| Output to file descriptors | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |

### Part 3 — Linked Lists

This part introduces the `t_list` structure, which represents a singly linked list. Each node stores a pointer to its content and a pointer to the next node.

The library includes functions for:

- Creating nodes: `ft_lstnew`
- Adding nodes: `ft_lstadd_front`, `ft_lstadd_back`
- Traversing and inspecting lists: `ft_lstsize`, `ft_lstlast`, `ft_lstiter`
- Deleting nodes and lists: `ft_lstdelone`, `ft_lstclear`
- Creating a transformed copy of a list: `ft_lstmap`

## Resources

The following resources can help explain the concepts used in this project:

- **C standard library documentation:** https://en.cppreference.com/w/c
- **Linux manual pages:** https://man7.org/linux/man-pages/
- **GNU Make documentation:** https://www.gnu.org/software/make/manual/
- **GNU Binutils documentation:** https://sourceware.org/binutils/docs/

### AI Usage

AI tools were used as supplementary learning resources to help clarify C programming concepts, understand function behavior, investigate errors, and review implementation logic.

The use of AI was intended to support understanding and debugging. The project implementations and the final description of AI assistance should accurately reflect the work performed by the author.

## Learning Outcomes

Through this project, I developed my understanding of:

- Pointers and pointer arithmetic.
- Dynamic memory allocation and deallocation.
- String and memory manipulation.
- Function pointers.
- Singly linked lists and structures.
- Static libraries, compilation, and Makefiles.
- Testing, debugging, and handling edge cases.

