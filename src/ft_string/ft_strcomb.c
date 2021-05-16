/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcomb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 09:52:14 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/16 11:38:43 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Combines the informed amount of strings and return its result.
** Does alloc memory, so the use of free after the calling of this function is -
** mandatory.
*/

#include <ft_string.h>

char	*ft_strcomb(int n_strs, ...)
{
	va_list	strs;
	char	*comb;

	va_start(strs, n_strs);
	comb = ft_calloc(1, sizeof (char *));
	if (!comb)
		return (NULL);
	while (n_strs > 0)
	{
		comb = ft_reallocncat(comb, va_arg(strs, char *));
		--n_strs;
	}
	va_end(strs);
	return (comb);
}
