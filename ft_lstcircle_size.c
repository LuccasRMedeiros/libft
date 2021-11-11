/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcircle_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:01:30 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/06 16:08:44 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterate through a circle linked list.
*/

int	ft_lstcircle_size(t_list *list)
{
	unsigned int	head;
	int				n;

	head = *list;
	n = 0;
	while ((unsigned int)*list != head)
	{
		list = list->next;
		++n;
	}
	return (n);
}
