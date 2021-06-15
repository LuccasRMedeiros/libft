/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 20:19:21 by lrocigno          #+#    #+#             */
/*   Updated: 2021/06/15 11:35:54 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This header groups all the string process related functions.
** Like ft_numeric header, ft_string header needs ft_char to work properly, as -
** many functions here uses functions from such header.
*/

#ifndef FT_STRING_H
# define FT_STRING_H

# include "libft.h"
# include "ft_char.h"
# include "ft_memory.h"

size_t	ft_strlen(const char *str);
size_t	ft_strstrlen(char **str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *sub, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char	*ft_reallocncat(char *dst, char const *src);
bool	ft_strhvchr(const char *string, int c);
char	*ft_strcomb(int n_strs, ...);

#endif
