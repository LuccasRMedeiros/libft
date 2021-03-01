/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:56:13 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/01 02:09:47 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		str_size;

	str_size = ft_strlen(str);
	ret = (char*)malloc(str_size * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, str, str_size);
	return (ret);
}
