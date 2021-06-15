/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroyer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:18:23 by lrocigno          #+#    #+#             */
/*   Updated: 2021/06/15 11:35:29 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Destroy arrays and free them.
** Receives a pointer to pointer of void. It run through the indexes of the    -
** major pointer and nullifies the values. then free the major pointer.
** The last data contained on the array must be (null), otherwise the function -
** will segfault.
*/

#include <ft_memory.h>

void	ft_destroyer(void **del)
{
	unsigned char	**array;
	size_t			del_i;

	if (!del)
		return ;
	array = (unsigned char **)del;
	del_i = 0;
	while (array[del_i] != NULL)
	{
		free(array[del_i]);
		array[del_i] = NULL;
		++del_i;
	}
	free(array);
}
