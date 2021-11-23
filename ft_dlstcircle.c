/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstcircle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:50:15 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/22 23:48:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Make a circled double linked list.
*/

t_dlist	*ft_dlstcircle(t_dlist *dlst)
{
	t_dlist	*tail;

	tail = ft_dlstlast(dlst);
	dlst = ft_dlstfirst(dlst);
	tail->next = dlst;
	dlst->prev = tail;
	return (dlst);
}
