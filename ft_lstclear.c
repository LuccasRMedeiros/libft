/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:04:30 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/23 17:21:21 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list holder;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		del(*lst->content);
		holder = *lst->next;
		free(*lst);
		*lst = holder;
	}
	*lst = NULL;
}
