/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 01:19:29 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/04 14:36:32 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void		ft_error(char **split, int len)
{
	while (len >= 0)
	{
		free(split[len]);
		len--;
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
		{
			cnt++;
			flag = 1;
		}
		else if (str[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (cnt);
}

static size_t	*wise(char const *str, char c, int stars)
{
	size_t	*wisdom;
	size_t	questions;
	size_t	reflections;
	size_t	truth;
	int		debugger = 0;

	if (!(wisdom = calloc((stars * 2), sizeof(int*))))
		return (NULL);
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
			wisdom[truth++] = reflections;
			debugger++;
			questions = reflections;
		}
	}
	return (wisdom);
}

char			**ft_split(char const *str, char c)
{
	char	**split;
	size_t	n_strs;
	size_t	i;
	size_t	*dl;

	n_strs = count_strs(str, c);
	i = 0;
	dl = wise(str, c, n_strs);
	if (!(split = malloc(sizeof(char **) * (n_strs + 1))))
		return (NULL);
	while (i < n_strs)
	{
		split[i] = ft_substr(str, dl[i + i], (dl[i + (i + 1)] - dl[i + i]));
		if (!(split[i]))
		{
			free(dl);
			ft_error(split, i);
			return (NULL);
		}
		i++;
	}
	free(dl);
	split[i] = NULL;
	return (split);
}

/*int				main()
{
	size_t	i;
	char	**ret = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

	for (i = 0; i < count_strs("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '); i++)
		printf("String[\e[1;35m%zu\e[0m]: \e[1;33m%s\e[0m\n", i, ret[i]);
	free(ret);
	return 0;
}*/
