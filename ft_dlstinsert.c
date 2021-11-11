/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:46:41 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/08 14:17:28 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insert one item above the current one.
*/

void	ft_dlstinsert(void *content, t_dlist *d_list)
{
	t_dlist	*insert;

	insert = ft_dlstnew(content);
	insert->next = d_list;
	insert->prev = d_list->prev;
	d_list->prev = insert;
}
