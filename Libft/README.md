*This project has been created as part of the 42 curriculum by srananun*

# Libft

## Description

**Libft** is the first project in the 42 core curriculum. The goal is to **re-code standard C library functions from scratch** without using existing library functions.

By building our own C library (`libft.a`), we learn how string manipulation, memory management (`malloc` / `free`), and basic data structures actually work. This library will be used as a tool for future 42 projects.

---

## Library

### Mandatory Functions

#### Character Checks & Conversions
* **`ft_isalpha`**  - Checks if a character is alphabetical.
* **`ft_isdigit`**  - Checks if a character is a digit (0-9).
* **`ft_isalnum`**  - Checks if a character is alphanumeric.
* **`ft_isascii`**  - Checks if a character is in the ASCII table.
* **`ft_isprint`**  - Checks if a character is printable (includes space).
* **`ft_toupper`**  - Converts a lowercase letter to uppercase.
* **`ft_tolower`**  - Converts an uppercase letter to lowercase.

#### String Manipulation & Searching
* **`ft_strlen`**     - Returns the length of a string.
* **`ft_strlcpy`**    - Safely copies a string with buffer overflow protection.
* **`ft_strlcat`**    - Safely appends a string with buffer overflow protection.
* **`ft_strchr`**     - Finds the first occurrence of a character in a string.
* **`ft_strrchr`**    - Finds the last occurrence of a character in a string.
* **`ft_strncmp`**    - Compares two strings up to a specified length.
* **`ft_strnstr`**    - Locates a substring within a limited length.

#### Memory Management
* **`ft_memset`**     - Fills a memory block with a specific byte value.
* **`ft_bzero`**      - Clears a memory block by setting all bytes to 0.
* **`ft_memcpy`**     - Copies memory from source to destination.
* **`ft_memmove`**    - Safely copies memory even if source and destination overlap.
* **`ft_memchr`**     - Searches for a byte in a memory block.
* **`ft_memcmp`**     - Compares two memory blocks byte by byte.
* **`ft_calloc`**     - Allocates memory and initializes all bytes to zero.
* **`ft_strdup`**     - Duplicates a string using dynamically allocated memory.

#### Conversion & Non-Standard Utilities
* **`ft_atoi`**       - Converts a string to an integer.
* **`ft_itoa`**       - Converts an integer to a string.
* **`ft_substr`**     - Extracts a portion of a string.
* **`ft_strjoin`**    - Concatenates two strings into a new string.
* **`ft_strtrim`**    - Trims specified characters from the start and end of a string.
* **`ft_split`**      - Splits a string into an array of substrings using a delimiter.
* **`ft_strmapi`**    - Creates a new string by applying a function to each character.
* **`ft_striteri`**   - Modifies a string in place by applying a function to each character.

#### File Descriptor Output
* **`ft_putchar_fd`** - Writes a single character to a file descriptor.
* **`ft_putstr_fd`**  - Writes a string to a file descriptor.
* **`ft_putendl_fd`** - Writes a string followed by a newline to a file descriptor.
* **`ft_putnbr_fd`**  - Writes an integer to a file descriptor.

#### Linked List
* **`ft_lstnew`** - Creates a new list node with content.
* **`ft_lstadd_front`** - Prepends a node to the beginning of a list.
* **`ft_lstsize`** - Counts the total number of nodes in a list.
* **`ft_lstlast`** - Returns the last node of a list.
* **`ft_lstadd_back`** - Appends a node to the end of a list.
* **`ft_lstdelone`** - Frees a single node and its content.
* **`ft_lstclear`** - Deletes and frees all nodes in a list.
* **`ft_lstiter`** - Applies a function to every node's content in a list.
* **`ft_lstmap`** - Creates a new list by applying a function to each node.

---

## Instructions


### Compilation

All files are compiled using `cc` with the flags `-Wall -Wextra -Werror`.

```bash
make        # Compiles mandatory functions into libft.a
make clean  # Removes object files (.o)
make fclean # Removes object files and libft.a
make re     # Recompiles everything from scratch
```

### Usage

#### Include the Header
Include the header file in your C source files:

```c
#include "libft.h"
```

## Resources

### References & Guides
* [Understanding memmove & Memory Overlap](https://www.youtube.com/watch?v=1eb0d9yCm2M) - Visual explanation of memory overlapping and how `memmove` differs from `memcpy`.
* [42 Cursus Guide - ft_split](https://42-cursus.gitbook.io/guide/0-rank-00/libft/additional-functions/ft_split#commented-solution) - Guide for `ft_split` logic and memory allocation.
* [libftTester](https://github.com/Tripouille/libftTester) - Automated test for Libft.

### AI Usage

* **Conceptual Learning & Logic Breakdown:** AI was used as an educational assistant to explain the core logic, expected input/output parameters, return values, and potential edge cases (e.g., NULL pointers, buffer overflows, and memory overlaps) for various standard C functions.
* **Documentation:** AI helped in structuring and polishing the formatting of this `README.md`.