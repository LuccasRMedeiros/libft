/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:48:16 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:05:20 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_char.h>

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && (c >= 97 && c <= 122))
		c -= 32;
	return (c);
}
