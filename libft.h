/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:29:14 by lrocigno          #+#    #+#             */
/*   Updated: 2021/10/28 12:16:14 by lrocigno         ###   ########.fr       */
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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n_itens, size_t size);
void	ft_destroyer(void **del);
char	*ft_dtox(unsigned int dn, unsigned int font);
int		ft_fprintf(int fd, const char *str, ...);
int		ft_gnl(int fd, char **line);
int		ft_gnl_multithread(int fd, char **line);
size_t	ft_hexlen(unsigned int dn);
int 	ft_igreater(int int1, int int2);
size_t	ft_intlen(int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
char	*ft_ltoa(long int ln);
char	*ft_ltox(long unsigned int dn, unsigned int font);
void	*ft_memccpy(void *dst, const void *src, int c, size_t cnt);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t cnt);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_reallocncat(char *dst, char const *src);
char	**ft_split(char const *str, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strcomb(int n_strs, ...);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *str, const char *sub, size_t n);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strstrlen(char **str);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_tolower(int c);
size_t	ft_uintlen(unsigned int n);
char	*ft_utoa(unsigned int un);

#endif
