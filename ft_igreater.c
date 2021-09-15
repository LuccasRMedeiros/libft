/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_igreater.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:19:08 by lrocigno          #+#    #+#             */
/*   Updated: 2021/07/31 13:30:41 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare two integer and return the greater.
*/

int ft_igreater(int int1, int int2)
{
    if (int1 > int2)
        return (int1);
    return (int2);
}
