/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear_circle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:53:32 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/11 00:46:30 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clear a cicle double linked list.
*/

void	ft_dlstclear_circle(t_dlist **dcl_del, void(*del)(void *))
{
	t_dlist	*head;
	t_dlist	*holder;

	if (!*dcl_del)
		return ;
	head = *dcl_del;
	while (*dcl_del != head)
	{
		holder = (*dcl_del)->next;
		del((*dcl_del)->content);
		free(*dcl_del);
		*dcl_del = holder;
	}
	*dcl_del = NULL;
}
