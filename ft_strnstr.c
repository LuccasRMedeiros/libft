/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:26:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/19 01:37:36 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	ih;
	size_t	in;
	int		index_holder;

	ih = 0;
	in = 0;
	while (str[ih] != '\0' && ih < n)
	{
		if (str[ih] == sub[0])
		{
			index_holder = ih;
		}
		while (str[ih] == sub[in] && ih < n)
		{
			ih++;
			in++;
			if (sub[in] == '\0')
			{
				return ((char*)str + index_holder);
			}
		}
		in = 0;
		ih++;
	}
	return (NULL);
}
