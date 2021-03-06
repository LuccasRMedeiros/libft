/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:52:37 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/05 22:52:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	stti;
	size_t	subi;
	size_t	alloc;
	char	*sub;

	if (!s)
		return (NULL);
	stti = (size_t)start;
	subi = 0;
	alloc = (ft_strlen(s) <= len ? ft_strlen(s) : len);
	if (!(sub = malloc(sizeof(char) * alloc + 1)))
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ft_bzero(sub, ft_strlen(s));
		return (sub);
	}
	while (subi < len && s[stti])
	{
		sub[subi] = s[stti];
		stti++;
		subi++;
	}
	sub[subi] = '\0';
	return (sub);
}
