/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strhvchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:29:12 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:13:56 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Receives a pair of strings and search for a similar char between them.
*/

#include <ft_string.h>

bool	ft_strhvchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == c)
			return (true);
		++string;
	}
	return (false);
}
