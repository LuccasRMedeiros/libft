/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_circle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:32:08 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/22 14:00:27 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a new item to the bottom of a circle double linked list. It consider the
** informed node as the head.
*/

void	ft_dlstadd_circle(void *content, t_dlist **d_list)
{
	t_dlist	*tail;
	t_dlist	*add;

	tail = (*d_list)->prev;
	add = ft_dlstnew(content);
	tail->next = add;
	add->prev = tail;
	add->next = *d_list;
	(*d_list)->prev = add;
}
