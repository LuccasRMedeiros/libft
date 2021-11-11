/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstcircle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:50:15 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/11 00:29:09 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Make a circled double linked list.
*/

t_dlist	*ft_dlstcircle(t_dlist *d_list)
{
	t_dlist	*head;

	while (d_list->prev)
		d_list = d_list->prev;
	head = d_list;
	while (d_list->next)
		d_list = d_list->next;
	head->prev = d_list;
	d_list->next = head;
	return (d_list);
}
