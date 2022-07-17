# 42-Libft
*Your very first own library*

## Introduction
Introductory project to the 42 cursus. Recode of a few functions of the C standard library as well as some other utility functions that will be used for other projects in the cursus.

## Outline
In this project you will create your own functions based on existing functions in the C standard library. It will be helpful to look up the specifics of a function in its manpage (eg. ```man atoi```). This project will help you learn about string manipulation and memory allocation, some of the functions may have been coded in the Piscine. Certain functions in Libft build on other functions.

## Function Overview
| Function | Description |
| :------: | :---------: |
| ``ft_isalpha`` | Checks if a character is a letter. Returns 1 if true, 0 if false. |
| ``ft_isdigit`` | Checks if a character is a digit. Returns 1 if true, 0 if false. |
| ``ft_isalnum`` | Checks if a character is a letter or digit. Returns 1 if true, 0 if false. |
| ``ft_isascii`` | Checks if a character belongs to the ASCII table. Returns 1 if true, 0 if false. |
| ``ft_isprint`` | Checks if a character is printable. Returns 1 if true, 0 if false. |
| ``ft_toupper`` | Converts a character to upper case. Returns the value of the converted letter. |
| ``ft_tolower`` | Converts a character to lower case. Returns the value of the converted letter.  |
| ``ft_bzero`` | Fills the first n bytes of a memory area with zeroes. |
| ``ft_memset`` | Fills the first n bytes of a memory area with a specified character.<br>Returns a pointer to the memory area. |
| ``ft_memcpy`` | Copies n bytes from a memory area to another, ignoring possible overlaps.<br>Returns a pointer to the destination. |
| ``ft_memmove`` | Copies n bytes from a memory area to another, preventing possible overlaps.<br>Returns a pointer to the destination. |
| ``ft_memchr`` | Scans n bytes of a memory area for character.<br>Returns pointer to the matching byte or NULL if not found. |
| ``ft_memcmp`` | Compares first n bytes of two memory areas.<br>Returns 0 if identical, otherwise a non-zero value. |
| ``ft_strlen`` | Returns length of a string. |
| ``ft_strlcat`` | Concatenate two strings, NUL-terminating the result.<br>Returns the length of the concatenated string. |
| ``ft_strlcpy`` | Copies n - 1 bytes from a source string to a destination string.<br>Returns the length of the source string. |
| ``ft_strchr`` | Looks for the first occurence of a character in a string.<br>Returns the pointer to that character. |
| ``ft_strrchr`` | Looks for the last occurence of a character in a string.<br>Returns the pointer to that character. |
| ``ft_strncmp`` | Compares two strings up to the n-th character.<br>Returns 0 if identical, otherwise a non-zero value. |
| ``ft_strnstr`` | Finds the first occurence of a substring in a second string before the n-th char is reached.<br>Returns a pointer to the substring, NULL if not found. |
| ``ft_atoi`` | Converts a string to an integer. Returns the converted value. |
| ``ft_calloc`` | Allocates x blocks of y bits of memory. The memory is set to zero.<br>Returns a pointer to the memory area. |
| ``ft_strdup`` | Allocates memory and duplicates string. Returns pointer to duplicated string.<br>Returns NULL if allocation fails. |
| ``ft_substr`` | Allocates memory and returns a substring from the n-th character of a string.<br>Returns NULL if allocation fails. |
| ``ft_strjoin`` | Allocates memory and returns and returns a new string, which is the result of the concatenation of two strings.<br>Returns NULL if allocation fails. |
| ``ft_strtrim`` | Allocates memory and returns a copy of a string with occurences of characters removed from its start and end.<br>Returns NULL if allocation fails. |
| ``ft_split`` | Allocates memory and returns an array of strings obatained by splitting according to a given separator character.<br>Returns NULL if allocation fails. |
| ``ft_itoa`` | Allocates memory and returns a string representing the integer received as an argument.<br>Returns NULL if allocation fails. |
| ``ft_strmapi`` | Applies a function to each character of a string, creating a new string. Returns the new string.<br>Returns NULL if allocation fails. |
| ``ft_striteri`` | Applies a function on each character of a string, modifying the original string. |
| ``ft_putchar_fd`` | Outputs a character to the given file descriptor. |
| ``ft_putstr_fd`` | Outputs a string to the given file descriptor. |
| ``ft_putendl_fd`` | Outputs a string to the given file descriptor followed by a newline. |
| ``ft_putnbr_fd`` | Outputs an integer the given file descriptor. |

## Bonus Functions
| Function | Description |
| :------: | :---------: |
| ``ft_lstnew`` | Allocates memory and creates new node.  |
| ``ft_lstadd_front`` | Adds new node at the beginning of the list. |
| ``ft_lstsize`` | Returns the number of nodes in a list. |
| ``ft_lstlast`` | Returns the last node of the list. |
| ``ft_lstadd_back`` | Adds new node at the end of the list. |
| ``ft_lstdelone`` | Deletes and frees the given node. |
| ``ft_lstclear`` | Deletes and frees the given node and every node after that. |
| ``ft_lstiter`` | Applies a function to the content of every node of the linked list. |
| ``ft_lstmap`` | Applies function to a copy of the list, freeing when necessary. |

## Grade
[![lwee's 42 Libft Score](https://badge42.vercel.app/api/v2/cl5pppwsq001109mdiigy33za/project/2460041)](https://github.com/JaeSeoKim/badge42)

## Resources
* [Libft subject document](https://github.com/fractalfeeling/uploads/blob/4e5f7f060cdb8824ca8373d4aa3c65d795a3464b/docs/Libft.pdf)
* [francinette](https://github.com/xicodomingues/francinette) tester by *xicodomingues*
