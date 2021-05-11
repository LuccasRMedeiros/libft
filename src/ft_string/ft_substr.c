/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:52:37 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:15:14 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	alloc;
	char	*sub;

	i = 0;
	alloc = ft_strlen(s);
	if (start > alloc)
	{
		alloc = 0;
		start = 0;
	}
	alloc -= start;
	if (alloc > len)
		alloc = len;
	sub = ft_calloc(alloc + 1, sizeof *sub);
	if (!sub || !s)
		return (NULL);
	s += start;
	while (i < alloc && s[i])
	{
		sub[i] = s[i];
		++i;
	}
	return (sub);
}
