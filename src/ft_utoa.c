/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/29 20:03:05 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	total_size(int p, char sig, size_t un_sz)
{
	size_t		t_sz;

	t_sz = 0;
	if (p < 0 || p < (int)un_sz)
		p = 0;
	else
		p -= un_sz;
	if (sig == '+' || sig == ' ')
		++t_sz;
	t_sz += p + un_sz;
	return (t_sz);
}

char	*ft_utoa(unsigned int un, int p, char sig)
{
	long unsigned int	lun;
	size_t				un_sz;
	size_t				t_sz;
	char				*utoa;

	lun = un;
	un_sz = ft_intlen(un);
	t_sz = total_size(p, sig, un_sz);
	utoa = ft_calloc(t_sz + 1, sizeof *utoa);
	if (!utoa)
		return (NULL);
	while (un_sz)
	{
		utoa[--t_sz] = (lun % 10) + 48;
		lun /= 10;
		--un_sz;
	}
	while (t_sz)
		utoa[--t_sz] = '0';
	return (utoa);
}
