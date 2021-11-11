/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_circle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:32:08 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/11 00:25:58 by lrocigno         ###   ########.fr       */
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
	add->next = *d_list;
	add->prev = tail;
	(*d_list)->prev = add;
}
