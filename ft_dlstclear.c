/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:20:56 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/11 00:38:20 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clear a double linked list.
*/

void	ft_dlstclear(t_dlist **dlst_del, void(*del)(void *))
{
	t_dlist	*holder;

	if (!*dlst_del)
		return ;
	while ((*dlst_del)->prev)
		*dlst_del = (*dlst_del)->prev;
	holder = *dlst_del;
	while (*dlst_del)
	{
		holder = (*dlst_del)->next;
		del((*dlst_del)->content);
		free(*dlst_del);
		*dlst_del = holder;
	}
	*dlst_del = NULL;
}
