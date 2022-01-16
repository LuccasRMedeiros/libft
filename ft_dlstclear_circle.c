/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear_circle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:53:32 by lrocigno          #+#    #+#             */
/*   Updated: 2022/01/16 12:18:27 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clear a cicle double linked list.
*/

void	ft_dlstclear_circle(t_dlist **dcl_del, void (*del)(void *))
{
	t_dlist	*aux;
	t_dlist	*head;
	t_dlist	*holder;

	if (!*dcl_del)
		return ;
	aux = *dcl_del;
	head = *dcl_del;
	while (aux->next != head)
	{
		holder = aux->next;
		del(aux->content);
		free(aux);
		aux = holder;
	}
	free(aux);
	*dcl_del = NULL;
}
