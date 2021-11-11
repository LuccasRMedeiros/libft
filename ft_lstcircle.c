/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcircle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:10:31 by lrocigno          #+#    #+#             */
/*   Updated: 2021/11/06 14:17:16 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Close a linked list, creating a circular list.
*/

t_list	*ft_lstcircle(t_list *list)
{
	t_list	*head;

	head = list;
	list = ft_lstlast(list);
	list->next = head;
	return (list);
}
