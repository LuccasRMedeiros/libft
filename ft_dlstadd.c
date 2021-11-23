/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:40:15 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/22 23:36:54 by lrocigno         ###   ########.fr       */
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

	if (!dlst)
		return ;
	add = ft_dlstnew(content);
	if (!*dlst)
		*dlst = add;
	else
		ft_dlstlast(*dlst)->next = add;
}
