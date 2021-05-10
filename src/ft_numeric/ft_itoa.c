/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:22:53 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_numeric.h>

static long int	set_ln(int n)
{
	long int	ln;

	ln = n;
	if (ln < 0)
		ln *= -1;
	return (ln);
}

char	*ft_itoa(int n)
{
	long int	ln;
	size_t		n_sz;
	size_t		t_sz;
	char		*itoa;

	ln = set_ln(n);
	n_sz = ft_intlen(n);
	t_sz = n_sz;
	if (n < 0)
		++t_sz;
	itoa = ft_calloc(t_sz + 1, sizeof *itoa);
	if (!itoa)
		return (NULL);
	while (n_sz)
	{
		itoa[--t_sz] = (ln % 10) + 48;
		ln /= 10;
		--n_sz;
	}
	while (t_sz)
		itoa[--t_sz] = '-';
	return (itoa);
}
