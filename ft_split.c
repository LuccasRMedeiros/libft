/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 01:19:29 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/26 23:06:46 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char const *str, char c)
{
	size_t i;
	size_t cnt;

	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[cnt] == c)
			cnt++;
		i++;
	}
	return (cnt + 1);
}

static char	*ft_dstrcpy(char const *src, char c)
{
	int		cnt;
	int		i;
	char	*rstr;

	cnt = 0;
	i = 0;
	while (src[cnt] != '\0')
	{
		if (src[cnt] == c)
			break ;
		cnt++;
	}
	rstr = malloc(sizeof(char) * (cnt + 1));
	if (!rstr)
		return (NULL);
	while (i <= cnt)
	{
		rstr[i] = src[i];
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}

char		**ft_split(char const *str, char c)
{
	char	**split;
	size_t	s_len;
	int		n_strs;
	int		i;

	s_len = ft_strlen(str);
	n_strs = count_strs(str, c);
	i = 0;
	split = malloc(sizeof(char **) * (n_strs + 1));
	if (!split)
		return (NULL);
	while (i < n_strs)
	{
		*split[i] = *ft_dstrcpy(str, c);
		str = ft_strchr(str, c);
		i++;
	}
	return (split);
}
