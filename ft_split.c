/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 01:19:29 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/01 01:46:00 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_error(char **split, int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	count_strs(char const *str, char c)
{
	size_t i;
	size_t cnt;

	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			cnt++;
		i++;
	}
	return (cnt + 1);
}

static char	*ft_strldup(char const *src, char c)
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
		split[i] = ft_strldup(str, c);
		if (!(*split[i]))
		{
			ft_error(split, i);
			return (NULL);
		}
		str = ft_strchr(str, c) + 1;
		i++;
	}
	split[i] = NULL;
	return (split);
}
