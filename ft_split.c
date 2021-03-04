/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 01:19:29 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/04 01:27:29 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_error(char **split, int len)
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

static size_t	count_strs(char const *str, char c)
{
	size_t	i;
	size_t	cnt;
	int		flag;

	cnt = 0;
	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (!flag))
			flag = 1;
		else if (str[i] == c && flag == 1)
		{
			cnt++;
			flag = 0;
		}
		i++;
	}
	return (cnt + 1);
}

static size_t	*wise(char const *str, char c, int stars)
{
	size_t	*wisdom;
	size_t	questions;
	size_t	reflections;
	size_t	truth;

	wisdom = malloc(sizeof(size_t) * (stars * 2));
	questions = 0;
	reflections = 0;
	truth = 0;
	while (str[questions] != '\0')
	{
		if (str[questions] == c)
			questions++;
		else if (str[questions] != c)
		{
			reflections = questions;
			while (str[reflections] != c && str[reflections] != '\0')
				reflections++;
			wisdom[truth++] = questions;
			wisdom[truth++] = reflections - 1;
			questions = reflections;
		}
	}
	return (wisdom);
}

static char		*ft_strldup(char const *src, size_t start, size_t end)
{
	char	*dst;
	size_t	i;

	dst = malloc(sizeof(char*) * (end - start + 1));
	i = 0;
	while (start <= end)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}

char			**ft_split(char const *str, char c)
{
	char	**split;
	size_t	n_strs;
	size_t	i;
	size_t	*list;

	n_strs = count_strs(str, c);
	i = 0;
	list = wise(str, c, n_strs);
	if (!(split = malloc(sizeof(char **) * (n_strs + 1))))
		return (NULL);
	while (i < n_strs)
	{
		split[i] = ft_strldup(str, list[i + i], list[i + (i + 1)]);
		if (!(split[i]))
		{
			ft_error(split, i);
			return (NULL);
		}
		i++;
	}
	split[i] = NULL;
	free(list);
	return (split);
}

#include <stdio.h>

int				main()
{
	size_t	i;
	char	**ret = ft_split("          ", ' ');

	for (i = 0; i < count_strs("          ", ' '); i++)
		printf("qqqqq????: \e[1;33m%s\e[0m\n", ret[i]);
	free(ret);
	return 0;
}
