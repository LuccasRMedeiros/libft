/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:56:13 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/15 21:11:48 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		str_size;

	str_size = ft_strlen(str);
	ret = (char*)malloc(str_size * sizeof (char));
	ft_strlcpy(ret, str, str_size);
	return (ret);
}
