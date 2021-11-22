/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpop_circle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:01:05 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/22 20:20:54 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Remove one node from the list and closes the circle again.
*/

t_dlist	*ft_dlstpop_circle(t_dlist *dlst)
{
	t_dlist	*next;
	t_dlist	*prev;

	next = dlst->next;
	prev = dlst->prev;
	prev->next = next;
	next->prev = prev;
	free(dsl);
	dsl = next;
}
