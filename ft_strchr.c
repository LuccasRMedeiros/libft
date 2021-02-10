/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:48:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/09 21:34:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str_aux;
	int		i;

	str_aux = (char*)str;
	i = 0;
	while(str_aux[i] != '\0')
	{
		i++;
		if (str_aux[i] == c)
		{
			return (str_aux + i);
		}
	}
	return (NULL);
}
