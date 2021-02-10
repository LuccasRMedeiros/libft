/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:26:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/10 14:04:32 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	ih;
	int	in;
	int index_holder;

	ih = 0;
	in = 0;
	while (haystack[ih] != '\0')
	{
		if (haystack[ih] == needle[0])
		{
			index_holder = ih;
		}
		while (haystack[ih] == needle[in])
		{
			ih++;
			in++;
			if (needle[in] == '\0')
			{
				return ((char*)haystack + index_holder);
			}
		}
		in = 0;
		ih++;
	}
	return (NULL);
}
