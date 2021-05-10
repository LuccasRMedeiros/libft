/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:41:59 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:23:33 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_numeric.h>

size_t	ft_uintlen(uintmax_t n)
{
	size_t		len;

	len = 1;
	while (n >= 10)
	{
		++len;
		n /= 10;
	}
	return (len);
}
