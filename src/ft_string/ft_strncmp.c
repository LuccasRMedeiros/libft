/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:09:16 by lrocigno          #+#    #+#             */
/*   Updated: 2021/07/20 14:02:04 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			lstr1;
	size_t			lstr2;
	size_t			i;

	lstr1 = ft_strlen(str1);
	lstr2 = ft_strlen(str2);
	i = 0;
	if (str1 == NULL || str2 == NULL)
		return (-1);
	while (i < n && (i <= lstr1 && i <= lstr2))
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
