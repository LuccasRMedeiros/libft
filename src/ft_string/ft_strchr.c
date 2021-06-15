/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:48:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:13:49 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strchr(const char *str, int c)
{
	unsigned char	find;
	size_t			i;

	i = 0;
	find = (unsigned char)c;
	while (str[i] != find)
	{
		if (str[i] == '\0' && find != '\0')
			return (NULL);
		++i;
	}
	return ((char *)str + i);
}
