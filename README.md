# 42-Libft
*Your very first own library*

## Introduction
Introductory project to the 42 cursus. Recode of a few functions of the C standard library as well as some other utility functions that will be used for other projects in the cursus.

## Outline
In this project you will create your own functions based on existing functions in the C standard library. It will be helpful to look up the specifics of a function in its manpage (eg. ```man atoi```). This project will help you learn about string manipulation and memory allocation, some of the functions may have been coded in the Piscine. Certain functions in Libft build on other functions.

## Function Overview
| Function | Description |
| :------: | :---------: |
| ``ft_isalpha`` | Checks if a character is an alphabetical character. Returns ```1``` if true, ```0``` if false. |
| ``ft_isdigit`` | Checks if a character is a digit. Returns ```1``` if true, ```0``` if false. |
| ``ft_isalnum`` | Checks if a character is an alphabetical character or digit. Returns ```1``` if true, ```0``` if false. |
| ``ft_isascii`` | Checks if a character belongs to the ASCII table. Returns ```1``` if true, ```0``` if false. |
| ``ft_isprint`` | Checks if a character is printable. Returns ```1``` if true, ```0``` if false. |
| ``ft_toupper`` | Converts a character to upper case. The value returned is that of the converted letter. |
| ``ft_tolower`` | Converts a character to lower case. The value returned is that of the converted letter. |
| ``ft_bzero`` | Fills the first ```n``` bytes of a memory area with zeroes. |
| ``ft_memset`` | Fills the first ```n``` bytes of a memory area with a specified character. Returns a pointer to the memory area. |
| ``ft_memcpy`` | Copies ```n``` bytes from a memory area to another, ignoring possible overlaps. Returns a pointer to the copied destination. |
| ``ft_memmove`` | Copies ```n``` bytes from a memory area to another, preventing possible overlaps. Returns a pointer to the copied destination. |
| ``ft_memchr`` | Scans ```n``` bytes of a memory area for character and returns pointer to the matching byte or ```NULL``` if not found. |
| ``ft_memcmp`` | Compares first ```n``` bytes of two memory areas. Returns ```0``` if a matching character is found, otherwise a non-zero value. |
| ``ft_strlen`` | Returns length of a string. |
| ``ft_strlcat`` | Concatenate two strings, NuL-terminating the result. Returns the length of the concatenated string. |
| ``ft_strlcpy`` | Copies ```n - 1``` from a source string to a destination string, NUL-terminating the result. Returns the length of the source string. |
| ``ft_strchr`` |  |
| ``ft_strrchr`` |  |
| ``ft_strncmp`` |  |
| ``ft_strnstr`` |  |
| ``ft_atoi`` |  |
| ``ft_`` |  |

| ``ft_calloc`` | Reserves ``x`` blocks of ``y`` bits of memory

## Grade
![Grade](https://github.com/fractalfeeling/uploads/blob/4e5f7f060cdb8824ca8373d4aa3c65d795a3464b/images/score_bonus.png)

## Resources
* [Libft subject document](https://github.com/fractalfeeling/uploads/blob/4e5f7f060cdb8824ca8373d4aa3c65d795a3464b/docs/Libft.pdf)
* [francinette](https://github.com/xicodomingues/francinette) tester by *xicodomingues*
