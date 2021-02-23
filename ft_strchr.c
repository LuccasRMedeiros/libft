/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:48:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/23 01:32:57 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	printf("\n\033[1;31m -- Function -- \n\033[0m");
	while (str[i - 1] != '\0')
	{
		printf("Looking to: %i\n", str[i -1]);
		if (str[i] == c)
		{
			return ((char*)str + i);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *d1 = strchr(src, ' ');
	char *d2 = ft_strchr(src, ' ');

	printf("d1: \033[1;33m%p - %s"
