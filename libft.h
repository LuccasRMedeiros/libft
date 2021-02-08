/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:13:24 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/08 13:53:50 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int *c, size_t *n);

void	ft_bzero(char *s, size_t n);

void	*ft_memcpy(void *dst, void *src, size_t length);

void	*ft_memccpy(void *dst, void *src, int c, size_t cnt);

void	*ft_memmove(void *dts, const void *src, size_t length);
