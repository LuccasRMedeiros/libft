/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:16:12 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/17 22:28:32 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This header groups all the functions related to general data process. By    -
** saying "general data" we assume that the functions will work with any data  -
** stored in the memory, not taking into account what type of value they are.
*/

#ifndef FT_MEMORY_H
# define FT_MEMORY_H

# include "libft.h"

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t cnt);
void	*ft_memmove(void *dst, const void *src, size_t cnt);
void	*ft_memchr(const void *dst, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_calloc(size_t n_itens, size_t size);
void	ft_destroyer(void **del);

#endif
