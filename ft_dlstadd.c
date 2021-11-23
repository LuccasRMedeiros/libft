/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:40:15 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/23 14:36:25 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a new item to the of a double linked list.
**
** NOTE: Don't use with circled lists. Use ft_dlstadd_circle instead.
*/

void	ft_dlstadd(void *content, t_dlist **dlst)
{
	t_dlist	*add;
	t_dlist	*tail;

	if (!dlst)
		return ;
	add = ft_dlstnew(content);
	tail = NULL;
	if (!*dlst)
		*dlst = add;
	else
	{
		tail = ft_dlstlast(*dlst);
		add->prev = tail;
		tail->next = add;
	}
}
