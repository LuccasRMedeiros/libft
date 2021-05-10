/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:25:18 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:23:29 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_numeric.h>

size_t	ft_intlen(intmax_t n)
{
	size_t		len;

	len = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		++len;
		n /= 10;
	}
	return (len);
}
