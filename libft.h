/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:29:14 by lrocigno          #+#    #+#             */
/*   Updated: 2021/12/06 12:23:29 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This header groups all the subheaders of the project. Include this one if   -
** you is not sure what you will use.
*/

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*
** Macro to be used for get_next_line family.
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*
** Macros for limits.
*/

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define LONG_MAX 9223372036854775807
# define LONG_MIN -9223372036854775808

/*
** Linked list.
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
** Double linked list.
*/

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}	t_dlist;

/*
** Memory management.
*/

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t n_itens, size_t size);
void		ft_destroyer(void **del);
void		*ft_memccpy(void *dst, const void *src, int c, size_t cnt);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t cnt);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);

/*
** Numeric to string and vice versa.
*/

int			ft_atoi(const char *str);
long int	ft_atol(const char *str);
char		*ft_dtox(unsigned int dn, unsigned int font);
char		*ft_itoa(int n);
char		*ft_ltoa(long int ln);
char		*ft_ltox(long unsigned int dn, unsigned int font);
char		*ft_utoa(unsigned int un);

/*
** Conditionals.
*/

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

/*
** get_next_line.
*/

int			ft_gnl(int fd, char **line);
int			ft_gnl_multithread(int fd, char **line);

/*
** String operations.
*/

char		*ft_reallocncat(char *dst, char const *src);
char		**ft_split(char const *str, char c);
char		*ft_strchr(const char *str, int c);
char		*ft_strcomb(int n_strs, ...);
char		*ft_strdup(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strnstr(const char *str, const char *sub, size_t n);
char		*ft_strrchr(const char *str, int c);
size_t		ft_strstrlen(char **str);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);

/*
** Output generators.
*/

int			ft_fprintf(int fd, const char *str, ...);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);

/*
** Counters.
*/

size_t		ft_strlen(const char *str);
size_t		ft_hexlen(unsigned int dn);
size_t		ft_intlen(int n);
size_t		ft_uintlen(unsigned int n);

/*
** Linked lists operations.
*/

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*ft_lstcircle(t_list *list);
int			ft_lstcircle_size(t_list *list);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstclear_circle(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

/*
** Double linked lists operations.
*/

void		ft_dlstadd(void *content, t_dlist **d_list);
void		ft_dlstadd_circle(void *content, t_dlist **d_list);
t_dlist		*ft_dlstcircle(t_dlist *d_list);
void		ft_dlstclear(t_dlist **dlst_del, void(*del)(void *));
void		ft_dlstclear_circle(t_dlist **dcl_del, void(*del)(void *));
t_dlist		*ft_dlstdelone_circle(t_dlist *d_list, void(*del)(void *));
t_dlist		*ft_dlstfirst(t_dlist *dlst);
void		ft_dlstinsert(void *content, t_dlist *d_list);
t_dlist		*ft_dlstlast(t_dlist *dlst);
t_dlist		*ft_dlstnew(void *content);
t_dlist		*ft_dlstpop_circle(t_dlist *dlst);
int			ft_dlstsize_circle(t_dlist *dlst);

#endif
