*This project has been created as part of the 42 curriculum by rbourjal.*

#Libft

## Description

Libft is a C library developed as part of the 42 curriculum. It recreates standard C library functions and adds utility functions,
	including string manipulation, memory management,
	and linked-list operations.

## Instructions

Compile the library:

```bash
make
```

This creates `libft.a`.

Available commands:

```bash
make clean
make fclean
make re
```

To use the library, include `libft.h` and compile your program with:

```bash
cc main.c -L. -lft -o program
```
## Library Contents

- **Libc functions:** Character checks, memory operations, string manipulation,
	and conversions.
- **Additional functions:** String utilities, integer-to-string conversion,
	and output to file descriptors.
- **Linked lists:** Node creation, insertion, traversal, deletion,
	and list manipulation.

## Resources

- [C documentation](https://en.cppreference.com/w/c)
- [Linux manual pages](https://man7.org/linux/man-pages/)
- **Command-line help:** Many tools support `--help` or `-h` to display usage information. The supported options depend on the tool.
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)

**AI usage:**
- AI was used to help understand C concepts.
- AI assisted with explaining function behavior and investigating edge cases.
