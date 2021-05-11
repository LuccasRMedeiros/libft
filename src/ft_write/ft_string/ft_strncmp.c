/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:09:16 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:25:35 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*ustr1;
	unsigned char	*ustr2;
	size_t			lstr1;
	size_t			lstr2;
	size_t			i;

	ustr1 = (unsigned char *)str1;
	ustr2 = (unsigned char *)str2;
	lstr1 = ft_strlen(str1);
	lstr2 = ft_strlen(str2);
	i = 0;
	while (i < n && (i <= lstr1 && i <= lstr2))
	{
		if (ustr1[i] > ustr2[i])
			return (1);
		else if (ustr1[i] < ustr2[i])
			return (-1);
		i++;
	}
	return (0);
}
