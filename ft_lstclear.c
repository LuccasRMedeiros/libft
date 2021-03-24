/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:04:30 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/24 10:20:07 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *lst_aux;
	t_list *holder;

	if (*lst == NULL)
		return ;
	lst_aux = *lst;
	while (lst_aux != NULL)
	{
		del(lst_aux->content);
		holder = lst_aux->next;
		free(lst_aux);
		lst_aux = holder;
	}
	*lst = NULL;
}
