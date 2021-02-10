/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:09:16 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/10 15:36:21 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] > str2[i])
		{
			return (1);
		}
		else if (str1[i] < str2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
