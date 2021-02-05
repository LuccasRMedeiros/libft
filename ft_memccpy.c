/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:10:51 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/05 09:24:05 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, void *src, int c, int n)
{
	char	*dest_aux;
	char	*src_aux;
	int		i;
	
	dest_aux = (char*)dest;
	src_aux = (char*)src;
	i = 0;
	while (i < n && src_aux[i] != c)
	{
		dest_aux[i] = src_aux[i];
		i++;
	}
	dest_aux[i] = '\0';
	return(dest_aux);
}
