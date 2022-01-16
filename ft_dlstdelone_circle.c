/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone_circle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:22:36 by lrocigno          #+#    #+#             */
/*   Updated: 2022/01/16 12:18:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delete the informed node, then make the previous and the next referentiate
** each other and return the next node.
*/

t_dlist	*ft_dlstdelone_circle(t_dlist *d_list, void (*del)(void *))
{
	t_dlist	*prev;
	t_dlist	*next;

	if (!d_list)
		return (NULL);
	prev = d_list->prev;
	next = d_list->next;
	del(d_list->content);
	free(d_list);
	d_list = NULL;
	prev->next = next;
	next->prev = prev;
	return (next);
}
