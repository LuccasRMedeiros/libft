/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reallocncat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:16:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:26:21 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_string.h>

/*
** First duplicate dst to a buffer, then free dst memmory and destroy it.
** Once the previous content is safe allocate more space to dst and finally	-
** copy the content of both temp and src, returning a pointer to the new	-
** address of dst.
*/

static char	dstcpy(size_t i, size_t dst_len, char *temp, char const *src)
{
	if (i < dst_len)
		return (temp[i]);
	return (src[i - dst_len]);
}

char	*ft_reallocncat(char *dst, char const *src)
{
	size_t	dst_sz;
	size_t	i;
	char	*temp;
	size_t	alloc;

	if (!dst && !src)
		return (NULL);
	dst_sz = ft_strlen(dst);
	i = 0;
	temp = ft_strdup(dst);
	alloc = ft_strlen(dst) + ft_strlen(src) + 1;
	free(dst);
	dst = NULL;
	dst = (char *)malloc(sizeof(char) * alloc);
	if (!dst)
		return (NULL);
	while (i < alloc - 1)
	{
		dst[i] = dstcpy(i, dst_sz, temp, src);
		i++;
	}
	free(temp);
	dst[i] = '\0';
	return (dst);
}
