/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:46:59 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:25:22 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_string.h>

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	find;
	int				i;

	find = (unsigned char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == find)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}
