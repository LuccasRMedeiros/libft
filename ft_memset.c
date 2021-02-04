/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:44:45 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/04 08:56:17 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	char	*aux;
	char	cc;
	int		i;

	aux = (char*)s;
	cc = (char)c;
	i = 0;
	while (i < n)
	{
		aux[i] = cc;
		i++;
	}
	return (aux);
}
