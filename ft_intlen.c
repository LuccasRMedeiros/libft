/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:05:03 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/26 17:53:02 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n) 
{ 
    size_t	cnt; 
 
    cnt = 0; 
    if (n <= 0) 
    { 
        n *= -1; 
        cnt++; 
    } 
    while (n) 
    { 
        n /= 10; 
        cnt++; 
    } 
    return (cnt); 
}
