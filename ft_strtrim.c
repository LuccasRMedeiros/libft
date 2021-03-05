/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:10:10 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/04 20:43:02 by lrocigno         ###   ########.fr       */
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

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	if ((!s1 || *s1 == 0) || !set)
		return ((char*)s1);
	start = 0;
	while (ft_haschar(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_haschar(set, s1[end]))
		end--;
	i = 0;
	trim = malloc((end - start + 2) * sizeof(char));
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
