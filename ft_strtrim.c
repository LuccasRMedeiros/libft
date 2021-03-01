/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:10:10 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/01 01:51:44 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_haschar(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static size_t	set_start(char const *s1, char const *set)
{
	size_t	many;

	many = 0;
	while (ft_haschar(set, s1[many]))
	{
		many++;
	}
	return (many);
}

static size_t	set_end(char const *s1, char const *set)
{
	size_t	s1_len;

	s1_len = ft_strlen(s1) - 1;
	while (ft_haschar(set, s1[s1_len]))
	{
		s1_len--;
	}
	return (s1_len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	start = set_start(s1, set);
	end = set_end(s1, set);
	i = 0;
	trim = malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	while (start <= end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
