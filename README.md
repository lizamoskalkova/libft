<h1 align="center">
	42cursus' libft
</h1>

<p align="center">
	<b><i>Development repo for 42cursus' libft project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/appinha/42cursus"><b>42cursus repo</b></a>.
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/appinha/42cursus-00-Libft?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/appinha/42cursus-00-Libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/appinha/42cursus-00-Libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/appinha/42cursus-00-Libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/appinha/42cursus-00-Libft?color=brightgreen" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 🗣️ About

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._


	🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](libft/ft_islower.c) *	- lower-case character test.
* [`ft_isupper`](libft/ft_isupper.c) *	- upper-case character test.
* [`ft_isdigit`](libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_tolower`](libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/srcs/to/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](libft/srcs/mem/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/ft_memcpy.c)		- copy memory area.
* [`ft_memccpy`](libft/ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/ft_strlen.c)				- find length of string.
* [`ft_strlen_2`](libft/ft_strlen_2.c) *				- find length of 2D array (i.e. splitted string).
* [`ft_strchr`](libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](libft/ft_strstr.c) *		- locate a substring in a string.
* [`ft_strnstr`](libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](libft/ft_strcmp.c) *		- compare strings.
* [`ft_strncmp`](libft/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strnrcmp`](libft/ft_strnrcmp.c)			- reversely compare strings (size-bounded).
* [`ft_strcpy`](libft/ft_strcpy.c) *		- copy strings.
* [`ft_strncpy`](libft/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strcat`](libft/ft_strcat.c) *		- concatenate strings (s2 into s1).
* [`ft_strncat`](libft/ft_strncat.c) *	- concatenate strings (s2 into s1, size-bounded).
* [`ft_strlcpy`](libft/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](libft/ft_strlcat.c)			- size-bounded string concatenation.


### Non-standard functions

* [`ft_putchar`](libft/ft_putchar.c) *	- output a character to stdout.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/ft_putstr.c) *		- output string to stdout.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putnbr`](libft/srcs/put/ft_putnbr.c) *		- output integer to stdout.
* [`ft_itoa`](libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](libft/ft_strmapi.c)			- create new string from modifying string with specified function.


## 📑 Index

`@root`

## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

## 📋 Testing

**1. First, configure the path to the libft folder in the Makefile (inside `/testing/`):**

```Makefile
#############################
## Path to Libft directory ##
#############################
DIR		= ../
```

**2. Then run:**

```shell
make t
```

### Third-party testers

* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
* [t0mm4rx/libftdestructor](https://github.com/t0mm4rx/libftdestructor)
