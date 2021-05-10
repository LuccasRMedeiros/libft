/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:13:45 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:26:14 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fstr;
	size_t	i;

	if (!s)
		return (NULL);
	fstr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!fstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
