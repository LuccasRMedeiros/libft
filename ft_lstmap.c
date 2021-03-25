/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:04:44 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/24 19:38:13 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ret;
	t_list *holder;

	ret = NULL;
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		holder = ft_lstnew(f(lst->content));
		if (!holder)
		{
			if (!ret)
				return (NULL);
			ft_lstclear(&ret, del);
		}
		lst = lst->next;
		ft_lstadd_back(&ret, holder);
		free(holder);
	}
	return (ret);
}
