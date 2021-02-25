/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:52:37 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/25 11:18:53 by lrocigno         ###   ########.fr       */
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
	sub = malloc(len * sizeof(char));
	if (!sub)
		return (NULL);
	while (subi < len)
	{
		sub[subi] = s[stti];
		stti++;
		subi++;
	}
	return (sub);
}
