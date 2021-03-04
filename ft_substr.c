/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:52:37 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/04 19:29:25 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	stti;
	size_t	subi;
	char	*sub;

	stti = (size_t)start;
	subi = 0;
	sub = malloc(sizeof(char) * len + 1);
	if (!sub || !s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ft_bzero(sub, len);
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
