/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_circle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:04:30 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/11 00:49:11 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clear a circled linked list.
*/

void	ft_lstclear_circle(t_list **lst_del, void (*del)(void *))
{
	t_list	*head;
	t_list	*holder;

	if (*lst_del == NULL)
		return ;
	head = *lst_del;
	while (*lst_del != head)
	{
		holder = (*lst_del)->next;
		del((*lst_del)->content);
		free(*lst_del);
		*lst_del = holder;
	}
	lst_del = NULL;
}
