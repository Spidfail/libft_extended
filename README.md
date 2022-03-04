# libft_extended
A C language library meant to be used for 42 school projects. It contains mandatory implementations as required and functions that I added for others. 

## Original purpose

The `libft` project aims to learn the basics of C programming language by recoding parts of it's Standard Library. As a training exercise, it's not perfect but it works. You can find the list below.

Some constrains were added to make us use our brain, here is a summary :
- One file per function.
- A header should list them.
- It should follow the norm imposed by the school (syntax mostly, 5 functions max per file, 25l maximum per function...)
- The keyword `static` must be used prior to auxiliary functions in the same file.
- We cannot use unauthorized functions.
- Authorized functions : `write()` `malloc()` `free()` (_situationnal_)
- Imposed Makefile rules like `$(NAME)` or `clean`
- Imposed compilation flags : `-Wall -Wextra -Werror`

## How to install the project

Just clone it in your repository.

## How to use the libft

About implementation, you need to list the name with the prefix "ft_" to distinguish these functions from the strandard ones.

The Makefile will produce a binary called `libft.a` by using `ar` command. Compile your project with the binary to use listed functions.

## List of the functions

Standard Library implementation :

|    Boolean functions    |   Memory functions   |  String functions | Allocation wrapper | Converter |
|-------------------------|----------------------|-------------------|--------------------|-----------|
| ft_isalpha              |    ft_memset         |    ft_strlen      |    ft_calloc       | ft_atoi   |
| ft_isalpha              |    ft_memcpy         |    ft_strlcpy     |                    |           |
| ft_isdigit              |    ft_memmove        |    ft_strlcat     |                    |           |
| ft_isalnum              |    ft_memchr         |    ft_strchr      |                    |           |
| ft_isascii              |    ft_memcmp         |    ft_strrchr     |                    |           |
| ft_isprint              |                      |    ft_strncmp     |                    |           |
|                         |                      |    ft_strnstr     |                    |           |
|                         |                      |    ft_strdup      |                    |           |

Mandatory added :

| Function name | Prototype                                  | Description                       |
|---------------|--------------------------------------------|-----------------------------------|
|ft_substr      | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Return an allocated copy of `len` char from the string `s` at position `start`. |
|ft_strtrim     | `char *ft_strtrim(char const *s1, char const *set)`              | Return an allocated copy of the string `s1` without the char from `set` at the begining or at the end of `s1`. |
|ft_split       | `char **ft_split(char const *s, char c)`              | Return an allocated array of string(s) obtained by splintting the string `s` with `c` as a delimiter. |
|ft_itoa        | `char *ft_itoa(int n)`              					| Convert the number `n` into and string and return it allocated. |
|ft_strmapi     | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char*)`  | Apply the function `f` on each char of the string `s` and return it as an allocated string. |
|ft_striteri    | `void ft_striteri(char *s, void (*f)(unsigned int, char*)`  | Apply the function `f` on each char of the string `s` as it modify it's content. |
|ft_putchar_fd     | `void ft_putchar_fd(char c, int fd)`        | Write the char `c` on the file descriptor `fd`. |
|ft_putstr_fd      | `void ft_putstr_fd(char *s, int fd)`        | Write the string `s` on the file descriptor `fd`. |
|ft_putendl_fd      | `void ft_putendl_fd(char *s, int fd)`      | Write the string `s` followed by a newline (`\n`) on the file descriptor `fd`. |
|ft_putnbr_fd      | `void ft_putnbr_fd(int n, int fd)`      | Write the number `n` on the file descriptor `fd`. |

Bonus added : _Linked list library_

Structure of each node :
```
typedef struct		s_list {
	void		*content;
	t_list		*next;
}					t_list;
```

| Function name | Prototype                                  | Description                       |
|---------------|--------------------------------------------|-----------------------------------|
| `ft_lstnew`     | `t_list *ft_lstnew(void *content)`         | Create a new allocated link/node. |
| `ft_lastadd_front`   | `void ft_lstadd_front(t_list **lst, t_list *new)`   | Add a allocated link/node at the begining of the list. |
| `ft_lastadd_back`   | `void ft_lstadd_back(t_list **lst, t_list *new)`   | Add a allocated link/node at the end of the list. |
| `ft_lstsize`   | `int ft_lstsize(t_list *lst)`               | Return the size of the list `lst`.|
| `ft_lstlast`   | `t_list ft_lstlast(t_list *lst)`            | Return the last element of the list `lst`. |
| `ft_lstdelone` | `t_list ft_lstdelone(t_list *lst, void (del*)(void *))` | Apply the function `del` on the link `lst` then `free`. It let the link `next` untouch. |
| `ft_lstclear`  | `t_list ft_lstclean(t_list **lst, void (del*)(void *))` | Apply the function `del` on the linked list `lst` then `free` each link. |
| `ft_lstiter`   | `t_list ft_lstiter(t_list *lst, void (f*)(void *))` | Apply the function `f` on each element of the linked list `lst`. |
| `ft_lstmap`   | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Apply the function `f` on each element of the linked list `lst` then return the result of the application in an allocated new list. Apply the function `del` on each link if necessary. |



