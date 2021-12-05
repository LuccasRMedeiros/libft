/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize_circle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:49:49 by lrocigno          #+#    #+#             */
/*   Updated: 2021/12/05 20:16:22 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterate through a double circled linked list and return the number of items.
*/

int	ft_dlstsize_circle(t_dlist *dlst)
{
	t_dlist	*aux;
	t_dlist	*tail;
	int		cnt;

	tail = dlst->prev;
	cnt = 0;
	while (dlst != tail)
	{
		++cnt;
		aux = aux->next;
	}
	++cnt;
	return (cnt);
}
