/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:13:07 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_numeric.h>

static long long int	set_lln(long int ln)
{
	long long int	lln;

	lln = ln;
	if (lln < 0)
		lln *= -1;
	return (lln);
}

char	*ft_ltoa(long int ln)
{
	long long int	lln;
	size_t			ln_sz;
	size_t			t_sz;
	char			*ltoa;

	lln = set_lln(ln);
	ln_sz = ft_intlen(ln);
	t_sz = ln_sz;
	if (ln < 0)
		++t_sz;
	ltoa = ft_calloc(t_sz + 1, sizeof *ltoa);
	if (!ltoa)
		return (NULL);
	while (ln_sz)
	{
		ltoa[--t_sz] = (lln % 10) + 48;
		lln /= 10;
		--ln_sz;
	}
	while (t_sz)
		ltoa[--t_sz] = '-';
	return (ltoa);
}
