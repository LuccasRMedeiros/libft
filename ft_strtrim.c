/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:10:10 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/26 01:07:26 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	set_start_end(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (ft_strncmp(s1, set, set_len) == 0)
		return (set_len);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	s1_len = ft_strlen(s1);
	start = set_start_end(s1, set);
	end = s1_len - set_start_end(s1 + (s1_len - ft_strlen(set)), set);
	i = 0;
	trim = malloc((end - start) * sizeof(char));
	if (!trim)
		return (NULL);
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
