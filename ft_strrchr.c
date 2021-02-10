/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:46:59 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/10 12:57:41 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_aux;
	char	*holder;
	int		i;

	str_aux = (char*)str;
	holder = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			holder = str_aux + i;
		}
		i++;
	}
	return (holder);
}
