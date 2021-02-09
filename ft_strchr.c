/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:48:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/09 10:54:56 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	while(*str != '\0')
	{
		*str++;
		if (*str == c)
		{
			*p = *str;
			return (p);
		}
	}
	return (NULL);
}
