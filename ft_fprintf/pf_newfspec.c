/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_newfspec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:22:03 by lrocigno          #+#    #+#             */
/*   Updated: 2022/01/16 12:24:58 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** new_fspec return a pointer to an initialized t_fspec. It uses malloc to     -
** allocate an address to it. That mean when a t_fspec isn't needed anymore,   -
** such address must be freed.
*/

#include "ft_fprintf.h"

t_fspec	*pf_newfspec(void)
{
	t_fspec	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->init = 1;
	new->fs = '\0';
	new->w = 0;
	new->p = 0;
	new->l = 0;
	new->s = '\0';
	new->dt = NULL;
	new->sig = '\0';
	new->sz = 0;
	return (new);
}
