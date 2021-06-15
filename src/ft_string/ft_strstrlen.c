/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:34:39 by lrocigno          #+#    #+#             */
/*   Updated: 2021/06/15 11:34:52 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Basically does the same as strlen, but while ft_strlen measures the size of -
** a string, ft_strstrlen measures the size of an array of strings, or how much-
**  strings exists in a pointer to pointer of char.
** Returns a size_t containg the number of strings found.
*/

#include <ft_string.h>

size_t	ft_strstrlen(char **str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (len);
	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}
