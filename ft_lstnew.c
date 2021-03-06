/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:30:18 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/06 12:47:08 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_ltsnew(void *content)
{
	t_list *list;

	if (!(list = malloc(sizeof(struct t_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
