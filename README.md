🗣️ About
The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.

For detailed information, refer to the subject of this project.

🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
into a library for use in other projects of the cursus.
Functions from <ctype.h> library
ft_isascii - test for ASCII character.
ft_isalnum - alphanumeric character test.
ft_isalpha - alphabetic character test.
ft_islower * - lower-case character test.
ft_isupper * - upper-case character test.
ft_isdigit - decimal-digit character test.
ft_isxdigit * - hexadecimal-digit character test.
ft_isprint - printing character test (space character inclusive).
ft_isgraph * - printing character test (space character exclusive).
ft_isspace * - white-space character test.
ft_isblank * - space or tab character test.
ft_ispunct * - punctuation character test.
ft_iscntrl * - control character test.
ft_tolower - upper case to lower case letter conversion.
ft_toupper - lower case to upper case letter conversion.
Functions from <stdlib.h> library
ft_atoi - convert ASCII string to integer.
ft_calloc - memory allocation.
Functions from <strings.h> library
ft_bzero - write zeroes to a byte string.
ft_memset - write a byte to a byte string.
ft_memchr - locate byte in byte string.
ft_memcmp - compare byte string.
ft_memmove - copy byte string.
ft_memcpy - copy memory area.
ft_memccpy - copy string until character found.
Functions from <string.h> library
ft_strlen - find length of string.
ft_strlen_2 * - find length of 2D array (i.e. splitted string).
ft_strchr - locate character in string (first occurrence).
ft_strrchr - locate character in string (last occurence).
ft_strstr * - locate a substring in a string.
ft_strnstr - locate a substring in a string (size-bounded).
ft_strcmp * - compare strings.
ft_strncmp * - compare strings (size-bounded).
ft_strnrcmp - reversely compare strings (size-bounded).
ft_strcpy * - copy strings.
ft_strncpy * - copy strings (size-bounded).
ft_strdup - save a copy of a string (with malloc).
ft_strndup * - save a copy of a string (with malloc, size-bounded).
ft_strcat * - concatenate strings (s2 into s1).
ft_strncat * - concatenate strings (s2 into s1, size-bounded).
ft_strlcpy - size-bounded string copying.
ft_strlcat - size-bounded string concatenation.
Functions from <math.h> library
ft_sqrt * - square root function.
ft_pow * - power function.
Non-standard functions
ft_swap * - swap value of two integers.
ft_putchar * - output a character to stdout.
ft_putchar_fd - output a character to given file.
ft_putstr * - output string to stdout.
ft_putstr_fd - output string to given file.
ft_putendl * - output string to stdout with newline.
ft_putendl_fd - output string to given file with newline.
ft_putnbr * - output integer to stdout.
ft_putnbr_fd - output integer to given file.
ft_itoa - convert integer to ASCII string.
ft_substr - extract substring from string.
ft_strtrim - trim beginning and end of string with the specified characters.
ft_strjoin - concatenate two strings into a new string (with malloc).
ft_split - split string, with specified character as delimiter, into an array of strings.
ft_split_free * - free splitted string.
ft_strmapi - create new string from modifying string with specified function.
ft_ftoa_rnd - convert float to ASCII string.

📑 Index
@root

📁 libft: updated source code, refactored for use in other projects; includes get_next_line and printf functions.
🛠️ Usage
Requirements
The library is written in C language and thus needs the gcc compiler and some standard C libraries to run.

Instructions
1. Compiling the library

To compile the library, run:

$ cd path/to/libft && make
2. Using it in your code

To use the library functions in your code, simply include its header:

#include "libft.h"
and, when compiling your code, add the required flags:

-lft -L path/to/libft.a -I path/to/libft.h
