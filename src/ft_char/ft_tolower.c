/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:57:38 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:13:13 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_char.h>

int	ft_tolower(int c)
{
	if (ft_isalpha(c) && (c >= 65 && c <= 90))
		c += 32;
	return (c);
}
