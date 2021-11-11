/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:40:15 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/10 23:42:53 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a new item to the of a double linked list.
**
** NOTE: Don't use with circled lists. Use ft_dlstadd_circle instead.
*/

void	ft_dlstadd(void *content, t_dlist **d_list)
{
	t_dlist	*add;

	add = ft_dlstnew(content);
	while ((*d_list)->next)
		*d_list = (*d_list)->next;
	add->prev = *d_list;
	(*d_list)->next = add;
}
